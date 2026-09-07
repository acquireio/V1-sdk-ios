//
//  FrontCallerVC.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/19/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AcquireIO.h"
#import "AIOApp.h"

//WebRTC Import

#import <WebRTC/RTCMTLVideoView.h>
#import "WebRTC/RTCCameraVideoCapturer.h"
#import <WebRTC/RTCCameraPreviewView.h>
#import <WebRTC/RTCMediaStream.h>




typedef NS_ENUM(NSInteger, AIOARDAppClientState) {
    // Try Connecting to servers.
    kAIOARDAppClientStateTryToConnect,
    // Connecting to servers.
    kAIOARDAppClientStateConnecting,
    // Connected to servers.
    kAIOARDAppClientStateConnected,
    // Disconnected from servers.
    kAIOARDAppClientStateDisconnected,
    // decline by servers.
    kAIOARDAppClientStateDeclined,
};

@interface FrontCallerVC : UIViewController{
    RTCCameraVideoCapturer *_capturer;
}

@property (nonatomic, readonly, getter = isVisible) BOOL visible;
@property (nonatomic, strong) UIView *modalView;


//Views, Labels, and Buttons
@property (strong, nonatomic) IBOutlet RTCMTLVideoView *remoteView;
@property (strong, nonatomic) IBOutlet RTCCameraPreviewView *localView;
@property (strong, nonatomic) IBOutlet UIView *footerView;
@property (strong, nonatomic) IBOutlet UIView *buttonContainerView;
@property (strong, nonatomic) IBOutlet UIButton *audioButton;
@property (strong, nonatomic) IBOutlet UIButton *videoButton;
@property (strong, nonatomic) IBOutlet UIButton *hangupButton;
@property (strong, nonatomic) IBOutlet UIButton *cameraSwapButton;
@property (strong, nonatomic) IBOutlet UIButton *speakerButton;
@property (strong, nonatomic) IBOutlet UIButton *collespeButton;

@property (strong, nonatomic) IBOutlet UIButton *audioCallImg;

@property (nonatomic) NSInteger thread_id;
@property (strong, nonatomic) NSString *roomName;
@property (assign, nonatomic) BOOL hideStatusBar;
@property (assign, nonatomic) BOOL isSpeakerEnabled;
@property (strong, nonatomic) NSMutableArray *cbUsers;
@property (strong, nonatomic) NSDictionary *rtcOffer;
@property (strong, nonatomic) NSMutableArray *rtcCandidates;
@property (strong, nonatomic) NSString *callRequestType;
@property (strong, nonatomic) AckCallback reportCBHold;

@property (strong, nonatomic) RTCMediaStream *remoteStreamReceived;

@property (strong, nonatomic) RTCVideoTrack *localVideoTrack;
@property (strong, nonatomic) RTCVideoTrack *remoteVideoTrack;
@property (assign, nonatomic) CGSize localVideoSize;
@property (assign, nonatomic) CGSize remoteVideoSize;
@property (assign, nonatomic) BOOL isZoom; //used for double tap remote view
@property (assign, nonatomic) BOOL isAuto;

//togle button parameter
@property (assign, nonatomic) BOOL isAudioMute;
@property (assign, nonatomic) BOOL isVideoMute;

@property (assign, nonatomic) BOOL isFrontCamera;

@property (assign, nonatomic) NSUInteger peerKey;
@property (assign, nonatomic) NSUInteger peerOutKey;


- (void) startConnection;

- (void) showInView:(UIView*)view;
- (void) hideView;



//Added merge code from socketCheckVC
@property(nonatomic, readonly) AIOARDAppClientState state;
@property(nonatomic, strong) NSString *serverHostUrl;


- (void)connectToUserWithId;

- (void)connectToUserWithOffer;

- (void)disconnect;

// Mute and unmute Audio-In
- (void)muteAudioIn;
- (void)unmuteAudioIn;

// Mute and unmute Video-In
- (void)muteVideoIn;
- (void)unmuteVideoIn;

// Enabling / Disabling Speakerphone
- (void)enableSpeaker;
- (void)disableSpeaker;

// Swap camera functionality
- (void)switchCamera;

- (void) bindSSOHandle:(NSArray*)data  ack:(SocketAckEmitter*)ack;

@end

