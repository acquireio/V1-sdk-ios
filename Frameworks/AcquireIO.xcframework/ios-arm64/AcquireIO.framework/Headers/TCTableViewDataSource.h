//
//  TCTableViewDataSource.h
//  AcquireIO
//
//  Created by Raju Jangid on 22/09/16.
//  Copyright © 2016 AcquireIO. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TCData;
@class TCTableView;
@protocol TCTableViewDataSource <NSObject>

@optional

@required

- (NSInteger)rowsForBubbleTable:(TCTableView *)tableView;
- (TCData *)bubbleTableView:(TCTableView *)tableView dataForRow:(NSInteger)row;

@end
