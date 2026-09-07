//
//  AIOApp.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/19/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>

#import "SocketWrap.h"
#import "StatusBarNotification.h"
#import "SocketClientHelper.h"
#import "PeerShareModel.h"

#ifndef AcquireIO_ONLY_COBROWSE
#import "AIONewCallerVC.h"
#endif

@class
#ifndef AcquireIO_ONLY_COBROWSE
IncomingCall,
AIONewCallerVC,
#endif
AIOScreenShare, AIOAgent, AIOChat, AIOThread, SocketWrap, SocketIOClient;
@interface AIOApp : NSObject{
    float firstX, firstY;
    BOOL allow_screen;
    UIImage *lastScreeen;
    BOOL buttonTouchedAndWaitSignal;
    UIView *pointerView;
    UIButton *stopCBView;

    BOOL waitScreenUpdateAck;
    int screenCounter;
}

+ (AIOApp *) a;

- (void)resetAll;
-(void)onDisconnectSocketReset;

@property(nonatomic, strong) NSString *accountUID;
@property(nonatomic, strong) NSString *visitortrackHashKey;
@property(nonatomic, strong) NSString *kSocketURL;
@property(nonatomic, strong) NSString *kAPIURL;
@property(nonatomic, strong) SocketIOClient *socketClient;
@property(nonatomic, strong) SocketIOClient *socketSignaling;
@property(nonatomic, strong) SocketWrap *sw_;
@property(nonatomic, strong) NSMutableDictionary *roomHandles;
@property(nonatomic) BOOL isInitBindDone;

@property(nonatomic, strong) NSDictionary *themeDict;

@property(nonatomic, strong) UINavigationController *nav;
@property(nonatomic, strong) UIColor *themeColor;
@property(nonatomic, strong) UIColor *systemButtonBGColor;
@property(nonatomic, strong) AcquireIOConfig *config;
@property(nonatomic, strong) NSString *themeFont_;
@property(nonatomic, strong) NSString *themeBoldFont_;

@property(nonatomic) SystemSoundID soundID;

@property (strong,nonatomic) PeerShareModel * shareBgModel;

@property(nonatomic, strong) NSMutableDictionary *arrDepartmentAgents;

@property (strong, nonatomic) NSDictionary *rtcOffer;
@property (nonatomic) BOOL isMeInitiator;

@property(nonatomic, strong) NSMutableArray *candidateMessageQueue;

@property(nonatomic, strong) NSString *inviteChatAddID;
@property(nonatomic, strong) NSDictionary *inviteChatAdd;

@property(nonatomic, strong) NSString *lastChatID;


@property(nonatomic, strong) UIView *supportButtonWrapper;
@property(nonatomic, strong) UIButton *supportButton;
@property(nonatomic, strong) UILabel *supportButtonBadge;

@property(nonatomic) BOOL isSupportControllerOpen;
@property(nonatomic) BOOL initAccount;
@property(nonatomic) BOOL isStartSessionDone;
@property(nonatomic) BOOL useSystemBtn;


@property(nonatomic) float firstX;
@property(nonatomic) float firstY;
@property(nonatomic) BOOL allow_screen;
@property(nonatomic) UIImage *lastScreeen;

@property(nonatomic) NSInteger unreadCount;

@property(nonatomic) NSString *chatStartPending;

@property(nonatomic, strong) NSString *visitorHashCustom;

@property(nonatomic, strong) NSString *visitorID;
@property(nonatomic, strong) NSString *visitorName;
@property(nonatomic, strong) NSString *visitorEmail;
@property(nonatomic, strong) NSString *visitorPhone;
@property(nonatomic, strong) NSString *visitorMessage;
@property(nonatomic, strong) NSString *visitorDpt;
@property(nonatomic, strong) NSArray *visitorExtraFields;
@property(nonatomic) NSInteger customCobrowseCode;

#ifndef AcquireIO_ONLY_COBROWSE
@property (nonatomic, strong) IncomingCall *iView;
@property (nonatomic, strong) AIONewCallerVC *caller;
#endif
@property (nonatomic, strong) UIPanGestureRecognizer *panCallerRecognizer;

@property (strong, nonatomic) StatusBarNotification *statusNotification;
@property (strong, nonatomic) AIOScreenShare *recorder;

@property (strong, nonatomic) NSString *viewState;
@property (strong, nonatomic) AIOThread *activeThread;

@property(nonatomic, strong) NSMutableArray *agents;
@property(nonatomic, strong) NSMutableArray *agentsIndex;

@property(nonatomic, strong) NSMutableArray *chats;
@property(nonatomic, strong) NSMutableArray *chatsIndex;

@property (nonatomic, strong) NSMutableArray *threads;
@property (nonatomic, strong) NSMutableArray *threadIndex;

@property(nonatomic) NSMutableDictionary *cbSignalingUsers;
@property(nonatomic) NSMutableArray *delegates;

@property (nonatomic) AckCallback ackReportHold; //For Signaling

@property (nonatomic) BOOL threadLoadedOne;


@property (nonatomic, strong) NSMutableArray *maskViews;
@property (nonatomic) BOOL maskKeyboard;

@property (strong, nonatomic) NSString *waitForConnectionAndAction;

@property (strong, nonatomic) NSMutableArray *botAgents;

/// this thread_meta_field is to support start specific thread based on reference Id
/// @available 2.0.10 or later
@property (strong, nonatomic)NSString *thread_meta_field;

- (void)bindSoHandler;
- (void)bindSMOHandler;
-(void)bindSignalingUserOn:(NSString *)roomJoinedId;
- (void)reloadPage;

- (void)showCallerView;
- (void)addGestureDragDrop;
- (void)removeGestureDragDrop;

- (NSArray *)getOnlineAgents;
- (void)showLocalNotification:(NSString *)title andMessage:(NSString *)message andSound:(NSString *)sound andBadge:(NSInteger)badge;

-(void)showLocalNotificationWithThread:(NSString *)title andMessage:(NSString *)message andSound:(NSString *)sound andBadge:(NSInteger)badge thread:(AIOThread *)thread;

- (void)openVC;

+ (UIFont *)themeFont:(CGFloat)size;
+ (UIFont *)themeBoldFont:(CGFloat)size;

- (void)initiateChat:(NSString *)type threadId:(NSInteger)threadId;
- (void)initiateCall:(NSString *)type threadId:(NSInteger)threadId isAuto:(BOOL)isAuto;
- (AIOThread *)startVirtualThread;

- (id)getThreadByID:(NSInteger)thread_id;
- (id) getThreadByVisitorID:(NSInteger)thread_id;
- (AIOThread *)findThreadByMetaField:(NSString *)threadMetaField;
- (id)getAgentByID:(NSInteger)agent_id;
- (id)getChatByID:(NSInteger)chat_id;
- (id)getChatByThreadID:(NSInteger)thread_id;

- (void)removeThread:(NSInteger)thread_id;
- (void)removeThreadChat:(NSInteger)thread_id;

- (void) loadThreads:(void (^)(BOOL loaded))callback;
- (void) updateDepartMent;

-(void)updateWidgetState:(BOOL)ui andState:(NSString *)status;


-(void)pauseSharing;
-(void)startSharing;
-(void)stopSharing:(BOOL)showPrompt handler:(void (^)(BOOL is_quit))callback;

-(NSMutableArray *)getSignalingUsers:(NSString *)roomType;

/**
 *
 * This method is used to check read online agent
 this method will return real online agent count
 *
 * @available Available in SDK version 2.0.9 or later
 */
- (NSInteger) getAvailableOnlineRealAgentCount;
@end
