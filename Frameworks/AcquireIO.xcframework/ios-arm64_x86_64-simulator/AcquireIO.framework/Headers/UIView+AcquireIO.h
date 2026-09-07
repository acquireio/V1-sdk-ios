//
//  UIView+AcquireIO.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 10/4/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AIOTouch.h"
#import "AIOKeyPress.h"
#import "AIOTouchEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIView (AcquireIO)

- (UIView *)hitAIO:(CGPoint)point withEvent:(nullable UIEvent *)event;

-(UIResponder *) cobrowseNextResponder;
-(void) cobrowseTriggerTapGestures;
-(void) cobrowseTouchesBegan:(AIOTouch *)touch withEvent:(AIOTouchEvent *)event;
-(void) cobrowseTouchesMoved:(AIOTouch *)touch withEvent:(AIOTouchEvent *)event;
-(void) cobrowseTouchesEnded:(AIOTouch *)touch withEvent:(AIOTouchEvent *)event;
-(void) cobrowseKeyDown:(AIOKeyPress *)keyPress;

@end

NS_ASSUME_NONNULL_END
