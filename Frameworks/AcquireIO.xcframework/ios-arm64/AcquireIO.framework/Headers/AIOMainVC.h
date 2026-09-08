//
//  AIOMainVC.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/19/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "HPGrowingTextView.h"
#import "TCTableView.h"
#import "TCTableViewDataSource.h"
#import "TCData.h"
#import "AIOThread.h"

@interface AIOMainVC : UIViewController <TCTableViewDataSource, HPGrowingTextViewDelegate, UIGestureRecognizerDelegate, TCDataDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, NSURLSessionTaskDelegate>{
    
    NSMutableArray *chatIDsIndex;
    NSMutableArray *chatDataIndex2;
    
    UIRefreshControl *refreshControl;
    UIView *containerView;
    UIButton *uploadBtn;
    HPGrowingTextView *textView;
    
    UIGestureRecognizer *tapper_any;
    
    BOOL uploadFileProgress;
    BOOL isLoadMore;
    NSString *lastId;
    
    
    
    
}

+ (AIOMainVC *) sharedMainViewObject;

@property(nonatomic, strong) NSString *view_uuid;
@property(nonatomic, strong) TCTableView *msgTableView2;
@property(nonatomic) NSInteger thread_id;
@property(nonatomic) BOOL initChatDone;
@property(nonatomic) BOOL getLast20MessagesCalled;
///this array keeps the list of messages.
@property(nonatomic, strong) NSMutableArray *bubbleData2;

- (void) processChatDict:(NSDictionary *)chatD;
- (void) sendMessageInThread:(NSString *)type message:(NSString *)message;
- (void) onBroadcastSuggestionList:(NSMutableArray *)messages;
- (void) onBroadcastRedirectRequest:(NSString *)url;
- (void) updateCallingButtons;
- (void) showFeedback:(NSInteger)chat_id;
@end

