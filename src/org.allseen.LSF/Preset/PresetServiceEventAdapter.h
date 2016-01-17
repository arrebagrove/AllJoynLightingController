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

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IPresetService. Instead, PresetServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class PresetServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IPresetService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetDefaultLampStateCalledEventArgs^>^ GetDefaultLampStateCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetDefaultLampStateCalledEventArgs^>^ handler) 
        { 
            return _GetDefaultLampStateCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetGetDefaultLampStateCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetDefaultLampStateCalled -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetGetDefaultLampStateCalledEventArgs^ args) 
        { 
            _GetDefaultLampStateCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetSetDefaultLampStateCalledEventArgs^>^ SetDefaultLampStateCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetSetDefaultLampStateCalledEventArgs^>^ handler) 
        { 
            return _SetDefaultLampStateCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetSetDefaultLampStateCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetDefaultLampStateCalled -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetSetDefaultLampStateCalledEventArgs^ args) 
        { 
            _SetDefaultLampStateCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetAllPresetIDsCalledEventArgs^>^ GetAllPresetIDsCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetAllPresetIDsCalledEventArgs^>^ handler) 
        { 
            return _GetAllPresetIDsCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetGetAllPresetIDsCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetAllPresetIDsCalled -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetGetAllPresetIDsCalledEventArgs^ args) 
        { 
            _GetAllPresetIDsCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetPresetNameCalledEventArgs^>^ GetPresetNameCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetPresetNameCalledEventArgs^>^ handler) 
        { 
            return _GetPresetNameCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetGetPresetNameCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetPresetNameCalled -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetGetPresetNameCalledEventArgs^ args) 
        { 
            _GetPresetNameCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetSetPresetNameCalledEventArgs^>^ SetPresetNameCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetSetPresetNameCalledEventArgs^>^ handler) 
        { 
            return _SetPresetNameCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetSetPresetNameCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetPresetNameCalled -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetSetPresetNameCalledEventArgs^ args) 
        { 
            _SetPresetNameCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetCreatePresetCalledEventArgs^>^ CreatePresetCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetCreatePresetCalledEventArgs^>^ handler) 
        { 
            return _CreatePresetCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetCreatePresetCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _CreatePresetCalled -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetCreatePresetCalledEventArgs^ args) 
        { 
            _CreatePresetCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetUpdatePresetCalledEventArgs^>^ UpdatePresetCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetUpdatePresetCalledEventArgs^>^ handler) 
        { 
            return _UpdatePresetCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetUpdatePresetCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _UpdatePresetCalled -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetUpdatePresetCalledEventArgs^ args) 
        { 
            _UpdatePresetCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetDeletePresetCalledEventArgs^>^ DeletePresetCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetDeletePresetCalledEventArgs^>^ handler) 
        { 
            return _DeletePresetCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetDeletePresetCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _DeletePresetCalled -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetDeletePresetCalledEventArgs^ args) 
        { 
            _DeletePresetCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetPresetCalledEventArgs^>^ GetPresetCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetPresetCalledEventArgs^>^ handler) 
        { 
            return _GetPresetCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetGetPresetCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetPresetCalled -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetGetPresetCalledEventArgs^ args) 
        { 
            _GetPresetCalled(sender, args);
        } 
    }

    // Property Read Events
    event Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetVersionRequestedEventArgs^>^ GetVersionRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<PresetServiceEventAdapter^, PresetGetVersionRequestedEventArgs^>^ handler) 
        { 
            return _GetVersionRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<PresetServiceEventAdapter^>(sender), safe_cast<PresetGetVersionRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetVersionRequested -= token; 
        } 
    internal: 
        void raise(PresetServiceEventAdapter^ sender, PresetGetVersionRequestedEventArgs^ args) 
        { 
            _GetVersionRequested(sender, args);
        } 
    }

    // Property Write Events
    // IPresetService Implementation
    virtual Windows::Foundation::IAsyncOperation<PresetGetDefaultLampStateResult^>^ GetDefaultLampStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<PresetSetDefaultLampStateResult^>^ SetDefaultLampStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberLampState);
    virtual Windows::Foundation::IAsyncOperation<PresetGetAllPresetIDsResult^>^ GetAllPresetIDsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<PresetGetPresetNameResult^>^ GetPresetNameAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetID, _In_ Platform::String^ interfaceMemberLanguage);
    virtual Windows::Foundation::IAsyncOperation<PresetSetPresetNameResult^>^ SetPresetNameAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetID, _In_ Platform::String^ interfaceMemberPresetName, _In_ Platform::String^ interfaceMemberLanguage);
    virtual Windows::Foundation::IAsyncOperation<PresetCreatePresetResult^>^ CreatePresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberLampState, _In_ Platform::String^ interfaceMemberPresetName, _In_ Platform::String^ interfaceMemberLanguage);
    virtual Windows::Foundation::IAsyncOperation<PresetUpdatePresetResult^>^ UpdatePresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetID, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberLampState);
    virtual Windows::Foundation::IAsyncOperation<PresetDeletePresetResult^>^ DeletePresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetID);
    virtual Windows::Foundation::IAsyncOperation<PresetGetPresetResult^>^ GetPresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberPresetID);

    virtual Windows::Foundation::IAsyncOperation<PresetGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);


private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetDefaultLampStateCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetDefaultLampStateCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetAllPresetIDsCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetPresetNameCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetPresetNameCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _CreatePresetCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _UpdatePresetCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _DeletePresetCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetPresetCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetVersionRequested;
};

} } } } } 