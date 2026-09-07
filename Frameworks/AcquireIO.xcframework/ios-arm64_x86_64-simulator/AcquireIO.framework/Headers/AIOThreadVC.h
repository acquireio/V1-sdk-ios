//
//  AIOThreadVC.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/30/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AIOThread;
@interface AIOThreadVC : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property(nonatomic, strong) UITableView *tableView;
@property(nonatomic, strong) UIView *cobrowseCodeView;

+ (AIOThreadVC *)sharedObject;
- (void)loadThreads;
- (void) showThread:(AIOThread *)thread animated:(_Bool)animated;
- (void)addNewConversation;
-(void)startConversationText:(NSString *)message;//adding this method to send message automatically while user start thread with metafield
@end
