//
//  TCTypingTableCell.h
//  AcquireIO
//
//  Created by Raju Jangid on 22/09/16.
//  Copyright © 2016 AcquireIO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCTableView.h"


@interface TCTypingTableViewCell : UITableViewCell

+ (CGFloat)height;

@property (nonatomic) TCTypingType type;
@property (nonatomic, strong) NSString *message;
@property (nonatomic) BOOL showAvatar;
@property (nonatomic) NSString *themeFontName;
@property (nonatomic) NSString *themeBoldFontName;

@end
