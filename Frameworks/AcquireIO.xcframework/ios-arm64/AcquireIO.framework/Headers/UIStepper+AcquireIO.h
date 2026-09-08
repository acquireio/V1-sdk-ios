//
//  UIStepper+AcquireIO.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 10/16/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AIOTouch.h"
#import "AIOTouchEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIStepper (AcquireIO)

-(void) cobrowseTouchesBegan:(AIOTouch *)touch withEvent:(AIOTouchEvent *)event;
-(void) cobrowseTouchesEnded:(AIOTouch *)touch withEvent:(AIOTouchEvent *)event;
-(void) cobrowseTouchesMoved:(AIOTouch *)touch withEvent:(AIOTouchEvent *)event;

@end

NS_ASSUME_NONNULL_END
