//
//  NSDate+TimeAgo.h
//  AcquireIO
//
//  Created by Raju Jangid on 22/09/16.
//  Copyright © 2016 AcquireIO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (FBTimeAgo)

+ (NSString*)mysqlDatetimeFormattedAsTimeAgo:(NSString *)mysqlDatetime;
+ (NSString *)nsDatetimeFormattedAsTimeAgo:(NSDate *)date1;

- (NSString *)formattedAsTimeAgo;

@end
