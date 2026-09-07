//
//  AIOAssets.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/19/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIOAssets : NSObject

+ (AIOAssets *) instance;

@property(nonatomic, strong) NSMutableDictionary *assetDict;

- (void) setAssetDefault;

+ (UIImage *) getImage:(NSString *)imageName;

+ (UIImage *) getImage:(NSString *)imageName withColor:(UIColor *)color;

+ (UIImage *) getImage:(NSString *)imageName withColor:(UIColor *)color  scaledToSize:(CGSize)newSize;


@end
