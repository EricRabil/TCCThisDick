#import <Foundation/Foundation.h>

extern NSString* _kTCCServiceAccessibility;
extern NSString* _kTCCServiceAddressBook;
extern NSString* _kTCCServiceAll;
extern NSString* _kTCCServiceAppleEvents;
extern NSString* _kTCCServiceCalendar;
extern NSString* _kTCCServiceCamera;
extern NSString* _kTCCServiceContactsFull;
extern NSString* _kTCCServiceContactsLimited;
extern NSString* _kTCCServiceDeveloperTool;
extern NSString* _kTCCServiceFacebook;
extern NSString* _kTCCServiceFileProviderDomain;
extern NSString* _kTCCServiceFileProviderPresence;
extern NSString* _kTCCServiceLinkedIn;
extern NSString* _kTCCServiceListenEvent;
extern NSString* _kTCCServiceLiverpool;
extern NSString* _kTCCServiceLocation;
extern NSString* _kTCCServiceMediaLibrary;
extern NSString* _kTCCServiceMicrophone;
extern NSString* _kTCCServiceMotion;
extern NSString* _kTCCServicePhotos;
extern NSString* _kTCCServicePhotosAdd;
extern NSString* _kTCCServicePostEvent;
extern NSString* _kTCCServiceReminders;
extern NSString* _kTCCServiceScreenCapture;
extern NSString* _kTCCServiceShareKit;
extern NSString* _kTCCServiceSinaWeibo;
extern NSString* _kTCCServiceSiri;
extern NSString* _kTCCServiceSpeechRecognition;
extern NSString* _kTCCServiceSystemPolicyAllFiles;
extern NSString* _kTCCServiceSystemPolicyDesktopFolder;
extern NSString* _kTCCServiceSystemPolicyDeveloperFiles;
extern NSString* _kTCCServiceSystemPolicyDocumentsFolder;
extern NSString* _kTCCServiceSystemPolicyDownloadsFolder;
extern NSString* _kTCCServiceSystemPolicyNetworkVolumes;
extern NSString* _kTCCServiceSystemPolicyRemovableVolumes;
extern NSString* _kTCCServiceSystemPolicySysAdminFiles;
extern NSString* _kTCCServiceTencentWeibo;
extern NSString* _kTCCServiceTwitter;
extern NSString* _kTCCServiceUbiquity;
extern NSString* _kTCCServiceWillow;

id TCCAccessSetForPath(CFStringRef tccService, CFStringRef appPath, long long isEnabled);
void TCCAccessResetForPath(CFStringRef tccService, CFStringRef appPath);
