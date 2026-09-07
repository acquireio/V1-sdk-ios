//
//  BackgroundTaskManager.h
//  AcquireIO
//
//  Created by Raju Jangid on 04/09/2016.
//  Copyright © 2016 Just Total Tech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BackgroundTaskManager : NSObject

+(BackgroundTaskManager *) sharedTaskManagerObject;

-(UIBackgroundTaskIdentifier) beginNewBackgroundTask;
-(void) endAllBackgroundTasks;

@end
