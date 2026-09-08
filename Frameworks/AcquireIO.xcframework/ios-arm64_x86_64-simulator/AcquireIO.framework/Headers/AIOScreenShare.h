//
//  AIOScreenShare.h
//  AcquireIO
//
//  Created by Raju Jangid on 10/9/17.
//  Copyright © 2017 Just Total Tech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol AIOScreenShareDelegate <NSObject>
- (void)writeBackgroundFrameInContext:(UIImage *)base64String;
@end


@interface AIOScreenShare : NSObject

@property (nonatomic, readonly) BOOL isRecording;
@property (nonatomic) BOOL showBorders;

@property (nonatomic, weak) id <AIOScreenShareDelegate> delegate;

@property (nonatomic, strong) NSMutableArray *maskingViews;
@property (nonatomic, strong) NSMutableArray *maskingViewsRect;
@property (nonatomic) BOOL maskKeyboard;
@property (nonatomic, strong) NSArray *cobrowseDisabledView;
@property (nonatomic, strong) NSArray *cobrowseDisabledInputField;


+ (instancetype)sharedInstance;
+ (NSArray *)getCSSSelectors:(NSString *)rules;
- (BOOL)startRecording;
- (void)stopRecording;

- (void)performTouchInView:(CGPoint)pt;
- (void)performKeyPressInView:(NSDictionary *)data;

@end



