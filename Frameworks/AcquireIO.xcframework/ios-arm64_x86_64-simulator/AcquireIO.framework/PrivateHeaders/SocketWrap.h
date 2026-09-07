//
//  SocketWrap.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/19/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AcquireIO.h"
#import "AIOInclude.h"

@interface SocketWrap : NSObject{
    
    NSMutableDictionary *onsList;
    NSArray *eventList;
    
    EmitterListner listnerEmit;
    
    NSMutableArray *handlers;
    
}

@property(nonatomic, strong) SocketWrap *socketWrap;
@property(nonatomic, strong) NSMutableArray *emitHolds;

+(SocketWrap *) sharedObject;
-(SocketWrap *) getSocketWrap;

-(id)init;
-(void)bindInitHandle;

-(void)fire:(NSString *)name args:(NSMutableArray *)args report:(SocketAckEmitter *)report;

-(void)emit:(id)args, ...;
-(void)emitWithAck:(id)args, ...;
-(void)on:(NSString *)eventName origin:(NSString *)originClass withBlock:(EmitterListner)block;
-(void)onReport:(NSString *)eventName origin:(NSString *)originClass withBlock:(EmitterListnerReport)block;

-(void)clearEvents;

-(void)emitSignaling:(id)tos with:(NSMutableArray *)with;
-(void)emitAckSignaling:(id)tos with:(NSMutableArray *)with ackCallback:(AckCallback)ackCallback;

@end

