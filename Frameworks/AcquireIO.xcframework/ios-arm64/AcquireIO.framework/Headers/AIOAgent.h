//
//  AIOAgent.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 2/3/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIOAgent : NSObject

@property (nonatomic, strong) NSString *_id;
@property (nonatomic, strong) NSMutableDictionary *data;

- (id)initWithId:(NSString*)_id andData:(NSDictionary *)data;
- (void)updateData:(NSDictionary *)data;
- (void)onSOAgentEvent:(NSMutableArray *)dataArray;
- (void)onSOAgentRemove:(NSMutableArray *)dataArray;

@end
