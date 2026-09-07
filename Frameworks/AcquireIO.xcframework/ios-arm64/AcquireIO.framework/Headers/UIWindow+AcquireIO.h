//
//  UIWindow+AcquireIO.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 10/16/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIWindow (AcquireIO)

-(void) aio_topViewController;
-(void) aio_topViewControllerWithRootViewController:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END
