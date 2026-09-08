//
//  CustomChatView.h
//  AcquireIO
//
//  Created by Raju Jangid on 22/09/16.
//  Copyright © 2016 AcquireIO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KeyboardBar.h"

@interface CustomChatView : UIView

@property (weak, nonatomic) id<KeyboardBarDelegate> keyboardBarDelegate;

@end
