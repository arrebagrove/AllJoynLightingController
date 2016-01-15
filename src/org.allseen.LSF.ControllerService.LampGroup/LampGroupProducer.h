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

namespace org { namespace allseen { namespace LSF { namespace ControllerService { namespace LampGroup {

extern PCSTR c_LampGroupIntrospectionXml;

ref class LampGroupProducer;

public interface class ILampGroupProducer
{
    event Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs^>^ Stopped;
    event Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^>^ SessionLost;
    event Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^>^ SessionMemberAdded;
    event Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^>^ SessionMemberRemoved;
};

public ref class LampGroupProducer sealed : [Windows::Foundation::Metadata::Default] ILampGroupProducer
{
public:
    LampGroupProducer(Windows::Devices::AllJoyn::AllJoynBusAttachment^ busAttachment);
    virtual ~LampGroupProducer();

    // The implementation of ILampGroupService that will handle method calls and property requests.
    property ILampGroupService^ Service
    {
        ILampGroupService^ get() { return m_serviceInterface; }
        void set(ILampGroupService^ value) { m_serviceInterface = value; }
    }

    // Used to send signals or register functions to handle received signals.
    property LampGroupSignals^ Signals
    {
        LampGroupSignals^ get() { return m_signals; }
    }
    
    // This event will fire whenever this producer is stopped.
    virtual event Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs^>^ Stopped 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs^>^ handler) 
        { 
            return _Stopped += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampGroupProducer^>(sender), safe_cast<Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _Stopped -= token; 
        } 
    internal: 
        void raise(LampGroupProducer^ sender, Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs^ args) 
        { 
            _Stopped(sender, args);
        } 
    }
    
    // This event will fire whenever the producer loses the session that it created.
    virtual event Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^>^ SessionLost 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^>^ handler) 
        { 
            return _SessionLost += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampGroupProducer^>(sender), safe_cast<Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SessionLost -= token; 
        } 
    internal: 
        void raise(LampGroupProducer^ sender, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^ args) 
        { 
            _SessionLost(sender, args);
        } 
    }
    
    // This event will fire whenever a member joins the session.
    virtual event Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^>^ SessionMemberAdded 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^>^ handler) 
        { 
            return _SessionMemberAdded += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampGroupProducer^>(sender), safe_cast<Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SessionMemberAdded -= token; 
        } 
    internal: 
        void raise(LampGroupProducer^ sender, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^ args) 
        { 
            _SessionMemberAdded(sender, args);
        } 
    }

    // This event will fire whenever a member leaves the session.
    virtual event Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^>^ SessionMemberRemoved 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampGroupProducer^, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^>^ handler) 
        { 
            return _SessionMemberRemoved += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampGroupProducer^>(sender), safe_cast<Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SessionMemberRemoved -= token; 
        } 
    internal: 
        void raise(LampGroupProducer^ sender, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^ args) 
        { 
            _SessionMemberRemoved(sender, args);
        } 
    }

    // Start advertising the service.
    void Start();
    
    // Stop advertising the service.
    void Stop();
    
    // Remove a member that has joined this session.
    int32 RemoveMemberFromSession(_In_ Platform::String^ uniqueName);
    
	property Platform::String^ ServiceObjectPath
	{
		Platform::String^ get() { return m_ServiceObjectPath; }
		void set(Platform::String^ value) { m_ServiceObjectPath = value; }
	}
internal:
    bool OnAcceptSessionJoiner(_In_ alljoyn_sessionport sessionPort, _In_ PCSTR joiner, _In_ const alljoyn_sessionopts opts);
    void OnSessionJoined(_In_ alljoyn_sessionport sessionPort, _In_ alljoyn_sessionid id, _In_ PCSTR joiner);
    QStatus OnPropertyGet(_In_ PCSTR interfaceName, _In_ PCSTR propertyName, _Inout_ alljoyn_msgarg val);
    QStatus OnPropertySet(_In_ PCSTR interfaceName, _In_ PCSTR propertyName, _In_ alljoyn_msgarg val);
    void OnSessionLost(_In_ alljoyn_sessionid sessionId, _In_ alljoyn_sessionlostreason reason);
    void OnSessionMemberAdded(_In_ alljoyn_sessionid sessionId, _In_ PCSTR uniqueName);
    void OnSessionMemberRemoved(_In_ alljoyn_sessionid sessionId, _In_ PCSTR uniqueName);


    property alljoyn_busobject BusObject
    {
        alljoyn_busobject get() { return m_busObject; }
        void set(alljoyn_busobject value) { m_busObject = value; }
    }

    property alljoyn_sessionportlistener SessionPortListener
    {
        alljoyn_sessionportlistener get() { return m_sessionPortListener; }
        void set(alljoyn_sessionportlistener value) { m_sessionPortListener = value; }
    }
    
    property alljoyn_sessionlistener SessionListener
    {
        alljoyn_sessionlistener get() { return m_sessionListener; }
        void set(alljoyn_sessionlistener value) { m_sessionListener = value; }
    }

    property alljoyn_sessionport SessionPort
    {
        alljoyn_sessionport get() { return m_sessionPort; }
    internal: 
        void set(alljoyn_sessionport value) { m_sessionPort = value; }
    }

    property alljoyn_sessionid SessionId
    {
        alljoyn_sessionid get() { return m_sessionId; }
    }
    
    // Stop advertising the service and pass status to anyone listening for the Stopped event.
    void StopInternal(int32 status);

    void BusAttachmentStateChanged(_In_ Windows::Devices::AllJoyn::AllJoynBusAttachment^ sender, _In_ Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs^ args);

private:
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _Stopped;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _SessionLost;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _SessionMemberAdded;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _SessionMemberRemoved;

    static void CallGetAllLampGroupIDsHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallGetLampGroupNameHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallSetLampGroupNameHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallCreateLampGroupHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallUpdateLampGroupHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallDeleteLampGroupHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallGetLampGroupHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallTransitionLampGroupStateHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallPulseLampGroupWithStateHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallPulseLampGroupWithPresetHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallTransitionLampGroupStateToPresetHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallTransitionLampGroupStateFieldHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallResetLampGroupStateHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallResetLampGroupStateFieldHandler(_Inout_ alljoyn_busobject busObject, _In_ alljoyn_message message);
    static void CallLampGroupsNameChangedSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message);
    static void CallLampGroupsCreatedSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message);
    static void CallLampGroupsUpdatedSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message);
    static void CallLampGroupsDeletedSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message);
      
    // Register a callback function to handle methods.
    QStatus AddMethodHandler(_In_ alljoyn_interfacedescription interfaceDescription, _In_ PCSTR methodName, _In_ alljoyn_messagereceiver_methodhandler_ptr handler);
    // Register a callback function to handle incoming signals.
    QStatus AddSignalHandler(_In_ alljoyn_busattachment busAttachment, _In_ alljoyn_interfacedescription interfaceDescription, _In_ PCSTR methodName, _In_ alljoyn_messagereceiver_signalhandler_ptr handler);
    
    void UnregisterFromBus();
    
    Windows::Devices::AllJoyn::AllJoynBusAttachment^ m_busAttachment;
    Windows::Foundation::EventRegistrationToken m_busAttachmentStateChangedToken;
    LampGroupSignals^ m_signals;
    ILampGroupService^ m_serviceInterface;
    Platform::String^ m_ServiceObjectPath;

    alljoyn_busobject m_busObject;
    alljoyn_sessionportlistener m_sessionPortListener;
    alljoyn_sessionlistener m_sessionListener;
    alljoyn_sessionport m_sessionPort;
    alljoyn_sessionid m_sessionId;

    // Used to pass a pointer to this class to callbacks
    Platform::WeakReference* m_weak;

    // These maps are required because we need a way to pass the producer to the method
    // and signal handlers, but the current AllJoyn C API does not allow passing a context to these
    // callbacks.
    static std::map<alljoyn_busobject, Platform::WeakReference*> SourceObjects;
    static std::map<alljoyn_interfacedescription, Platform::WeakReference*> SourceInterfaces;
};

} } } } } 
