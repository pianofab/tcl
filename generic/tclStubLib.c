/*
 * tclStubLib.c --
 *
 *	Stub object that will be statically linked into extensions that want
 *	to access Tcl.
 *
 * Copyright (c) 1998-1999 by Scriptics Corporation.
 * Copyright (c) 1998 Paul Duffin.
 *
 * See the file "license.terms" for information on usage and redistribution of
 * this file, and for a DISCLAIMER OF ALL WARRANTIES.
 */

/*
 * We need to ensure that we use the stub macros so that this file contains no
 * references to any of the stub functions. This will make it possible to
 * build an extension that references Tcl_InitStubs but doesn't end up
 * including the rest of the stub functions.
 */

#define USE_TCL_STUBS

#include "tclInt.h"

MODULE_SCOPE const TclStubs *tclStubsPtr;
MODULE_SCOPE const TclPlatStubs *tclPlatStubsPtr;
MODULE_SCOPE const TclIntStubs *tclIntStubsPtr;
MODULE_SCOPE const TclIntPlatStubs *tclIntPlatStubsPtr;

const TclStubs *tclStubsPtr = NULL;
const TclPlatStubs *tclPlatStubsPtr = NULL;
const TclIntStubs *tclIntStubsPtr = NULL;
const TclIntPlatStubs *tclIntPlatStubsPtr = NULL;

static const TclStubs *
HasStubSupport(
    Tcl_Interp *interp)
{
    Interp *iPtr = (Interp *) interp;

    if (iPtr->stubTable && (iPtr->stubTable->magic == TCL_STUB_MAGIC)) {
	return iPtr->stubTable;
    }
    iPtr->result = (char *) "interpreter uses an incompatible stubs mechanism";
    iPtr->freeProc = TCL_STATIC;
    return NULL;
}

/*
 * Use our own isdigit to avoid linking to libc on windows
 */

static int isDigit(const int c)
{
    return (c >= '0' && c <= '9');
}

/*
 *----------------------------------------------------------------------
 *
 * Tcl_InitStubs --
 *
 *	Tries to initialise the stub table pointers and ensures that the
 *	correct version of Tcl is loaded.
 *
 * Results:
 *	The actual version of Tcl that satisfies the request, or NULL to
 *	indicate that an error occurred.
 *
 * Side effects:
 *	Sets the stub table pointers.
 *
 *----------------------------------------------------------------------
 */

MODULE_SCOPE const char *
TclInitStubs(
    Tcl_Interp *interp,
    const char *version,
    int exact,
    int major,
    int magic)
{
    Interp *iPtr = (Interp *) interp;
    const char *actualVersion = NULL;
    ClientData pkgData = NULL;
    const char *p, *q;

    /*
     * Detect whether the extension and the stubs library were built
     * against Tcl header files declaring use of incompatible stubs
     * mechanisms.  Even within the same mechanism, also detect if
     * the header files are from different major versions.  Either
     * is seriously broken.  An extension and its stubs library ought
     * to share compatible headers, if not the same one.
     */

    if (magic != TCL_STUB_MAGIC || major != TCL_MAJOR_VERSION) {
	iPtr->result =
	    (char *) "extension linked to incompatible stubs library";
	iPtr->freeProc = TCL_STATIC;
	return NULL;
    }

    /*
     * Detect whether an extension compiled against a Tcl header file
     * of one major version is requesting to use a stubs table of a
     * different major version.  According to our compat rules, that's
     * a request that cannot succeed.  Different major versions imply
     * incompatible stub tables.
     */

    p = version;
    q = TCL_VERSION;
    while (isDigit(*p)) {
	if (*p++ != *q++) {
	    goto badVersion;
	}
    }
    if (isDigit(*q)) {
    badVersion:
	iPtr->result =
	    (char *) "extension passed bad version argument to stubs library";
	iPtr->freeProc = TCL_STATIC;
	return NULL;
    }

    /*
     * We can't optimize this check by caching tclStubsPtr because that
     * prevents apps from being able to load/unload Tcl dynamically multiple
     * times. [Bug 615304]
     */

    tclStubsPtr = HasStubSupport(interp);
    if (!tclStubsPtr) {
	return NULL;
    }

    actualVersion = Tcl_PkgRequireEx(interp, "Tcl", version, 0, &pkgData);
    if (actualVersion == NULL) {
	return NULL;
    }
    if (exact) {
	int count = 0;

	p = version;
	while (*p) {
	    count += !isDigit(*p++);
	}
	if (count == 1) {
	    q = actualVersion;

	    p = version;
	    while (*p && (*p == *q)) {
		p++; q++;
	    }
	    if (*p) {
		/* Construct error message */
		Tcl_PkgRequireEx(interp, "Tcl", version, 1, NULL);
		return NULL;
	    }
	} else {
	    actualVersion = Tcl_PkgRequireEx(interp, "Tcl", version, 1, NULL);
	    if (actualVersion == NULL) {
		return NULL;
	    }
	}
    }
    tclStubsPtr = (TclStubs *) pkgData;

    if (tclStubsPtr->hooks) {
	tclPlatStubsPtr = tclStubsPtr->hooks->tclPlatStubs;
	tclIntStubsPtr = tclStubsPtr->hooks->tclIntStubs;
	tclIntPlatStubsPtr = tclStubsPtr->hooks->tclIntPlatStubs;
    } else {
	tclPlatStubsPtr = NULL;
	tclIntStubsPtr = NULL;
	tclIntPlatStubsPtr = NULL;
    }

    return actualVersion;
}

/*
 * This routine is included only so that extensions compiled against
 * 8.5 and earlier headers (which do not define Tcl_InitStubs() as a macro)
 * can successfully link to libtclstubs8.6.a.  This leaves them suffering
 * from the formerly broken design.  (See Tcl Bug 3588687).
 *
 * This routine should not merge forward to Tcl 9 work.  Extensions
 * compiled against 8.5 and earlier headers that try to link to 
 * libtclstubs9*.a should suffer the link failure.
 */
#undef Tcl_InitStubs
MODULE_SCOPE const char *
Tcl_InitStubs(
    Tcl_Interp *interp,
    const char *version,
    int exact)
{
    return TclInitStubs(interp, version, exact, 8, TCL_STUB_MAGIC);
}

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 4
 * fill-column: 78
 * End:
 */
