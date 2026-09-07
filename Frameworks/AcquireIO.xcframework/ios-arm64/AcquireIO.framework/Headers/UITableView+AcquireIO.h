//
//  UITableView+AcquireIO.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 10/12/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (AcquireIO)
- (UIView *)hitAIO:(CGPoint)point withEvent:(nullable UIEvent *)event;

@end

NS_ASSUME_NONNULL_END
