/* 
 * tclStubInit.c --
 *
 *	This file contains the initializers for the Tcl stub vectors.
 *
 * Copyright (c) 1998-1999 by Scriptics Corporation.
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * RCS: @(#) $Id: tclStubInit.c,v 1.35.2.7.2.2 2002/11/26 19:48:58 andreas_kupries Exp $
 */

#include "tclInt.h"
#include "tclPort.h"

/*
 * Remove macros that will interfere with the definitions below.
 */

#undef Tcl_Alloc
#undef Tcl_Free
#undef Tcl_Realloc
#undef Tcl_NewBooleanObj
#undef Tcl_NewByteArrayObj
#undef Tcl_NewDoubleObj
#undef Tcl_NewIntObj
#undef Tcl_NewListObj
#undef Tcl_NewLongObj
#undef Tcl_NewObj
#undef Tcl_NewStringObj
#undef Tcl_DumpActiveMemory
#undef Tcl_ValidateAllMemory

/*
 * WARNING: The contents of this file is automatically generated by the
 * tools/genStubs.tcl script. Any modifications to the function declarations
 * below should be made in the generic/tcl.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

TclIntStubs tclIntStubs = {
    TCL_STUB_MAGIC,
    NULL,
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 0*/
#else  /* TCL_NO_FILESYSTEM */
    TclAccess, /* 0 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 1*/
#else  /* TCL_NO_FILESYSTEM */
    TclAccessDeleteProc, /* 1 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 2*/
#else  /* TCL_NO_FILESYSTEM */
    TclAccessInsertProc, /* 2 */
#endif /* TCL_NO_FILESYSTEM */
    TclAllocateFreeObjects, /* 3 */
    NULL, /* 4 */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
#if defined(TCL_NO_PIPES)
    NULL, /* 5*/
#else  /* TCL_NO_PIPES */
    TclCleanupChildren, /* 5 */
#endif /* TCL_NO_PIPES */
#endif /* UNIX */
#ifdef __WIN32__
#if defined(TCL_NO_PIPES)
    NULL, /* 5*/
#else  /* TCL_NO_PIPES */
    TclCleanupChildren, /* 5 */
#endif /* TCL_NO_PIPES */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 5 */
#endif /* MAC_TCL */
    TclCleanupCommand, /* 6 */
    TclCopyAndCollapse, /* 7 */
#if defined(TCL_NO_CHANNELCOPY)
    NULL, /* 8*/
#else  /* TCL_NO_CHANNELCOPY */
    TclCopyChannel, /* 8 */
#endif /* TCL_NO_CHANNELCOPY */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
#if defined(TCL_NO_FILESYSTEM) || defined(TCL_NO_PIPES)
    NULL, /* 9*/
#else  /* TCL_NO_FILESYSTEM TCL_NO_PIPES */
    TclCreatePipeline, /* 9 */
#endif /* TCL_NO_FILESYSTEM TCL_NO_PIPES */
#endif /* UNIX */
#ifdef __WIN32__
#if defined(TCL_NO_FILESYSTEM) || defined(TCL_NO_PIPES)
    NULL, /* 9*/
#else  /* TCL_NO_FILESYSTEM TCL_NO_PIPES */
    TclCreatePipeline, /* 9 */
#endif /* TCL_NO_FILESYSTEM TCL_NO_PIPES */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 9 */
#endif /* MAC_TCL */
    TclCreateProc, /* 10 */
    TclDeleteCompiledLocalVars, /* 11 */
    TclDeleteVars, /* 12 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 13*/
#else  /* TCL_NO_FILESYSTEM */
    TclDoGlob, /* 13 */
#endif /* TCL_NO_FILESYSTEM */
    TclDumpMemoryInfo, /* 14 */
    NULL, /* 15 */
    TclExprFloatError, /* 16 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 17*/
#else  /* TCL_NO_FILESYSTEM */
    TclFileAttrsCmd, /* 17 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 18*/
#else  /* TCL_NO_FILESYSTEM */
    TclFileCopyCmd, /* 18 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 19*/
#else  /* TCL_NO_FILESYSTEM */
    TclFileDeleteCmd, /* 19 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 20*/
#else  /* TCL_NO_FILESYSTEM */
    TclFileMakeDirsCmd, /* 20 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 21*/
#else  /* TCL_NO_FILESYSTEM */
    TclFileRenameCmd, /* 21 */
#endif /* TCL_NO_FILESYSTEM */
    TclFindElement, /* 22 */
    TclFindProc, /* 23 */
    TclFormatInt, /* 24 */
    TclFreePackageInfo, /* 25 */
    NULL, /* 26 */
    TclGetDate, /* 27 */
    TclpGetDefaultStdChannel, /* 28 */
    TclGetElementOfIndexedArray, /* 29 */
    NULL, /* 30 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 31*/
#else  /* TCL_NO_FILESYSTEM */
    TclGetExtension, /* 31 */
#endif /* TCL_NO_FILESYSTEM */
    TclGetFrame, /* 32 */
    TclGetInterpProc, /* 33 */
    TclGetIntForIndex, /* 34 */
    TclGetIndexedScalar, /* 35 */
    TclGetLong, /* 36 */
    TclGetLoadedPackages, /* 37 */
    TclGetNamespaceForQualName, /* 38 */
    TclGetObjInterpProc, /* 39 */
    TclGetOpenMode, /* 40 */
    TclGetOriginalCommand, /* 41 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 42*/
#else  /* TCL_NO_FILESYSTEM */
    TclpGetUserHome, /* 42 */
#endif /* TCL_NO_FILESYSTEM */
    TclGlobalInvoke, /* 43 */
    TclGuessPackageName, /* 44 */
    TclHideUnsafeCommands, /* 45 */
    TclInExit, /* 46 */
    TclIncrElementOfIndexedArray, /* 47 */
    TclIncrIndexedScalar, /* 48 */
    TclIncrVar2, /* 49 */
    TclInitCompiledLocals, /* 50 */
#if defined(TCL_NO_SLAVEINTERP) && defined (TCL_NO_CMDALIASES)
    NULL, /* 51*/
#else  /* TCL_NO_SLAVEINTERP TCL_NO_CMDALIASES */
    TclInterpInit, /* 51 */
#endif /* TCL_NO_SLAVEINTERP TCL_NO_CMDALIASES */
    TclInvoke, /* 52 */
    TclInvokeObjectCommand, /* 53 */
    TclInvokeStringCommand, /* 54 */
    TclIsProc, /* 55 */
    NULL, /* 56 */
    NULL, /* 57 */
    TclLookupVar, /* 58 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 59*/
#else  /* TCL_NO_FILESYSTEM */
    TclpMatchFiles, /* 59 */
#endif /* TCL_NO_FILESYSTEM */
    TclNeedSpace, /* 60 */
    TclNewProcBodyObj, /* 61 */
    TclObjCommandComplete, /* 62 */
    TclObjInterpProc, /* 63 */
    TclObjInvoke, /* 64 */
    TclObjInvokeGlobal, /* 65 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 66*/
#else  /* TCL_NO_FILESYSTEM */
    TclOpenFileChannelDeleteProc, /* 66 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 67*/
#else  /* TCL_NO_FILESYSTEM */
    TclOpenFileChannelInsertProc, /* 67 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 68*/
#else  /* TCL_NO_FILESYSTEM */
    TclpAccess, /* 68 */
#endif /* TCL_NO_FILESYSTEM */
    TclpAlloc, /* 69 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 70*/
#else  /* TCL_NO_FILESYSTEM */
    TclpCopyFile, /* 70 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 71*/
#else  /* TCL_NO_FILESYSTEM */
    TclpCopyDirectory, /* 71 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 72*/
#else  /* TCL_NO_FILESYSTEM */
    TclpCreateDirectory, /* 72 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 73*/
#else  /* TCL_NO_FILESYSTEM */
    TclpDeleteFile, /* 73 */
#endif /* TCL_NO_FILESYSTEM */
    TclpFree, /* 74 */
    TclpGetClicks, /* 75 */
    TclpGetSeconds, /* 76 */
    TclpGetTime, /* 77 */
    TclpGetTimeZone, /* 78 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 79*/
#else  /* TCL_NO_FILESYSTEM */
    TclpListVolumes, /* 79 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM) || defined(TCL_NO_NONSTDCHAN)
    NULL, /* 80*/
#else  /* TCL_NO_FILESYSTEM TCL_NO_NONSTDCHAN */
    TclpOpenFileChannel, /* 80 */
#endif /* TCL_NO_FILESYSTEM TCL_NO_NONSTDCHAN */
    TclpRealloc, /* 81 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 82*/
#else  /* TCL_NO_FILESYSTEM */
    TclpRemoveDirectory, /* 82 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 83*/
#else  /* TCL_NO_FILESYSTEM */
    TclpRenameFile, /* 83 */
#endif /* TCL_NO_FILESYSTEM */
    NULL, /* 84 */
    NULL, /* 85 */
    NULL, /* 86 */
    NULL, /* 87 */
    TclPrecTraceProc, /* 88 */
#if defined(TCL_NO_CMDALIASES)
    NULL, /* 89*/
#else  /* TCL_NO_CMDALIASES */
    TclPreventAliasLoop, /* 89 */
#endif /* TCL_NO_CMDALIASES */
    NULL, /* 90 */
    TclProcCleanupProc, /* 91 */
    TclProcCompileProc, /* 92 */
    TclProcDeleteProc, /* 93 */
    TclProcInterpProc, /* 94 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 95*/
#else  /* TCL_NO_FILESYSTEM */
    TclpStat, /* 95 */
#endif /* TCL_NO_FILESYSTEM */
    TclRenameCommand, /* 96 */
    TclResetShadowedCmdRefs, /* 97 */
    TclServiceIdle, /* 98 */
    TclSetElementOfIndexedArray, /* 99 */
    TclSetIndexedScalar, /* 100 */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
    TclSetPreInitScript, /* 101 */
#endif /* UNIX */
#ifdef __WIN32__
    TclSetPreInitScript, /* 101 */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 101 */
#endif /* MAC_TCL */
    TclSetupEnv, /* 102 */
    TclSockGetPort, /* 103 */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
    TclSockMinimumBuffers, /* 104 */
#endif /* UNIX */
#ifdef __WIN32__
    TclSockMinimumBuffers, /* 104 */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 104 */
#endif /* MAC_TCL */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 105*/
#else  /* TCL_NO_FILESYSTEM */
    TclStat, /* 105 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 106*/
#else  /* TCL_NO_FILESYSTEM */
    TclStatDeleteProc, /* 106 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 107*/
#else  /* TCL_NO_FILESYSTEM */
    TclStatInsertProc, /* 107 */
#endif /* TCL_NO_FILESYSTEM */
    TclTeardownNamespace, /* 108 */
    TclUpdateReturnInfo, /* 109 */
    NULL, /* 110 */
    Tcl_AddInterpResolvers, /* 111 */
    Tcl_AppendExportList, /* 112 */
    Tcl_CreateNamespace, /* 113 */
    Tcl_DeleteNamespace, /* 114 */
    Tcl_Export, /* 115 */
    Tcl_FindCommand, /* 116 */
    Tcl_FindNamespace, /* 117 */
    Tcl_GetInterpResolvers, /* 118 */
    Tcl_GetNamespaceResolvers, /* 119 */
    Tcl_FindNamespaceVar, /* 120 */
    Tcl_ForgetImport, /* 121 */
    Tcl_GetCommandFromObj, /* 122 */
    Tcl_GetCommandFullName, /* 123 */
    Tcl_GetCurrentNamespace, /* 124 */
    Tcl_GetGlobalNamespace, /* 125 */
    Tcl_GetVariableFullName, /* 126 */
    Tcl_Import, /* 127 */
    Tcl_PopCallFrame, /* 128 */
    Tcl_PushCallFrame, /* 129 */
    Tcl_RemoveInterpResolvers, /* 130 */
    Tcl_SetNamespaceResolvers, /* 131 */
    TclpHasSockets, /* 132 */
    TclpGetDate, /* 133 */
    TclpStrftime, /* 134 */
    TclpCheckStackSpace, /* 135 */
    NULL, /* 136 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 137*/
#else  /* TCL_NO_FILESYSTEM */
    TclpChdir, /* 137 */
#endif /* TCL_NO_FILESYSTEM */
    TclGetEnv, /* 138 */
#if defined(TCL_NO_FILESYSTEM) || defined(TCL_NO_LOADCMD)
    NULL, /* 139*/
#else  /* TCL_NO_FILESYSTEM TCL_NO_LOADCMD */
    TclpLoadFile, /* 139 */
#endif /* TCL_NO_FILESYSTEM TCL_NO_LOADCMD */
    TclLooksLikeInt, /* 140 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 141*/
#else  /* TCL_NO_FILESYSTEM */
    TclpGetCwd, /* 141 */
#endif /* TCL_NO_FILESYSTEM */
    TclSetByteCodeFromAny, /* 142 */
    TclAddLiteralObj, /* 143 */
    TclHideLiteral, /* 144 */
    TclGetAuxDataType, /* 145 */
    TclHandleCreate, /* 146 */
    TclHandleFree, /* 147 */
    TclHandlePreserve, /* 148 */
    TclHandleRelease, /* 149 */
    TclRegAbout, /* 150 */
    TclRegExpRangeUniChar, /* 151 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 152*/
#else  /* TCL_NO_FILESYSTEM */
    TclSetLibraryPath, /* 152 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 153*/
#else  /* TCL_NO_FILESYSTEM */
    TclGetLibraryPath, /* 153 */
#endif /* TCL_NO_FILESYSTEM */
    NULL, /* 154 */
    NULL, /* 155 */
    TclRegError, /* 156 */
    TclVarTraceExists, /* 157 */
    TclSetStartupScriptFileName, /* 158 */
    TclGetStartupScriptFileName, /* 159 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 160*/
#else  /* TCL_NO_FILESYSTEM */
    TclpMatchFilesTypes, /* 160 */
#endif /* TCL_NO_FILESYSTEM */
    TclChannelTransform, /* 161 */
#if defined(TCL_NO_FILEEVENTS)
    NULL, /* 162*/
#else  /* TCL_NO_FILEEVENTS */
    TclChannelEventScriptInvoker, /* 162 */
#endif /* TCL_NO_FILEEVENTS */
    TclGetInstructionTable, /* 163 */
    TclExpandCodeArray, /* 164 */
};

TclIntPlatStubs tclIntPlatStubs = {
    TCL_STUB_MAGIC,
    NULL,
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
#if defined(TCL_NO_PIPES)
    NULL, /* 0*/
#else  /* TCL_NO_PIPES */
    TclGetAndDetachPids, /* 0 */
#endif /* TCL_NO_PIPES */
#if defined(TCL_NO_PIPES)
    NULL, /* 1*/
#else  /* TCL_NO_PIPES */
    TclpCloseFile, /* 1 */
#endif /* TCL_NO_PIPES */
#if defined(TCL_NO_PIPES)
    NULL, /* 2*/
#else  /* TCL_NO_PIPES */
    TclpCreateCommandChannel, /* 2 */
#endif /* TCL_NO_PIPES */
#if defined(TCL_NO_PIPES)
    NULL, /* 3*/
#else  /* TCL_NO_PIPES */
    TclpCreatePipe, /* 3 */
#endif /* TCL_NO_PIPES */
#if defined(TCL_NO_PIPES)
    NULL, /* 4*/
#else  /* TCL_NO_PIPES */
    TclpCreateProcess, /* 4 */
#endif /* TCL_NO_PIPES */
    NULL, /* 5 */
#if defined(TCL_NO_PIPES)
    NULL, /* 6*/
#else  /* TCL_NO_PIPES */
    TclpMakeFile, /* 6 */
#endif /* TCL_NO_PIPES */
#if defined(TCL_NO_PIPES)
    NULL, /* 7*/
#else  /* TCL_NO_PIPES */
    TclpOpenFile, /* 7 */
#endif /* TCL_NO_PIPES */
    TclUnixWaitForFile, /* 8 */
#if defined(TCL_NO_PIPES)
    NULL, /* 9*/
#else  /* TCL_NO_PIPES */
    TclpCreateTempFile, /* 9 */
#endif /* TCL_NO_PIPES */
#endif /* UNIX */
#ifdef __WIN32__
    TclWinConvertError, /* 0 */
    TclWinConvertWSAError, /* 1 */
    TclWinGetServByName, /* 2 */
    TclWinGetSockOpt, /* 3 */
    TclWinGetTclInstance, /* 4 */
    NULL, /* 5 */
    TclWinNToHS, /* 6 */
    TclWinSetSockOpt, /* 7 */
    TclpGetPid, /* 8 */
    TclWinGetPlatformId, /* 9 */
    NULL, /* 10 */
#if defined(TCL_NO_PIPES)
    NULL, /* 11*/
#else  /* TCL_NO_PIPES */
    TclGetAndDetachPids, /* 11 */
#endif /* TCL_NO_PIPES */
    TclpCloseFile, /* 12 */
    TclpCreateCommandChannel, /* 13 */
    TclpCreatePipe, /* 14 */
    TclpCreateProcess, /* 15 */
    NULL, /* 16 */
    NULL, /* 17 */
    TclpMakeFile, /* 18 */
    TclpOpenFile, /* 19 */
    TclWinAddProcess, /* 20 */
    NULL, /* 21 */
    TclpCreateTempFile, /* 22 */
    TclpGetTZName, /* 23 */
    TclWinNoBackslash, /* 24 */
    TclWinGetPlatform, /* 25 */
    TclWinSetInterfaces, /* 26 */
    TclWinFlushDirtyChannels, /* 27 */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    TclpSysAlloc, /* 0 */
    TclpSysFree, /* 1 */
    TclpSysRealloc, /* 2 */
    TclpExit, /* 3 */
    FSpGetDefaultDir, /* 4 */
    FSpSetDefaultDir, /* 5 */
    FSpFindFolder, /* 6 */
    GetGlobalMouseTcl, /* 7 */
    FSpGetDirectoryIDTcl, /* 8 */
    FSpOpenResFileCompatTcl, /* 9 */
    FSpCreateResFileCompatTcl, /* 10 */
    FSpLocationFromPath, /* 11 */
    FSpPathFromLocation, /* 12 */
    TclMacExitHandler, /* 13 */
    TclMacInitExitToShell, /* 14 */
    TclMacInstallExitToShellPatch, /* 15 */
    TclMacOSErrorToPosixError, /* 16 */
    TclMacRemoveTimer, /* 17 */
    TclMacStartTimer, /* 18 */
    TclMacTimerExpired, /* 19 */
    TclMacRegisterResourceFork, /* 20 */
    TclMacUnRegisterResourceFork, /* 21 */
    TclMacCreateEnv, /* 22 */
    TclMacFOpenHack, /* 23 */
    TclpGetTZName, /* 24 */
    TclMacChmod, /* 25 */
#endif /* MAC_TCL */
};

TclPlatStubs tclPlatStubs = {
    TCL_STUB_MAGIC,
    NULL,
#ifdef __WIN32__
    Tcl_WinUtfToTChar, /* 0 */
    Tcl_WinTCharToUtf, /* 1 */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    Tcl_MacSetEventProc, /* 0 */
    Tcl_MacConvertTextResource, /* 1 */
    Tcl_MacEvalResource, /* 2 */
    Tcl_MacFindResource, /* 3 */
    Tcl_GetOSTypeFromObj, /* 4 */
    Tcl_SetOSTypeObj, /* 5 */
    Tcl_NewOSTypeObj, /* 6 */
    strncasecmp, /* 7 */
    strcasecmp, /* 8 */
#endif /* MAC_TCL */
};

static TclStubHooks tclStubHooks = {
    &tclPlatStubs,
    &tclIntStubs,
    &tclIntPlatStubs
};

TclStubs tclStubs = {
    TCL_STUB_MAGIC,
    &tclStubHooks,
    Tcl_PkgProvideEx, /* 0 */
    Tcl_PkgRequireEx, /* 1 */
    Tcl_Panic, /* 2 */
    Tcl_Alloc, /* 3 */
    Tcl_Free, /* 4 */
    Tcl_Realloc, /* 5 */
    Tcl_DbCkalloc, /* 6 */
    Tcl_DbCkfree, /* 7 */
    Tcl_DbCkrealloc, /* 8 */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
#if defined(TCL_NO_FILEEVENTS)
    NULL, /* 9*/
#else  /* TCL_NO_FILEEVENTS */
    Tcl_CreateFileHandler, /* 9 */
#endif /* TCL_NO_FILEEVENTS */
#endif /* UNIX */
#ifdef __WIN32__
    NULL, /* 9 */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 9 */
#endif /* MAC_TCL */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
#if defined(TCL_NO_FILEEVENTS)
    NULL, /* 10*/
#else  /* TCL_NO_FILEEVENTS */
    Tcl_DeleteFileHandler, /* 10 */
#endif /* TCL_NO_FILEEVENTS */
#endif /* UNIX */
#ifdef __WIN32__
    NULL, /* 10 */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 10 */
#endif /* MAC_TCL */
    Tcl_SetTimer, /* 11 */
    Tcl_Sleep, /* 12 */
    Tcl_WaitForEvent, /* 13 */
    Tcl_AppendAllObjTypes, /* 14 */
    Tcl_AppendStringsToObj, /* 15 */
    Tcl_AppendToObj, /* 16 */
    Tcl_ConcatObj, /* 17 */
    Tcl_ConvertToType, /* 18 */
    Tcl_DbDecrRefCount, /* 19 */
    Tcl_DbIncrRefCount, /* 20 */
    Tcl_DbIsShared, /* 21 */
    Tcl_DbNewBooleanObj, /* 22 */
    Tcl_DbNewByteArrayObj, /* 23 */
    Tcl_DbNewDoubleObj, /* 24 */
    Tcl_DbNewListObj, /* 25 */
    Tcl_DbNewLongObj, /* 26 */
    Tcl_DbNewObj, /* 27 */
    Tcl_DbNewStringObj, /* 28 */
    Tcl_DuplicateObj, /* 29 */
    TclFreeObj, /* 30 */
    Tcl_GetBoolean, /* 31 */
    Tcl_GetBooleanFromObj, /* 32 */
    Tcl_GetByteArrayFromObj, /* 33 */
    Tcl_GetDouble, /* 34 */
    Tcl_GetDoubleFromObj, /* 35 */
    Tcl_GetIndexFromObj, /* 36 */
    Tcl_GetInt, /* 37 */
    Tcl_GetIntFromObj, /* 38 */
    Tcl_GetLongFromObj, /* 39 */
    Tcl_GetObjType, /* 40 */
    Tcl_GetStringFromObj, /* 41 */
    Tcl_InvalidateStringRep, /* 42 */
    Tcl_ListObjAppendList, /* 43 */
    Tcl_ListObjAppendElement, /* 44 */
    Tcl_ListObjGetElements, /* 45 */
    Tcl_ListObjIndex, /* 46 */
    Tcl_ListObjLength, /* 47 */
    Tcl_ListObjReplace, /* 48 */
    Tcl_NewBooleanObj, /* 49 */
    Tcl_NewByteArrayObj, /* 50 */
    Tcl_NewDoubleObj, /* 51 */
    Tcl_NewIntObj, /* 52 */
    Tcl_NewListObj, /* 53 */
    Tcl_NewLongObj, /* 54 */
    Tcl_NewObj, /* 55 */
    Tcl_NewStringObj, /* 56 */
    Tcl_SetBooleanObj, /* 57 */
    Tcl_SetByteArrayLength, /* 58 */
    Tcl_SetByteArrayObj, /* 59 */
    Tcl_SetDoubleObj, /* 60 */
    Tcl_SetIntObj, /* 61 */
    Tcl_SetListObj, /* 62 */
    Tcl_SetLongObj, /* 63 */
    Tcl_SetObjLength, /* 64 */
    Tcl_SetStringObj, /* 65 */
    Tcl_AddErrorInfo, /* 66 */
    Tcl_AddObjErrorInfo, /* 67 */
    Tcl_AllowExceptions, /* 68 */
    Tcl_AppendElement, /* 69 */
    Tcl_AppendResult, /* 70 */
    Tcl_AsyncCreate, /* 71 */
    Tcl_AsyncDelete, /* 72 */
    Tcl_AsyncInvoke, /* 73 */
    Tcl_AsyncMark, /* 74 */
    Tcl_AsyncReady, /* 75 */
    Tcl_BackgroundError, /* 76 */
    Tcl_Backslash, /* 77 */
    Tcl_BadChannelOption, /* 78 */
    Tcl_CallWhenDeleted, /* 79 */
    Tcl_CancelIdleCall, /* 80 */
    Tcl_Close, /* 81 */
    Tcl_CommandComplete, /* 82 */
    Tcl_Concat, /* 83 */
    Tcl_ConvertElement, /* 84 */
    Tcl_ConvertCountedElement, /* 85 */
#if defined(TCL_NO_CMDALIASES)
    NULL, /* 86*/
#else  /* TCL_NO_CMDALIASES */
    Tcl_CreateAlias, /* 86 */
#endif /* TCL_NO_CMDALIASES */
#if defined(TCL_NO_CMDALIASES)
    NULL, /* 87*/
#else  /* TCL_NO_CMDALIASES */
    Tcl_CreateAliasObj, /* 87 */
#endif /* TCL_NO_CMDALIASES */
    Tcl_CreateChannel, /* 88 */
#if defined(TCL_NO_FILEEVENTS)
    NULL, /* 89*/
#else  /* TCL_NO_FILEEVENTS */
    Tcl_CreateChannelHandler, /* 89 */
#endif /* TCL_NO_FILEEVENTS */
    Tcl_CreateCloseHandler, /* 90 */
    Tcl_CreateCommand, /* 91 */
    Tcl_CreateEventSource, /* 92 */
    Tcl_CreateExitHandler, /* 93 */
    Tcl_CreateInterp, /* 94 */
    Tcl_CreateMathFunc, /* 95 */
    Tcl_CreateObjCommand, /* 96 */
#if defined(TCL_NO_SLAVEINTERP)
    NULL, /* 97*/
#else  /* TCL_NO_SLAVEINTERP */
    Tcl_CreateSlave, /* 97 */
#endif /* TCL_NO_SLAVEINTERP */
    Tcl_CreateTimerHandler, /* 98 */
    Tcl_CreateTrace, /* 99 */
    Tcl_DeleteAssocData, /* 100 */
#if defined(TCL_NO_FILEEVENTS)
    NULL, /* 101*/
#else  /* TCL_NO_FILEEVENTS */
    Tcl_DeleteChannelHandler, /* 101 */
#endif /* TCL_NO_FILEEVENTS */
    Tcl_DeleteCloseHandler, /* 102 */
    Tcl_DeleteCommand, /* 103 */
    Tcl_DeleteCommandFromToken, /* 104 */
    Tcl_DeleteEvents, /* 105 */
    Tcl_DeleteEventSource, /* 106 */
    Tcl_DeleteExitHandler, /* 107 */
    Tcl_DeleteHashEntry, /* 108 */
    Tcl_DeleteHashTable, /* 109 */
    Tcl_DeleteInterp, /* 110 */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
#if defined(TCL_NO_PIPES)
    NULL, /* 111*/
#else  /* TCL_NO_PIPES */
    Tcl_DetachPids, /* 111 */
#endif /* TCL_NO_PIPES */
#endif /* UNIX */
#ifdef __WIN32__
#if defined(TCL_NO_PIPES)
    NULL, /* 111*/
#else  /* TCL_NO_PIPES */
    Tcl_DetachPids, /* 111 */
#endif /* TCL_NO_PIPES */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 111 */
#endif /* MAC_TCL */
    Tcl_DeleteTimerHandler, /* 112 */
    Tcl_DeleteTrace, /* 113 */
    Tcl_DontCallWhenDeleted, /* 114 */
    Tcl_DoOneEvent, /* 115 */
    Tcl_DoWhenIdle, /* 116 */
    Tcl_DStringAppend, /* 117 */
    Tcl_DStringAppendElement, /* 118 */
    Tcl_DStringEndSublist, /* 119 */
    Tcl_DStringFree, /* 120 */
    Tcl_DStringGetResult, /* 121 */
    Tcl_DStringInit, /* 122 */
    Tcl_DStringResult, /* 123 */
    Tcl_DStringSetLength, /* 124 */
    Tcl_DStringStartSublist, /* 125 */
    Tcl_Eof, /* 126 */
    Tcl_ErrnoId, /* 127 */
    Tcl_ErrnoMsg, /* 128 */
    Tcl_Eval, /* 129 */
#if defined(TCL_NO_FILESYSTEM) || defined(TCL_NO_NONSTDCHAN)
    NULL, /* 130*/
#else  /* TCL_NO_FILESYSTEM TCL_NO_NONSTDCHAN */
    Tcl_EvalFile, /* 130 */
#endif /* TCL_NO_FILESYSTEM TCL_NO_NONSTDCHAN */
    Tcl_EvalObj, /* 131 */
    Tcl_EventuallyFree, /* 132 */
    Tcl_Exit, /* 133 */
    Tcl_ExposeCommand, /* 134 */
    Tcl_ExprBoolean, /* 135 */
    Tcl_ExprBooleanObj, /* 136 */
    Tcl_ExprDouble, /* 137 */
    Tcl_ExprDoubleObj, /* 138 */
    Tcl_ExprLong, /* 139 */
    Tcl_ExprLongObj, /* 140 */
    Tcl_ExprObj, /* 141 */
    Tcl_ExprString, /* 142 */
    Tcl_Finalize, /* 143 */
    Tcl_FindExecutable, /* 144 */
    Tcl_FirstHashEntry, /* 145 */
    Tcl_Flush, /* 146 */
    Tcl_FreeResult, /* 147 */
#if defined(TCL_NO_CMDALIASES)
    NULL, /* 148*/
#else  /* TCL_NO_CMDALIASES */
    Tcl_GetAlias, /* 148 */
#endif /* TCL_NO_CMDALIASES */
#if defined(TCL_NO_CMDALIASES)
    NULL, /* 149*/
#else  /* TCL_NO_CMDALIASES */
    Tcl_GetAliasObj, /* 149 */
#endif /* TCL_NO_CMDALIASES */
    Tcl_GetAssocData, /* 150 */
    Tcl_GetChannel, /* 151 */
    Tcl_GetChannelBufferSize, /* 152 */
    Tcl_GetChannelHandle, /* 153 */
    Tcl_GetChannelInstanceData, /* 154 */
    Tcl_GetChannelMode, /* 155 */
    Tcl_GetChannelName, /* 156 */
#if defined(TCL_NO_CHANNEL_CONFIG)
    NULL, /* 157*/
#else  /* TCL_NO_CHANNEL_CONFIG */
    Tcl_GetChannelOption, /* 157 */
#endif /* TCL_NO_CHANNEL_CONFIG */
    Tcl_GetChannelType, /* 158 */
    Tcl_GetCommandInfo, /* 159 */
    Tcl_GetCommandName, /* 160 */
    Tcl_GetErrno, /* 161 */
    Tcl_GetHostName, /* 162 */
#if defined(TCL_NO_SLAVEINTERP) && defined (TCL_NO_CMDALIASES)
    NULL, /* 163*/
#else  /* TCL_NO_SLAVEINTERP TCL_NO_CMDALIASES */
    Tcl_GetInterpPath, /* 163 */
#endif /* TCL_NO_SLAVEINTERP TCL_NO_CMDALIASES */
#if defined(TCL_NO_SLAVEINTERP) && defined (TCL_NO_CMDALIASES)
    NULL, /* 164*/
#else  /* TCL_NO_SLAVEINTERP TCL_NO_CMDALIASES */
    Tcl_GetMaster, /* 164 */
#endif /* TCL_NO_SLAVEINTERP TCL_NO_CMDALIASES */
    Tcl_GetNameOfExecutable, /* 165 */
    Tcl_GetObjResult, /* 166 */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
    Tcl_GetOpenFile, /* 167 */
#endif /* UNIX */
#ifdef __WIN32__
    NULL, /* 167 */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 167 */
#endif /* MAC_TCL */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 168*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_GetPathType, /* 168 */
#endif /* TCL_NO_FILESYSTEM */
    Tcl_Gets, /* 169 */
    Tcl_GetsObj, /* 170 */
    Tcl_GetServiceMode, /* 171 */
#if defined(TCL_NO_SLAVEINTERP) && defined (TCL_NO_CMDALIASES)
    NULL, /* 172*/
#else  /* TCL_NO_SLAVEINTERP TCL_NO_CMDALIASES */
    Tcl_GetSlave, /* 172 */
#endif /* TCL_NO_SLAVEINTERP TCL_NO_CMDALIASES */
    Tcl_GetStdChannel, /* 173 */
    Tcl_GetStringResult, /* 174 */
    Tcl_GetVar, /* 175 */
    Tcl_GetVar2, /* 176 */
    Tcl_GlobalEval, /* 177 */
    Tcl_GlobalEvalObj, /* 178 */
    Tcl_HideCommand, /* 179 */
    Tcl_Init, /* 180 */
    Tcl_InitHashTable, /* 181 */
    Tcl_InputBlocked, /* 182 */
    Tcl_InputBuffered, /* 183 */
    Tcl_InterpDeleted, /* 184 */
    Tcl_IsSafe, /* 185 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 186*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_JoinPath, /* 186 */
#endif /* TCL_NO_FILESYSTEM */
    Tcl_LinkVar, /* 187 */
    NULL, /* 188 */
    Tcl_MakeFileChannel, /* 189 */
    Tcl_MakeSafe, /* 190 */
#if defined(TCL_NO_SOCKETS)
    NULL, /* 191*/
#else  /* TCL_NO_SOCKETS */
    Tcl_MakeTcpClientChannel, /* 191 */
#endif /* TCL_NO_SOCKETS */
    Tcl_Merge, /* 192 */
    Tcl_NextHashEntry, /* 193 */
#if defined(TCL_NO_FILEEVENTS)
    NULL, /* 194*/
#else  /* TCL_NO_FILEEVENTS */
    Tcl_NotifyChannel, /* 194 */
#endif /* TCL_NO_FILEEVENTS */
    Tcl_ObjGetVar2, /* 195 */
    Tcl_ObjSetVar2, /* 196 */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
#if defined(TCL_NO_FILESYSTEM) || defined(TCL_NO_PIPES)
    NULL, /* 197*/
#else  /* TCL_NO_FILESYSTEM TCL_NO_PIPES */
    Tcl_OpenCommandChannel, /* 197 */
#endif /* TCL_NO_FILESYSTEM TCL_NO_PIPES */
#endif /* UNIX */
#ifdef __WIN32__
#if defined(TCL_NO_FILESYSTEM) || defined(TCL_NO_PIPES)
    NULL, /* 197*/
#else  /* TCL_NO_FILESYSTEM TCL_NO_PIPES */
    Tcl_OpenCommandChannel, /* 197 */
#endif /* TCL_NO_FILESYSTEM TCL_NO_PIPES */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 197 */
#endif /* MAC_TCL */
#if defined(TCL_NO_FILESYSTEM) || defined(TCL_NO_FILEEVENTS)
    NULL, /* 198*/
#else  /* TCL_NO_FILESYSTEM TCL_NO_FILEEVENTS */
    Tcl_OpenFileChannel, /* 198 */
#endif /* TCL_NO_FILESYSTEM TCL_NO_FILEEVENTS */
#if defined(TCL_NO_SOCKETS)
    NULL, /* 199*/
#else  /* TCL_NO_SOCKETS */
    Tcl_OpenTcpClient, /* 199 */
#endif /* TCL_NO_SOCKETS */
#if defined(TCL_NO_SOCKETS) || defined(TCL_NO_FILEEVENTS)
    NULL, /* 200*/
#else  /* TCL_NO_SOCKETS TCL_NO_FILEEVENTS */
    Tcl_OpenTcpServer, /* 200 */
#endif /* TCL_NO_SOCKETS TCL_NO_FILEEVENTS */
    Tcl_Preserve, /* 201 */
    Tcl_PrintDouble, /* 202 */
    Tcl_PutEnv, /* 203 */
    Tcl_PosixError, /* 204 */
    Tcl_QueueEvent, /* 205 */
    Tcl_Read, /* 206 */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
#if defined(TCL_NO_PIPES)
    NULL, /* 207*/
#else  /* TCL_NO_PIPES */
    Tcl_ReapDetachedProcs, /* 207 */
#endif /* TCL_NO_PIPES */
#endif /* UNIX */
#ifdef __WIN32__
#if defined(TCL_NO_PIPES)
    NULL, /* 207*/
#else  /* TCL_NO_PIPES */
    Tcl_ReapDetachedProcs, /* 207 */
#endif /* TCL_NO_PIPES */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 207 */
#endif /* MAC_TCL */
    Tcl_RecordAndEval, /* 208 */
    Tcl_RecordAndEvalObj, /* 209 */
#if defined(TCL_NO_NONSTDCHAN)
    NULL, /* 210*/
#else  /* TCL_NO_NONSTDCHAN */
    Tcl_RegisterChannel, /* 210 */
#endif /* TCL_NO_NONSTDCHAN */
    Tcl_RegisterObjType, /* 211 */
    Tcl_RegExpCompile, /* 212 */
    Tcl_RegExpExec, /* 213 */
    Tcl_RegExpMatch, /* 214 */
    Tcl_RegExpRange, /* 215 */
    Tcl_Release, /* 216 */
    Tcl_ResetResult, /* 217 */
    Tcl_ScanElement, /* 218 */
    Tcl_ScanCountedElement, /* 219 */
#if defined(TCL_NO_NONSTDCHAN)
    NULL, /* 220*/
#else  /* TCL_NO_NONSTDCHAN */
    Tcl_Seek, /* 220 */
#endif /* TCL_NO_NONSTDCHAN */
    Tcl_ServiceAll, /* 221 */
    Tcl_ServiceEvent, /* 222 */
    Tcl_SetAssocData, /* 223 */
    Tcl_SetChannelBufferSize, /* 224 */
    Tcl_SetChannelOption, /* 225 */
    Tcl_SetCommandInfo, /* 226 */
    Tcl_SetErrno, /* 227 */
    Tcl_SetErrorCode, /* 228 */
    Tcl_SetMaxBlockTime, /* 229 */
    Tcl_SetPanicProc, /* 230 */
    Tcl_SetRecursionLimit, /* 231 */
    Tcl_SetResult, /* 232 */
    Tcl_SetServiceMode, /* 233 */
    Tcl_SetObjErrorCode, /* 234 */
    Tcl_SetObjResult, /* 235 */
    Tcl_SetStdChannel, /* 236 */
    Tcl_SetVar, /* 237 */
    Tcl_SetVar2, /* 238 */
    Tcl_SignalId, /* 239 */
    Tcl_SignalMsg, /* 240 */
    Tcl_SourceRCFile, /* 241 */
    Tcl_SplitList, /* 242 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 243*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_SplitPath, /* 243 */
#endif /* TCL_NO_FILESYSTEM */
    Tcl_StaticPackage, /* 244 */
    Tcl_StringMatch, /* 245 */
    Tcl_Tell, /* 246 */
    Tcl_TraceVar, /* 247 */
    Tcl_TraceVar2, /* 248 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 249*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_TranslateFileName, /* 249 */
#endif /* TCL_NO_FILESYSTEM */
    Tcl_Ungets, /* 250 */
    Tcl_UnlinkVar, /* 251 */
    Tcl_UnregisterChannel, /* 252 */
    Tcl_UnsetVar, /* 253 */
    Tcl_UnsetVar2, /* 254 */
    Tcl_UntraceVar, /* 255 */
    Tcl_UntraceVar2, /* 256 */
    Tcl_UpdateLinkedVar, /* 257 */
    Tcl_UpVar, /* 258 */
    Tcl_UpVar2, /* 259 */
    Tcl_VarEval, /* 260 */
    Tcl_VarTraceInfo, /* 261 */
    Tcl_VarTraceInfo2, /* 262 */
    Tcl_Write, /* 263 */
    Tcl_WrongNumArgs, /* 264 */
    Tcl_DumpActiveMemory, /* 265 */
    Tcl_ValidateAllMemory, /* 266 */
    Tcl_AppendResultVA, /* 267 */
    Tcl_AppendStringsToObjVA, /* 268 */
    Tcl_HashStats, /* 269 */
    Tcl_ParseVar, /* 270 */
    Tcl_PkgPresent, /* 271 */
    Tcl_PkgPresentEx, /* 272 */
    Tcl_PkgProvide, /* 273 */
    Tcl_PkgRequire, /* 274 */
    Tcl_SetErrorCodeVA, /* 275 */
    Tcl_VarEvalVA, /* 276 */
#if defined(TCL_NO_PIPES)
    NULL, /* 277*/
#else  /* TCL_NO_PIPES */
    Tcl_WaitPid, /* 277 */
#endif /* TCL_NO_PIPES */
#if !defined(__WIN32__) && !defined(MAC_TCL) /* UNIX */
    Tcl_PanicVA, /* 278 */
#endif /* UNIX */
#ifdef __WIN32__
    Tcl_PanicVA, /* 278 */
#endif /* __WIN32__ */
#ifdef MAC_TCL
    NULL, /* 278 */
#endif /* MAC_TCL */
    Tcl_GetVersion, /* 279 */
    Tcl_InitMemory, /* 280 */
    Tcl_StackChannel, /* 281 */
    Tcl_UnstackChannel, /* 282 */
    Tcl_GetStackedChannel, /* 283 */
    Tcl_SetMainLoop, /* 284 */
    NULL, /* 285 */
    Tcl_AppendObjToObj, /* 286 */
    Tcl_CreateEncoding, /* 287 */
    Tcl_CreateThreadExitHandler, /* 288 */
    Tcl_DeleteThreadExitHandler, /* 289 */
    Tcl_DiscardResult, /* 290 */
    Tcl_EvalEx, /* 291 */
    Tcl_EvalObjv, /* 292 */
    Tcl_EvalObjEx, /* 293 */
    Tcl_ExitThread, /* 294 */
    Tcl_ExternalToUtf, /* 295 */
    Tcl_ExternalToUtfDString, /* 296 */
    Tcl_FinalizeThread, /* 297 */
    Tcl_FinalizeNotifier, /* 298 */
    Tcl_FreeEncoding, /* 299 */
    Tcl_GetCurrentThread, /* 300 */
    Tcl_GetEncoding, /* 301 */
    Tcl_GetEncodingName, /* 302 */
    Tcl_GetEncodingNames, /* 303 */
    Tcl_GetIndexFromObjStruct, /* 304 */
    Tcl_GetThreadData, /* 305 */
    Tcl_GetVar2Ex, /* 306 */
    Tcl_InitNotifier, /* 307 */
    Tcl_MutexLock, /* 308 */
    Tcl_MutexUnlock, /* 309 */
    Tcl_ConditionNotify, /* 310 */
    Tcl_ConditionWait, /* 311 */
    Tcl_NumUtfChars, /* 312 */
#if defined(TCL_NO_CHANNEL_READ) && defined (TCL_NO_PIPES)
    NULL, /* 313*/
#else  /* TCL_NO_CHANNEL_READ TCL_NO_PIPES */
    Tcl_ReadChars, /* 313 */
#endif /* TCL_NO_CHANNEL_READ TCL_NO_PIPES */
    Tcl_RestoreResult, /* 314 */
    Tcl_SaveResult, /* 315 */
    Tcl_SetSystemEncoding, /* 316 */
    Tcl_SetVar2Ex, /* 317 */
    Tcl_ThreadAlert, /* 318 */
    Tcl_ThreadQueueEvent, /* 319 */
    Tcl_UniCharAtIndex, /* 320 */
    Tcl_UniCharToLower, /* 321 */
    Tcl_UniCharToTitle, /* 322 */
    Tcl_UniCharToUpper, /* 323 */
    Tcl_UniCharToUtf, /* 324 */
    Tcl_UtfAtIndex, /* 325 */
    Tcl_UtfCharComplete, /* 326 */
    Tcl_UtfBackslash, /* 327 */
    Tcl_UtfFindFirst, /* 328 */
    Tcl_UtfFindLast, /* 329 */
    Tcl_UtfNext, /* 330 */
    Tcl_UtfPrev, /* 331 */
    Tcl_UtfToExternal, /* 332 */
    Tcl_UtfToExternalDString, /* 333 */
    Tcl_UtfToLower, /* 334 */
    Tcl_UtfToTitle, /* 335 */
    Tcl_UtfToUniChar, /* 336 */
    Tcl_UtfToUpper, /* 337 */
    Tcl_WriteChars, /* 338 */
    Tcl_WriteObj, /* 339 */
    Tcl_GetString, /* 340 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 341*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_GetDefaultEncodingDir, /* 341 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 342*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_SetDefaultEncodingDir, /* 342 */
#endif /* TCL_NO_FILESYSTEM */
    Tcl_AlertNotifier, /* 343 */
    Tcl_ServiceModeHook, /* 344 */
    Tcl_UniCharIsAlnum, /* 345 */
    Tcl_UniCharIsAlpha, /* 346 */
    Tcl_UniCharIsDigit, /* 347 */
    Tcl_UniCharIsLower, /* 348 */
    Tcl_UniCharIsSpace, /* 349 */
    Tcl_UniCharIsUpper, /* 350 */
    Tcl_UniCharIsWordChar, /* 351 */
    Tcl_UniCharLen, /* 352 */
    Tcl_UniCharNcmp, /* 353 */
    Tcl_UniCharToUtfDString, /* 354 */
    Tcl_UtfToUniCharDString, /* 355 */
    Tcl_GetRegExpFromObj, /* 356 */
    Tcl_EvalTokens, /* 357 */
    Tcl_FreeParse, /* 358 */
    Tcl_LogCommandInfo, /* 359 */
    Tcl_ParseBraces, /* 360 */
    Tcl_ParseCommand, /* 361 */
    Tcl_ParseExpr, /* 362 */
    Tcl_ParseQuotedString, /* 363 */
    Tcl_ParseVarName, /* 364 */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 365*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_GetCwd, /* 365 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 366*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_Chdir, /* 366 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 367*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_Access, /* 367 */
#endif /* TCL_NO_FILESYSTEM */
#if defined(TCL_NO_FILESYSTEM)
    NULL, /* 368*/
#else  /* TCL_NO_FILESYSTEM */
    Tcl_Stat, /* 368 */
#endif /* TCL_NO_FILESYSTEM */
    Tcl_UtfNcmp, /* 369 */
    Tcl_UtfNcasecmp, /* 370 */
    Tcl_StringCaseMatch, /* 371 */
    Tcl_UniCharIsControl, /* 372 */
    Tcl_UniCharIsGraph, /* 373 */
    Tcl_UniCharIsPrint, /* 374 */
    Tcl_UniCharIsPunct, /* 375 */
    Tcl_RegExpExecObj, /* 376 */
    Tcl_RegExpGetInfo, /* 377 */
    Tcl_NewUnicodeObj, /* 378 */
    Tcl_SetUnicodeObj, /* 379 */
    Tcl_GetCharLength, /* 380 */
    Tcl_GetUniChar, /* 381 */
    Tcl_GetUnicode, /* 382 */
    Tcl_GetRange, /* 383 */
    Tcl_AppendUnicodeToObj, /* 384 */
    Tcl_RegExpMatchObj, /* 385 */
    Tcl_SetNotifier, /* 386 */
    Tcl_GetAllocMutex, /* 387 */
    Tcl_GetChannelNames, /* 388 */
    Tcl_GetChannelNamesEx, /* 389 */
    Tcl_ProcObjCmd, /* 390 */
    Tcl_ConditionFinalize, /* 391 */
    Tcl_MutexFinalize, /* 392 */
    Tcl_CreateThread, /* 393 */
    Tcl_ReadRaw, /* 394 */
    Tcl_WriteRaw, /* 395 */
    Tcl_GetTopChannel, /* 396 */
    Tcl_ChannelBuffered, /* 397 */
    Tcl_ChannelName, /* 398 */
    Tcl_ChannelVersion, /* 399 */
    Tcl_ChannelBlockModeProc, /* 400 */
    Tcl_ChannelCloseProc, /* 401 */
    Tcl_ChannelClose2Proc, /* 402 */
    Tcl_ChannelInputProc, /* 403 */
    Tcl_ChannelOutputProc, /* 404 */
    Tcl_ChannelSeekProc, /* 405 */
    Tcl_ChannelSetOptionProc, /* 406 */
    Tcl_ChannelGetOptionProc, /* 407 */
    Tcl_ChannelWatchProc, /* 408 */
    Tcl_ChannelGetHandleProc, /* 409 */
    Tcl_ChannelFlushProc, /* 410 */
    Tcl_ChannelHandlerProc, /* 411 */
    NULL, /* 412 */
    NULL, /* 413 */
    NULL, /* 414 */
    NULL, /* 415 */
    NULL, /* 416 */
    NULL, /* 417 */
    NULL, /* 418 */
    NULL, /* 419 */
    NULL, /* 420 */
    NULL, /* 421 */
    NULL, /* 422 */
    NULL, /* 423 */
    NULL, /* 424 */
    NULL, /* 425 */
    NULL, /* 426 */
    NULL, /* 427 */
    NULL, /* 428 */
    NULL, /* 429 */
    NULL, /* 430 */
    NULL, /* 431 */
    NULL, /* 432 */
    NULL, /* 433 */
    NULL, /* 434 */
    NULL, /* 435 */
    NULL, /* 436 */
    NULL, /* 437 */
    NULL, /* 438 */
    NULL, /* 439 */
    NULL, /* 440 */
    NULL, /* 441 */
    NULL, /* 442 */
    NULL, /* 443 */
    NULL, /* 444 */
    NULL, /* 445 */
    NULL, /* 446 */
    NULL, /* 447 */
    NULL, /* 448 */
    NULL, /* 449 */
    NULL, /* 450 */
    NULL, /* 451 */
    NULL, /* 452 */
    NULL, /* 453 */
    NULL, /* 454 */
    NULL, /* 455 */
    NULL, /* 456 */
    NULL, /* 457 */
    NULL, /* 458 */
    NULL, /* 459 */
    NULL, /* 460 */
    NULL, /* 461 */
    NULL, /* 462 */
    NULL, /* 463 */
    NULL, /* 464 */
    NULL, /* 465 */
    NULL, /* 466 */
    NULL, /* 467 */
    NULL, /* 468 */
    NULL, /* 469 */
    NULL, /* 470 */
    NULL, /* 471 */
    NULL, /* 472 */
    NULL, /* 473 */
    NULL, /* 474 */
    NULL, /* 475 */
    NULL, /* 476 */
    NULL, /* 477 */
    NULL, /* 478 */
    NULL, /* 479 */
    NULL, /* 480 */
    NULL, /* 481 */
    NULL, /* 482 */
    NULL, /* 483 */
    NULL, /* 484 */
    NULL, /* 485 */
    NULL, /* 486 */
    NULL, /* 487 */
    NULL, /* 488 */
    NULL, /* 489 */
    NULL, /* 490 */
    NULL, /* 491 */
    NULL, /* 492 */
    NULL, /* 493 */
    NULL, /* 494 */
    NULL, /* 495 */
    NULL, /* 496 */
    NULL, /* 497 */
    NULL, /* 498 */
    NULL, /* 499 */
    Tcl_CloneInterp, /* 500 */
};

/* !END!: Do not edit above this line. */
