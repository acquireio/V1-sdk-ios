//
//  AIOTouch.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 10/1/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AIOTouchPhase) {
    AIOTouchPhaseBegan,             // whenever a finger touches the surface.
    AIOTouchPhaseMoved,             // whenever a finger moves on the surface.
    AIOTouchPhaseStationary,        // whenever a finger is touching the surface but hasn't moved since the previous event.
    AIOTouchPhaseEnded,             // whenever a finger leaves the surface.
    AIOTouchPhaseCancelled,         // whenever a touch doesn't end but we need to stop tracking (e.g. putting device to face)
};

@class AIOScreenShare;
@interface AIOTouch : NSObject

@property(nonatomic, strong) AIOScreenShare * _Nonnull recorder;
@property(nonatomic) NSTimeInterval timestamp;
@property(nonatomic) AIOTouchPhase phase;
@property(nonatomic) NSUInteger tapCount;   // touch down within a certain point within a certain amount of time
@property(nonatomic) CGPoint position;

@property(nullable,nonatomic,strong) UIWindow *window;
@property(nullable,nonatomic,strong) UIView *view;
@property(nullable,nonatomic,copy)   NSArray <UIGestureRecognizer *> *gestureRecognizers;

- (id _Nonnull )init;
-(void)startTouch;

@end
