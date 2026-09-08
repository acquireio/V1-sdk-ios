//
//  AIOThread.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 2/2/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIOChat.h"
#import "AIOMainVC.h"

/// Status for the agent.
typedef NS_ENUM(NSInteger, AIOThreadStatus) {
    AIOThreadStatusOpen,
    AIOThreadStatusClose,
};

@class AIOChat, AIOMainVC;
@interface AIOThread : NSObject

@property(nonatomic, strong) NSString *obj_uuid;
@property (nonatomic) NSInteger thread_id;
@property (nonatomic) NSInteger visitorId;
@property (nonatomic) NSInteger lastChatId;
@property (nonatomic) long long int timestamp;

@property (nonatomic) int countChat;
@property (nonatomic) int unseenCount;
@property (nonatomic) AIOThreadStatus threadStatus;

@property (nonatomic, strong) NSDate *dateUpdated;
@property (nonatomic, strong) NSString *timeAgo;

@property (nonatomic, strong) NSMutableArray *agentImages;
@property (nonatomic, strong) NSString *agents;
@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSString *users;
@property (nonatomic, strong) NSString *lastChatStatus;
@property (nonatomic, strong) NSString *lastChatType;
@property (nonatomic, strong) NSString *lastMessageType;

@property (nonatomic) NSInteger unseenMessages;
@property (nonatomic) BOOL collect_visitor_data;

@property (nonatomic) NSInteger offlineChat;

@property (nonatomic, strong) AIOChat *chat;
@property (nonatomic, strong) AIOMainVC *view;

///meta field used to identify thread by client
@property (strong, nonatomic)NSString* metaField;

-(id)initWithData:(NSDictionary *)dict;
-(void)updateData:(NSDictionary *)dict;
-(NSInteger)getTotalUnread;
-(void)unseenAllMessage;
-(void)addMessageInView:(NSDictionary *)chatD2;

@end
