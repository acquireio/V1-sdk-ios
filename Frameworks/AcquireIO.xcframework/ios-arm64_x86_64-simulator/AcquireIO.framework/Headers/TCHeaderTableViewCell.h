//
//  TCHeaderTableViewCell.h
//  AcquireIO
//
//  Created by Raju Jangid on 22/09/16.
//  Copyright © 2016 AcquireIO. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TCHeaderTableViewCell : UITableViewCell

+ (CGFloat)height;

@property (nonatomic, strong) NSDate *date;
@property (nonatomic) NSString *themeFontName;
@property (nonatomic) NSString *themeBoldFontName;

@end
