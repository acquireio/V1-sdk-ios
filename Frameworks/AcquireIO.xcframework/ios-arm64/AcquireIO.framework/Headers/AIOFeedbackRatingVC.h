//
//  AIOFeedbackRatingViewController.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 4/15/20.
//  Copyright © 2020 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AIOThread.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AIOFeedbackDelegate <NSObject>

- (void) addFeedbackMsg:(NSDictionary *)message;
- (void) hideFeedbackView;

@end

@interface AIOFeedbackRatingVC : UIViewController
@property(nonatomic, strong) id <AIOFeedbackDelegate> delegate;
@property (nonatomic, readonly, getter = isVisible) BOOL visible;


- (id) initWithThread:(NSInteger)thread_id andChat:(NSInteger)chat_id;
- (void) showInView:(UIView*)view;
- (void) hide;
@end

NS_ASSUME_NONNULL_END
