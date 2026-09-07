//
//  AIOEmoji.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/29/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIOEmoji : NSObject
+(NSString *)decodeEmoji:(NSString *)message;
+(NSString *)encodeEmoji:(NSString *)message;
@end
