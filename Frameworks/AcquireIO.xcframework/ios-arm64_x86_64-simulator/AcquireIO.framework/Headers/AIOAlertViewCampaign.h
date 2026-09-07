//
//  AIOAlertViewCampaign.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 6/29/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AIOAlertViewCampaign : NSObject

- (id) initWithTitle:(NSString *)title andDescription:(NSString *)message;
- (void)addAction:(NSString *)title style:(UIAlertActionStyle)style handler:(void (^)(UIAlertAction *action))handler;
- (void) show;

@property(nonatomic, strong) UIAlertController *alert;

@end
