
//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

#include <windows.h>
#include <ppltasks.h>
#include <concrt.h>
#include <collection.h>
#include <windows.devices.alljoyn.interop.h>
#include <map>

#include <alljoyn_c/busattachment.h>
#include <alljoyn_c/dbusstddefines.h>
#include <alljoyn_c/AboutData.h>
#include <alljoyn_c/AboutObj.h>
#include <alljoyn_c/AboutObjectDescription.h>

#include "AllJoynHelpers.h"
#include "AllJoynBusObjectManager.h"

#define PROJECT_NAMESPACE org::allseen::LSF::ControllerService::Preset

#include "PresetStructures.h"
#include "TypeConversionHelpers.h"
#include "PresetMethodResults.h"
#include "PresetEventArgs.h"
#include "IPresetService.h"
#include "PresetSignals.h"
#include "PresetProducer.h"
#include "PresetWatcher.h"
#include "PresetConsumer.h"
#include "PresetServiceEventArgs.h"
#include "PresetServiceEventAdapter.h"