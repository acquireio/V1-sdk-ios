//
//  PeerShareModel.h
//  AcquireIO
//
//  Created by Raju Jangid on 04/09/2016.
//  Copyright © 2016 Just Total Tech. All rights reserved.
//

#import "BackgroundTaskManager.h"

@interface PeerShareModel : NSObject

@property (strong, nonatomic) NSTimer *timer;
@property (strong, nonatomic) NSTimer *delay10Seconds;
@property (strong, nonatomic) BackgroundTaskManager *bgTask;

+(id)sharedModel;

@end
