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

namespace org { namespace allseen { namespace LSF { namespace ControllerService { namespace Preset {

public interface class IPresetService
{
public:
    // Implement this function to handle calls to the GetDefaultLampState method.
    Windows::Foundation::IAsyncOperation<PresetGetDefaultLampStateResult^>^ GetDefaultLampStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the SetDefaultLampState method.
    Windows::Foundation::IAsyncOperation<PresetSetDefaultLampStateResult^>^ SetDefaultLampStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberLampState);

    // Implement this function to handle calls to the GetAllPresetIDs method.
    Windows::Foundation::IAsyncOperation<PresetGetAllPresetIDsResult^>^ GetAllPresetIDsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the GetPresetName method.
    Windows::Foundation::IAsyncOperation<PresetGetPresetNameResult^>^ GetPresetNameAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberPresetID, _In_ Platform::String^ interfaceMemberLanguage);

    // Implement this function to handle calls to the SetPresetName method.
    Windows::Foundation::IAsyncOperation<PresetSetPresetNameResult^>^ SetPresetNameAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberPresetID, _In_ Platform::String^ interfaceMemberPresetName, _In_ Platform::String^ interfaceMemberLanguage);

    // Implement this function to handle calls to the CreatePreset method.
    Windows::Foundation::IAsyncOperation<PresetCreatePresetResult^>^ CreatePresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberLampState, _In_ Platform::String^ interfaceMemberPresetName, _In_ Platform::String^ interfaceMemberLanguage);

    // Implement this function to handle calls to the UpdatePreset method.
    Windows::Foundation::IAsyncOperation<PresetUpdatePresetResult^>^ UpdatePresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberPresetID, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberLampState);

    // Implement this function to handle calls to the DeletePreset method.
    Windows::Foundation::IAsyncOperation<PresetDeletePresetResult^>^ DeletePresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberPresetID);

    // Implement this function to handle calls to the GetPreset method.
    Windows::Foundation::IAsyncOperation<PresetGetPresetResult^>^ GetPresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberPresetID);

    // Implement this function to handle requests for the value of the Version property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<PresetGetVersionResult^>^ GetVersionAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

};

} } } } } 