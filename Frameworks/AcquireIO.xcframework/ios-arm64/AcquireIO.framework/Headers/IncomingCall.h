//
//  IncomingCall.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/19/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#ifndef AcquireIO_ONLY_COBROWSE
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface IncomingCall : UIViewController
@property (nonatomic, readonly, getter = isVisible) BOOL visible;

- (id)initWithNameNType:(NSString*)visitorName calltype:(NSString*)calltype;
- (id)initWithNameNTypeWithCallback:(NSString*)visitorName calltype:(NSString*)calltype callback:(void (^)(IncomingCall *buttonMenu, NSInteger returnCode))callback;
- (void) showInView:(UIView*)view;
- (void) hide;

@end
#endif
