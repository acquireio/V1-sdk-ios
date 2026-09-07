//
//  UIResponder+AcquireIO.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 10/4/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIResponder (AcquireIO)
+(id)currentFirstResponder;
@end

NS_ASSUME_NONNULL_END
