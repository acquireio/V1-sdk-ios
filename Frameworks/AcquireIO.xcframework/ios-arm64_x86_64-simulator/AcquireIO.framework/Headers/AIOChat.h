//
//  AIOChat.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 2/3/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIOThread.h"

@class AIOThread, AIORTCRoom;
@interface AIOChat : NSObject

@property(nonatomic, strong) NSString *obj_uuid;

@property (nonatomic, strong) NSString *_id;
@property (nonatomic, strong) NSMutableDictionary *data;
@property (nonatomic, strong) NSMutableDictionary *chatUsers;
@property (nonatomic, strong) NSDictionary *tags;
@property (nonatomic, strong) NSMutableArray *messages;
@property (nonatomic, strong) AIOThread *thread;

- (id)initWithId:(NSString*)_id andData:(NSDictionary *)data;
- (void)updateData:(NSDictionary *)chatData;
- (void)onSOChatEvent:(NSMutableArray *)dataArray;
- (void)onSOChatRemove;

- (void)onAddMessage:(NSDictionary *)chatD;
- (void)sendOfflineMessage:(NSString *)value sender:(NSString *)sender;
@end
