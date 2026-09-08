//
//  AIOUtility.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/27/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AIOUtility : NSObject

// Bundle containing the SDK's bundled resources (Sound/*.mp3). Resolves the
// CocoaPods resource bundle when built as a pod, falling back to the code's
// own bundle otherwise.
+ (NSBundle *)acquireResourceBundle;

+ (NSMutableDictionary *) defaultThemeDictionary;
+ (NSMutableDictionary *) getPlistDict:(NSString *)fileName;

// AcquireIOSDK Version
+ (NSString *)sdkVersion;
// App Version
+ (NSString *)appVersion;
+ (NSString *)build;
+ (UIColor *)colorWithHexString:(NSString *)hexColor;
+ (UIColor *)getRandomColor;
+ (NSDate *)mysqlStringToDate:(NSString *)dateString;
+ (NSDate *)dateToMysqlString:(NSDate *)date;
+ (NSDate *)getAutoMessageDate;
+ (NSString *)dateGroup:(NSDate *)date;
+ (BOOL)isValidEmailAddress:(NSString *)email;
+ (NSString*)trimString:(NSString *)theString;
+ (BOOL)firstimage:(UIImage *)image1 isEqualTo:(UIImage *)image2;
+ (NSString *)emoJiDecode:(NSString *)str;
+ (NSString *)emoJiEncode:(NSString *)str;
+ (UIColor *)lighterColorForColor:(UIColor *)c withPercent:(CGFloat)percent withAlpha:(CGFloat)alpha;
+ (UIColor *)darkerColorForColor:(UIColor *)c withPercent:(CGFloat)percent withAlpha:(CGFloat)alpha;
+ (NSString *) stringByStrippingHTML:(NSString *)s;
+ (UIImage *)imageFromColor:(UIColor *)color;
+(CGFloat) getViewBottomMargin:(UIViewController *)containerVC;
+(CGFloat) getViewTopMargin:(UIViewController *)containerVC;
+(CGFloat) getViewLeftMargin:(UIViewController *)containerVC;
+(CGFloat) getViewRightMargin:(UIViewController *)containerVC;

+(NSDictionary *)stringToDictionary:(NSString *)string;
@end
