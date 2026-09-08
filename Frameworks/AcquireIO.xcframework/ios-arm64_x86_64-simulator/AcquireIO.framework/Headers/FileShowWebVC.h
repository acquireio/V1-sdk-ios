//
//  FileShowWebVC.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 1/19/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface FileShowWebVC : UIViewController <WKNavigationDelegate>
///<UIWebViewDelegate>
@property(nonatomic, strong) NSString *fileURL;
@end
