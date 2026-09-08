#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AcquireIO.h"
#import "AcquireIOClient.h"
#import "AIOAssets.h"
#import "AIOAsyncImageDownloader.h"
#import "AIOConstants.h"
#import "AIOEmoji.h"
#import "AIOFileUpload.h"
#import "AIOMicroEmitter.h"
#import "AIOUtility.h"
#import "AcquireIOBase64.h"
#import "BackgroundTaskManager.h"
#import "PeerShareModel.h"
#import "NSDate+TimeAgo.h"
#import "AIOAccount.h"
#import "AIOAgent.h"
#import "AIOChat.h"
#import "AIOThread.h"
#import "AIOAlertView.h"
#import "AIOAlertViewCampaign.h"
#import "AIOCampaign.h"
#import "AIOKeyPress.h"
#import "AIOScreenShare.h"
#import "AIOTouch.h"
#import "AIOTouchEvent.h"
#import "UICollectionViewCell+AcquireIO.h"
#import "UIControl+AcquireIO.h"
#import "UINavigationBar+AcquireIO.h"
#import "UIResponder+AcquireIO.h"
#import "UIScrollView+AcquireIO.h"
#import "UISegmentedControl+AcquireIO.h"
#import "UISlider+AcquireIO.h"
#import "UIStepper+AcquireIO.h"
#import "UISwitch+AcquireIO.h"
#import "UITableView+AcquireIO.h"
#import "UITableViewCell+AcquireIO.h"
#import "UITextField+AcquireIO.h"
#import "UITextView+AcquireIO.h"
#import "UIView+AcquireIO.h"
#import "UIWindow+AcquireIO.h"
#import "StatusBarNotification.h"
#import "AIOFeedbackRatingVC.h"
#import "AIOMainVC.h"
#import "AIONewThreadVC.h"
#import "AIOThreadCell.h"
#import "AIOThreadVC.h"
#import "TCData.h"
#import "TCHeaderTableViewCell.h"
#import "TCTableView.h"
#import "TCTableViewCell.h"
#import "TCTableViewDataSource.h"
#import "TCTypingTableViewCell.h"
#import "UIButton+AIOBotButton.h"
#import "CustomChatView.h"
#import "HPGrowingTextView.h"
#import "HPTextViewInternal.h"
#import "KeyboardBar.h"
#import "TCAsyncImageView.h"
#import "UITextView+AutoSuggestion.h"
#import "FileShowWebVC.h"
#import "IncomingCall.h"

FOUNDATION_EXPORT double AcquireIOVersionNumber;
FOUNDATION_EXPORT const unsigned char AcquireIOVersionString[];

