//
//  AIOCampaign.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 6/29/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIOAlertView.h"

@interface AIOCampaign : NSObject<AIOAlertViewDelegate>{
    AIOAlertView *alertView;
    UIImage *interstitialImage;
}

- (id) initWithTye:(NSString *)type andId:(NSInteger)id_ andData:(NSDictionary *)data;
- (void) show;

@property(nonatomic, assign) NSInteger trigger_id;
@property(nonatomic, strong) NSString *type;
@property(nonatomic, strong) NSDictionary *data;

@end
