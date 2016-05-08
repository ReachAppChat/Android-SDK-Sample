// This file is automatically generated from errors.def
// Don't change this file. All your changes will deleted
//
#ifndef _CORE_ERROR_H_
#define _CORE_ERROR_H_

namespace oovoo {
  namespace sdk {
    enum class sdk_error
    {
      OK=0,                                  // OK
      InvalidParameter=1,                    // Invalid Parameter
      InvalidPointer=2,                      // Invalid Pointer
      InvalidOperation=3,                    // Invalid Operation
      MethodNotImplemented=4,                // Method Not Implemented
      DeviceNotFound=5,                      // Device Not Found
      AlreadyInSession=6,                    // Already In Session
      DuplicateParticipantId=7,              // Duplicate Participant Id
      ConferenceIdNotValid=8,                // Conference ID Not Valid
      ClientIdNotValid=9,                    // Client ID Not Valid
      ParticipantIdNotValid=10,              // ParticipantId Not Valid
      CameraIdNotValid=11,                   // Camera ID Not Valid
      MicrophoneIdNotValid=12,               // Microphone ID Not Valid
      SpeakerIdNotValid=13,                  // Speaker ID Not Valid
      VolumeNotValid=14,                     // Volume Not Valid
      ServerAddressNotValid=15,              // Server Address Not Valid
      GroupQuotaExceeded=16,                 // Group Quota Exceeded
      NotInitialized=17,                     // Not Initialized
      Error=18,                              // Error
      NotAuthorized=19,                      // Not Authorized
      ConnectionTimeout=20,                  // Connection Timeout
      DisconnectedByPeer=21,                 // Disconnected By Peer
      InvalidToken=22,                       // Invalid Token
      ExpiredToken=23,                       // Expired Token
      PreviousOperationNotCompleted=24,      // Previous Operation Not Completed
      AppIdNotValid=25,                      // AppId Not Valid
      NoAvs=26,                              // No AVS
      ActionNotPermitted=27,                 // Action Not Permitted
      DeviceNotInitialized=28,               // Device Not Initialized
      Reconnecting=29,                       // Network Is Reconnecting
      Held=30,                               // Application on hold
      SSLCertificateVerificationFailed=31,   // SSL Certificates Verification Failed
      ParameterAlreadySet=32,                // Parameter Already Set
      AccessDenied=33,                       // Access Denied
      NoInternetConnection=34,               // No Internet Connection
      NotEnoughMemory=35,                    // Not Enough Memory
      ResolutionNotSupported=36,             // Resolution not supported
      AuthenticationFailed=37,               // Authentication Failed
      ApiVersionNotFound=38,                 // API Version Not Found
      CreateGroupFailed=39,                  // Create Group Failed
      InvalidContentType=40,                 // Invalid Content Type
      UnsupportedContentType=41,             // Unsupported Content Type
      HttpServerError=42                     // Http server error
    };
  } // namespace sdk
} // namespace oovoo
#endif
