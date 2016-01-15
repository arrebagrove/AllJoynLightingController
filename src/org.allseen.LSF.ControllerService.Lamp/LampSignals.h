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

namespace org { namespace allseen { namespace LSF { namespace ControllerService { namespace Lamp {

ref class LampSignals;

public interface class ILampSignals
{
    event Windows::Foundation::TypedEventHandler<LampSignals^, LampLampNameChangedReceivedEventArgs^>^ LampNameChangedReceived;
    event Windows::Foundation::TypedEventHandler<LampSignals^, LampLampStateChangedReceivedEventArgs^>^ LampStateChangedReceived;
    event Windows::Foundation::TypedEventHandler<LampSignals^, LampLampsFoundReceivedEventArgs^>^ LampsFoundReceived;
    event Windows::Foundation::TypedEventHandler<LampSignals^, LampLampsLostReceivedEventArgs^>^ LampsLostReceived;
};

public ref class LampSignals sealed : [Windows::Foundation::Metadata::Default] ILampSignals
{
public:
    // Calling this method will send the LampNameChanged signal to every member of the session.
    void LampNameChanged(_In_ Platform::String^ interfaceMemberLampID, _In_ Platform::String^ interfaceMemberLampName);

    // This event fires whenever the LampNameChanged signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<LampSignals^, LampLampNameChangedReceivedEventArgs^>^ LampNameChangedReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampSignals^, LampLampNameChangedReceivedEventArgs^>^ handler) 
        { 
            return _LampNameChangedReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampSignals^>(sender), safe_cast<LampLampNameChangedReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _LampNameChangedReceived -= token; 
        } 
    internal: 
        void raise(LampSignals^ sender, LampLampNameChangedReceivedEventArgs^ args) 
        { 
            _LampNameChangedReceived(sender, args);
        } 
    }

    // Calling this method will send the LampStateChanged signal to every member of the session.
    void LampStateChanged(_In_ Platform::String^ interfaceMemberLampID, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberLampState);

    // This event fires whenever the LampStateChanged signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<LampSignals^, LampLampStateChangedReceivedEventArgs^>^ LampStateChangedReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampSignals^, LampLampStateChangedReceivedEventArgs^>^ handler) 
        { 
            return _LampStateChangedReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampSignals^>(sender), safe_cast<LampLampStateChangedReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _LampStateChangedReceived -= token; 
        } 
    internal: 
        void raise(LampSignals^ sender, LampLampStateChangedReceivedEventArgs^ args) 
        { 
            _LampStateChangedReceived(sender, args);
        } 
    }

    // Calling this method will send the LampsFound signal to every member of the session.
    void LampsFound(_In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberLampIDs);

    // This event fires whenever the LampsFound signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<LampSignals^, LampLampsFoundReceivedEventArgs^>^ LampsFoundReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampSignals^, LampLampsFoundReceivedEventArgs^>^ handler) 
        { 
            return _LampsFoundReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampSignals^>(sender), safe_cast<LampLampsFoundReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _LampsFoundReceived -= token; 
        } 
    internal: 
        void raise(LampSignals^ sender, LampLampsFoundReceivedEventArgs^ args) 
        { 
            _LampsFoundReceived(sender, args);
        } 
    }

    // Calling this method will send the LampsLost signal to every member of the session.
    void LampsLost(_In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberLampIDs);

    // This event fires whenever the LampsLost signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<LampSignals^, LampLampsLostReceivedEventArgs^>^ LampsLostReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampSignals^, LampLampsLostReceivedEventArgs^>^ handler) 
        { 
            return _LampsLostReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampSignals^>(sender), safe_cast<LampLampsLostReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _LampsLostReceived -= token; 
        } 
    internal: 
        void raise(LampSignals^ sender, LampLampsLostReceivedEventArgs^ args) 
        { 
            _LampsLostReceived(sender, args);
        } 
    }

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallLampNameChangedReceived(_In_ LampSignals^ sender, _In_ LampLampNameChangedReceivedEventArgs^ args);
    void CallLampStateChangedReceived(_In_ LampSignals^ sender, _In_ LampLampStateChangedReceivedEventArgs^ args);
    void CallLampsFoundReceived(_In_ LampSignals^ sender, _In_ LampLampsFoundReceivedEventArgs^ args);
    void CallLampsLostReceived(_In_ LampSignals^ sender, _In_ LampLampsLostReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _LampNameChangedReceived;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _LampStateChangedReceived;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _LampsFoundReceived;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _LampsLostReceived;

    alljoyn_interfacedescription_member m_memberLampNameChanged;
    alljoyn_interfacedescription_member m_memberLampStateChanged;
    alljoyn_interfacedescription_member m_memberLampsFound;
    alljoyn_interfacedescription_member m_memberLampsLost;
};

} } } } } 
