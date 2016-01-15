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

namespace org { namespace allseen { namespace LSF { namespace ControllerService {

ref class ControllerServiceSignals;

public interface class IControllerServiceSignals
{
    event Windows::Foundation::TypedEventHandler<ControllerServiceSignals^, ControllerServiceControllerServiceLightingResetReceivedEventArgs^>^ ControllerServiceLightingResetReceived;
};

public ref class ControllerServiceSignals sealed : [Windows::Foundation::Metadata::Default] IControllerServiceSignals
{
public:
    // Calling this method will send the ControllerServiceLightingReset signal to every member of the session.
    void ControllerServiceLightingReset();

    // This event fires whenever the ControllerServiceLightingReset signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<ControllerServiceSignals^, ControllerServiceControllerServiceLightingResetReceivedEventArgs^>^ ControllerServiceLightingResetReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<ControllerServiceSignals^, ControllerServiceControllerServiceLightingResetReceivedEventArgs^>^ handler) 
        { 
            return _ControllerServiceLightingResetReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<ControllerServiceSignals^>(sender), safe_cast<ControllerServiceControllerServiceLightingResetReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _ControllerServiceLightingResetReceived -= token; 
        } 
    internal: 
        void raise(ControllerServiceSignals^ sender, ControllerServiceControllerServiceLightingResetReceivedEventArgs^ args) 
        { 
            _ControllerServiceLightingResetReceived(sender, args);
        } 
    }

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallControllerServiceLightingResetReceived(_In_ ControllerServiceSignals^ sender, _In_ ControllerServiceControllerServiceLightingResetReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _ControllerServiceLightingResetReceived;

    alljoyn_interfacedescription_member m_memberControllerServiceLightingReset;
};

} } } } 
