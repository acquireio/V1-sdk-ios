//
//  AIOFileUpload.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 11/2/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AcquireIOClient.h"

NS_ASSUME_NONNULL_BEGIN

@interface AIOFileUpload : NSObject<NSURLSessionTaskDelegate>

@property (nonatomic, strong) NSArray *allowedExtensions;
@property (nonatomic) BOOL uploadFileProgress;
@property (nonatomic, copy) AIOUploadCompletionBlock completionBlock;
@property (nonatomic, copy) AIOUploadProgressBlock progressBlock;

+(AIOFileUpload *) sharedObject;
-(void)fileUpload:(NSString *)storePath fileName:(NSString *)fileName progress:(AIOUploadProgressBlock)progress completion:(AIOUploadCompletionBlock)completion;

@end

NS_ASSUME_NONNULL_END
