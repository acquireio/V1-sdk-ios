//
//  AIOThreadCell.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 2/2/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AIOThread.h"

@interface AIOThreadCell : UITableViewCell

@property (nonatomic) BOOL isRtc;
@property (nonatomic) BOOL isChat;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;

- (void)setupCellWithData:(AIOThread *)thread supRect:(CGRect)supRect;

- (void) updateFrame:(CGRect)supRect;

@end
