//
//  AIOAccount.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/19/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIOAccount : NSObject{
    
}

@property(nonatomic,copy)NSString *user_id;

@property(nonatomic,copy)NSString *name;
@property(nonatomic,copy)NSString *first_name;
@property(nonatomic,copy)NSString *lastname;

@property(nonatomic,copy)NSString *plan_id;
@property(nonatomic,copy)NSString *reseller_app_host;
@property(nonatomic,copy)NSString *reseller_app_name;
@property(nonatomic,copy)NSString *reseller_app_url;
@property(nonatomic,copy)NSString *reseller_id;
@property(nonatomic,copy)NSString *reseller_logo_small;
@property(nonatomic,copy)NSString *reseller_website_url;

@property(nonatomic,copy)NSDictionary *limits;
@property(nonatomic,copy)NSDictionary *settings;
@property(nonatomic,copy)NSDictionary *formSetting;
@property(nonatomic,copy)NSDictionary *departments;
@property(nonatomic,copy)NSArray *agents;

@property(nonatomic,copy)NSDictionary *myself;
@property(nonatomic,copy)NSString *messenger_id;

-(id)init;

+(AIOAccount *)currentAccount;

-(void)setAIOAccount:(NSDictionary *)dict;

-(void)setMyselfData:(NSDictionary *)dict;

-(id)getAccountAgent:(NSInteger)agentID;

@end

