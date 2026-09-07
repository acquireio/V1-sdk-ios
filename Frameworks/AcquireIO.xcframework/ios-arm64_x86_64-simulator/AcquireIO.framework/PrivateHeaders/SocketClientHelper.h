//
//  SocketClientHelper.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/19/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIOInclude.h"
#import "AcquireIO.h"

typedef void (^onEmitCallBack)(NSString *id__, NSArray *data__);

@class SocketClientHelper;
@interface SocketClientHelper : NSObject{
    NSMutableDictionary *rooms;
    NSMutableDictionary *waitingRooms;
}

@property(nonatomic, strong) SocketIOClient *socketChannel;
@property(nonatomic, strong) SocketManager *socketManager;
@property(nonatomic, strong) SocketIOClient *socketSignalingChannel;
@property(nonatomic, strong) SocketManager *signalingSocketManager;
@property(nonatomic,copy) onEmitCallBack onEmit;
@property (nonatomic) BOOL isInit;
@property (nonatomic) BOOL isInitSignaling;
@property(nonatomic,strong) NSString *registerSignalingUserId;
@property(nonatomic,strong) NSMutableArray *eventObjectIndex;

-(SocketIOClient *) getSocketChannel;
-(SocketIOClient *) getSignaling;
+(SocketClientHelper *)sharedObject;

-(void) connect;
-(void) connectSignaling:(void (^)(BOOL connected))callback;
-(void)joinRoom:(NSString *)roomType forM:(NSString *)module roomCallback:(void (^)(NSString *_roomType, NSString *_module, NSString *roomId, BOOL resume))roomCallback;
-(NSString *)getRoomId:(NSString *)roomType;
-(id)eventIndex:(NSString *)event;
-(NSString *)indexOfEvent:(id)index;
-(void)removeAllRooms;
-(void)removeAllRoomsForChat:(NSInteger)chat_id;

@end
