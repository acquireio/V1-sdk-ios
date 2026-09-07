//
//  TCTableView.h
//  AcquireIO
//
//  Created by Raju Jangid on 22/09/16.
//  Copyright © 2016 AcquireIO. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TCTableViewDataSource.h"
#import "TCTableViewCell.h"

typedef enum _TCTypingType
{
    TCTypingTypeNobody = 0,
    TCTypingTypeMe = 1,
    TCTypingTypeSomebody = 2
} TCTypingType;

@interface TCTableView : UITableView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, assign) IBOutlet id<TCTableViewDataSource> bubbleDataSource;
@property (nonatomic) NSTimeInterval snapInterval;
@property (nonatomic) TCTypingType typingBubble;
@property (nonatomic, strong) NSString  *typingMessage;
@property (nonatomic) BOOL showAvatars;
@property (nonatomic) UIColor *avatar1Color;
@property (nonatomic) UIColor *avatar2Color;

@property (nonatomic) UIColor *textColor;
@property (nonatomic) UIColor *text2Color;

@property (nonatomic) BOOL updateSeen;

@property (nonatomic) UIColor *themeColor;
@property (nonatomic) NSString *themeFontName;
@property (nonatomic) NSString *themeBoldFontName;

- (void) scrollBubbleViewToBottomAnimated:(BOOL)animated;

- (void)reloadDataSeen;

@end
