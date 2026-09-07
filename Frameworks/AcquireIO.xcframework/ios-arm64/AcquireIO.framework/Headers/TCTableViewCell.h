//
//  TCTableViewCell.h
//  AcquireIO
//
//  Created by Raju Jangid on 22/09/16.
//  Copyright © 2016 AcquireIO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCData.h"

@interface TCTableViewCell : UITableViewCell

@property (nonatomic, strong) TCData *data;
@property (nonatomic) BOOL showAvatar;
@property (nonatomic) UIColor *avatar1Color;
@property (nonatomic) UIColor *avatar2Color;

@property (nonatomic) UIColor *textColor;
@property (nonatomic) UIColor *text2Color;
@property (nonatomic) UIColor *themeColor;
@property (nonatomic) NSString *themeFontName;
@property (nonatomic) NSString *themeBoldFontName;

@end
