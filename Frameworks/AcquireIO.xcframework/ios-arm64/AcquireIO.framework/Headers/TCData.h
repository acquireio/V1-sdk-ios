//
//  TCData.h
//  AcquireIO Chat
//
//  Created by Raju Jangid on 22/09/16.
//  Copyright © 2016 AcquireIO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"

typedef enum _AcquireIOChatType
{
    AcquireIOChatTypeMine = 0,
    AcquireIOChatTypeSomeoneElse = 1,
    AcquireIOChatTypeSystem = 2
} AcquireIOChatType;

typedef enum _AcquireIOChatContentType{
    AcquireIOChatContentTypeOther = 0,
    AcquireIOChatContentTypeBotRelatedQue = 1,
    AcquireIOChatContentTypeDialogueBotCarouselCard = 2,
    AcquireIOChatContentTypeBotFeedBack = 3
}AcquireIOChatContentType;


@protocol TCDataDelegate;
@class TCTableViewCell;
@interface TCData : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic, strong) id<TCDataDelegate> delegate;
@property (readonly, nonatomic, strong) NSDate *date;
@property (readonly, nonatomic) AcquireIOChatType type;
@property (nonatomic) BOOL isImage;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic) BOOL imageLoading;
@property (readonly, nonatomic, strong) UIView *view;
@property (readonly, nonatomic, strong) UIView *viewBar;
@property (readonly, nonatomic, strong) UILabel *timeAgo;
@property (readonly, nonatomic, strong) UIImageView *imageCheckView;
@property (readonly, nonatomic) UIEdgeInsets insets;
@property (nonatomic, strong) NSString *uname;
@property (nonatomic, strong) NSString *systemMsgStr;
@property (nonatomic, strong) NSString *msgStr;
@property (nonatomic) CGSize msgSize; //TODO: CHIRAG
@property (nonatomic) BOOL isHTMLContent; //TODO: CHIRAG
@property (nonatomic, strong) NSString *avatar;
@property (nonatomic) BOOL seen;
@property (nonatomic, strong) NSDictionary *fileDict;
@property (nonatomic, strong) NSArray *botDefaultButtons;
@property (nonatomic, strong) NSArray *botCustomButtons;
@property (nonatomic) NSString *themeFontName;
@property (nonatomic) NSString *themeBoldFontName;
@property (nonatomic) BOOL isSingle;
@property (nonatomic) BOOL isGroup;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) BOOL isLast;
@property (readonly, nonatomic) AcquireIOChatContentType contentType;
@property (nonatomic, strong) NSArray *botRelatedQuestions;

@property (nonatomic, strong) UICollectionView* collectionView; //added for carousel view.
@property (nonatomic, strong) NSMutableArray *carousalList;
@property (nonatomic, strong) NSMutableArray *actionBtns;


- (id)initWithText:(NSString *)text date:(NSDate *)date seen:(BOOL)seenArg type:(AcquireIOChatType)type uname:(NSString *)usrName themeFontName:(NSString *)themeFontName themeBoldFontName:(NSString *)themeBoldFontName;
+ (id)dataWithText:(NSString *)text date:(NSDate *)date seen:(BOOL)seenArg type:(AcquireIOChatType)type uname:(NSString *)usrName themeFontName:(NSString *)themeFontName themeBoldFontName:(NSString *)themeBoldFontName;
- (id)initWithImage:(UIImage *)image date:(NSDate *)date seen:(BOOL)seenArg type:(AcquireIOChatType)type uname:(NSString *)usrName fileDict:(NSDictionary *)fileDict themeFontName:(NSString *)themeFontName themeBoldFontName:(NSString *)themeBoldFontName;
+ (id)dataWithImage:(UIImage *)image date:(NSDate *)date seen:(BOOL)seenArg type:(AcquireIOChatType)type uname:(NSString *)usrName fileDict:(NSDictionary *)fileDict themeFontName:(NSString *)themeFontName themeBoldFontName:(NSString *)themeBoldFontName;

- (id)initWithView:(UIView *)view date:(NSDate *)date seen:(BOOL)seenArg type:(AcquireIOChatType)type insets:(UIEdgeInsets)insets;
+ (id)dataWithView:(UIView *)view date:(NSDate *)date seen:(BOOL)seenArg type:(AcquireIOChatType)type insets:(UIEdgeInsets)insets;
- (id)initRelatedQueWithText:(NSString *) text date:(NSDate *)date seen:(BOOL)seenArg type:(AcquireIOChatType)type uname:(NSString *)usrName themeFontName:(NSString *)themeFontName;
-(id)initWithCarouselDetail:(NSDictionary *)carouselDetails date:(NSDate *)date seen:(BOOL)seenArg type:(AcquireIOChatType)type;
-(id)initBotFeedBackView;
@end

@protocol TCDataDelegate <NSObject>

-(void) openFileWebView:(NSString *)fileName fileURL:(NSString *)fileURL;

@optional
-(void) reloadCell:(TCTableViewCell *)cell;
-(void) botButtonActionTouched:(NSString *)group value:(NSString *)value;
@end
