//
//  UITextField+AcquireIO.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 10/16/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AIOTouch.h"
#import "AIOKeyPress.h"
#import "AIOTouchEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (AcquireIO)

-(void) cobrowseMoveCaratBy:(AIOKeyPress *)keyPress;
-(void) cobrowseTouchesEnded:(AIOTouch *)touch withEvent:(AIOTouchEvent *)event;
-(void) cobrowseKeyDown:(AIOKeyPress *)keyPress;


@end

NS_ASSUME_NONNULL_END
