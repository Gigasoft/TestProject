// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit


#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>



#import "libid:AC0714F2-3D04-11D1-AE7D-00A0C90F26F4"\
	auto_rename auto_search raw_interfaces_only rename_namespace("AddinDesign")
using namespace AddinDesign;
//The following #import imports MSO based on it's LIBID

// Office type library (i.e. mso.dll)
#import "libid:2DF8D04C-5BFA-101B-BDE5-00AA0044DE52"\
	auto_rename auto_search raw_interfaces_only rename_namespace("Office1")
using namespace Office1;

// Outlook type library (i.e. msoutl.olb)
#import "libid:00062FFF-0000-0000-C000-000000000046"\
	auto_rename auto_search raw_interfaces_only named_guids rename_namespace("Outlook")
using namespace Outlook;

// Forms type library (i.e. fm20.dll)
#import "libid:0D452EE1-E08F-101A-852E-02608C4D0BB4"\
	auto_rename auto_search raw_interfaces_only  rename_namespace("Forms")
using namespace Forms;
