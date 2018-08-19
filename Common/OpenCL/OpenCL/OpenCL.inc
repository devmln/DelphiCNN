(********************************************)
(*                                          *)
(*     OpenCL1.2 and Delphi and Windows     *)
(*                                          *)
(*      created by      : Maksym Tymkovych  *)
(*                           (niello)       *)
(*                                          *)
(*      headers versions: 0.07              *)
(*      file name       : OpenCL.inc        *)
(*      last modify     : 10.12.11          *)
(*      license         : BSD               *)
(*                                          *)
(*      Site            : www.niello.org.ua *)
(*      e-mail          : muxamed13@ukr.net *)
(*      ICQ             : 446-769-253       *)
(*                                          *)
(*********Copyright (c) niello 2008-2011*****)


{$IFDEF MSWINDOWS}
  {$DEFINE WINDOWS}
{$ENDIF}
{$IFDEF WINDOWS}
  {$IF DEFINED(WIN32) or DEFINED(WIN64)}
    {$DEFINE WINDESKTOP}
  {$ELSE}
    {$DEFINE WINMOBILE}
  {$IFEND}
  {$DEFINE STDCALL}
{$ENDIF}
{$IFDEF LINUX}
  {$DEFINE CDECL}
{$ENDIF}
{$IFDEF DARWIN}
  {$IF DEFINED(iPHONESIM) or (DEFINED(DARWIN) and DEFINED(CPUARM))}
    {$DEFINE iOS}
  {$ELSE}
    {$DEFINE MACOSX}
  {$IFEND}
  {$DEFINE CDECL}
{$ENDIF}


{$DEFINE USE_LOG}           //Use default procedure Writeln()

//{$DEFINE PURE_OPENCL_1_0}
{$DEFINE PURE_OPENCL_1_1}  //Actual now
//{$DEFINE PURE_OPENCL_1_2}

//{$DEFINE WITH_DEPERCATED_OPENCL_1_1}
//{$DEFINE WITH_DEPERCATED_OPENCL_1_2}


//use Defines PURE_OPENCL_1_0 or PURE_OPENCL_1_1 or PURE_OPENCL_1_2
// WITH_DEPERCATED_OPENCL_1_1 or WITH_DEPERCATED_OPENCL_1_2
//{$DEFINE CL_VERSION_1_1}
//{$DEFINE CL_VERSION_1_2}  //wait drivers support
//{$DEFINE CL_USE_DEPRECATED_OPENCL_1_0_APIS}
//{$DEFINE CL_USE_DEPRECATED_OPENCL_1_1_APIS}
//{$DEFINE CL_USE_DEPRECATED_OPENCL_1_2_APIS} // -> wait OpenCL 1.3

{$IFDEF PURE_OPENCL_1_0}
  {$DEFINE CL_VERSION_1_0}
  {$DEFINE CL_USE_DEPRECATED_OPENCL_1_0_APIS}

  {$UNDEF CL_VERSION_1_1}
  {$UNDEF CL_VERSION_1_2}
  {$UNDEF CL_USE_DEPRECATED_OPENCL_1_1_APIS}
  {$UNDEF CL_USE_DEPRECATED_OPENCL_1_2_APIS}
{$ENDIF}

{$IFDEF PURE_OPENCL_1_1}
  {$DEFINE CL_VERSION_1_0}
  {$DEFINE CL_VERSION_1_1}
  {$DEFINE CL_USE_DEPRECATED_OPENCL_1_1_APIS}

  {$UNDEF CL_VERSION_1_2}
  {$UNDEF CL_USE_DEPRECATED_OPENCL_1_0_APIS}
  {$UNDEF CL_USE_DEPRECATED_OPENCL_1_2_APIS}
{$ENDIF}

{$IFDEF PURE_OPENCL_1_2}
  {$DEFINE CL_VERSION_1_0}
  {$DEFINE CL_VERSION_1_1}
  {$DEFINE CL_VERSION_1_2}
  {$DEFINE CL_USE_DEPRECATED_OPENCL_1_2_APIS}

  {$UNDEF CL_USE_DEPRECATED_OPENCL_1_0_APIS}
  {$UNDEF CL_USE_DEPRECATED_OPENCL_1_1_APIS}
{$ENDIF}

{$IFDEF WITH_DEPERCATED_OPENCL_1_1}
  {$DEFINE CL_VERSION_1_0}
  {$DEFINE CL_VERSION_1_1}
  {$DEFINE CL_USE_DEPRECATED_OPENCL_1_1_APIS}
  {$DEFINE CL_USE_DEPRECATED_OPENCL_1_0_APIS}

  {$UNDEF CL_VERSION_1_2}
  {$UNDEF CL_USE_DEPRECATED_OPENCL_1_2_APIS}
{$ENDIF}


{$IFDEF WITH_DEPERCATED_OPENCL_1_2}
  {$DEFINE CL_VERSION_1_0}
  {$DEFINE CL_VERSION_1_1}
  {$DEFINE CL_VERSION_1_2}
  {$DEFINE CL_USE_DEPRECATED_OPENCL_1_1_APIS}
  {$DEFINE CL_USE_DEPRECATED_OPENCL_1_0_APIS}
  {$DEFINE CL_USE_DEPRECATED_OPENCL_1_2_APIS}
{$ENDIF}



{$IFDEF FPC}
  {$MODE Delphi}
{$ENDIF}

{$IFNDEF FPC}
  {$IFDEF VER110}//Builder 3
    {$DEFINE DEFINE_8087CW_NOT_IMPLEMENTED}
    {$DEFINE DEFINE_UINT64_EQU_INT64}
    {$DEFINE DEFINE_REGION_NOT_IMPLEMENTED}
  {$ENDIF}
  {$IFDEF VER100}//Delphi3
    {$DEFINE DEFINE_8087CW_NOT_IMPLEMENTED}
    {$DEFINE DEFINE_UINT64_EQU_INT64}
    {$DEFINE DEFINE_REGION_NOT_IMPLEMENTED}
  {$ENDIF}
  {$IFDEF VER120}//Delphi 4
    {$DEFINE DEFINE_8087CW_NOT_IMPLEMENTED}
    {$DEFINE DEFINE_UINT64_EQU_INT64}
    {$DEFINE DEFINE_REGION_NOT_IMPLEMENTED}
  {$ENDIF}
  {$IFDEF VER130}//Delphi 5
    {$DEFINE DEFINE_UINT64_EQU_INT64}
    {$DEFINE DEFINE_UINT64_EQU_INT64}
  {$ENDIF}
  {$IFDEF VER140}//Delphi 6
    {$DEFINE DEFINE_UINT64_EQU_INT64}
    {$DEFINE DEFINE_REGION_NOT_IMPLEMENTED}
  {$ENDIF}
  {$IFDEF VER140}//Delphi 7
    {$DEFINE DEFINE_REGION_NOT_IMPLEMENTED}
  {$ENDIF}
{$ENDIF}




