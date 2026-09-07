//
//  AIOConstants.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/27/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

@class IncomingCall;

#ifndef AcquireIO_BUILD
//#define AcquireIO_DEBUG true
#endif

//#define AcquireIO_DEBUG true

//#define AcquireIO_ONLY_COBROWSE true

#define THEME_COLOR [UIColor colorWithRed: 0.227 green: 0.42 blue: 0.89 alpha: 1] // #3A6BE3
#define LIGHT_COLOR [UIColor colorWithRed: 0.902 green: 0.902 blue: 0.902 alpha: 1] // #e6e6e6

#define INFO_BORDER_COLOR [UIColor colorWithRed: 0.878 green: 0.878 blue: 0.878 alpha: 1]

//iPhone5 helper
#define IS_iPhone5 ([UIScreen mainScreen].bounds.size.height == 568.0)

typedef void (^AckCallback)(NSMutableArray *argsList);
typedef void (^EmitterListner)(NSString *methodName, NSMutableArray *args);
typedef void (^EmitterListnerReport)(NSString *methodName, NSMutableArray *args, AckCallback ackReport);
typedef void (^AckListner)(id args, ...);
typedef void (^CallerCallback)(IncomingCall *buttonMenu, NSInteger returnCode);
typedef void (^AIOCallbakHandler)(void);


#define AcquireLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#ifdef AcquireIO_DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#   define DLog(...)
#endif

//Define for UserDefaults to store local data
#define AIOUSERDEFAULT [NSUserDefaults standardUserDefaults]

#define kTriggerShowAfterHrs 24

#define kMaxRadius 200
#define kMaxDuration 10

#define acquireBundle [AIOUtility acquireResourceBundle]

#define kVirtualThreadID -2
#define kVirtualChatID -1

extern NSString *mediaUserPhotoUrl;
extern NSString *mediaDefaultVisitorPhoto;
extern NSString *uploadFilesUrl;
extern NSString *kCDNURL;
extern NSString *kMediaURL;
extern NSString *kACK_REPLACER;
extern NSString *kMethodPrefix;
extern NSString *kUD_DEVICETOKEN;
extern NSString *kUD_SESSION;

extern NSString *kCallerErrorDomain;
extern NSInteger kCallerErrorCreateSDP;

extern NSString const *kRTCSessionDescriptionTypeKey;
extern NSString const *kRTCSessionDescriptionSdpKey;

extern NSString const *kRTCIceCandidateTypeKey;
extern NSString const *kRTCIceCandidateTypeValue;
extern NSString const *kRTCIceCandidateInTypeValue;
extern NSString const *kRTCIceCandidateOutTypeValue;
extern NSString const *kRTCIceCandidateMidKey;
extern NSString const *kRTCIceCandidateMLineIndexKey;
extern NSString const *kRTCIceCandidateSdpKey;

extern NSString * const kARDMediaStreamId;
extern NSString * const kARDAudioTrackId;
extern NSString * const kARDVideoTrackId;
extern NSString * const kARDVideoTrackKind;

extern NSString * const offlineReply;
extern NSString * const tplCollectDataMessage;
