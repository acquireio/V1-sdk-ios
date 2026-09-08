//
//  AIOMicroEmitter.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/26/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

#define AIOOrigin(OBJ_) ({ [NSString stringWithFormat:@"%@.%d", NSStringFromClass([OBJ_ class]), __LINE__]; })

typedef void (^MicroEmitterCallback)(NSArray *argsList);

@interface AIOMicroEmitter : NSObject{
    NSMutableDictionary *callbacks;
}

+(AIOMicroEmitter *) object;
+(NSString *)origin:(id) object line:(NSInteger)line;

-(void)trigger:(NSString *)eventName with:(NSDictionary *)data;
-(void)removeTrigger:(NSString *)eventName;
-(void)removeTriggerByUDID:(NSString *)udid;
-(void)on:(NSString *)eventName origin:(NSString *)originClass withBlock:(MicroEmitterCallback)block;


@end
