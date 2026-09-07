//
//  AIONewThreadVC.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 4/12/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AIONewThreadDelegate <NSObject>

-(void) startConversationText:(NSString *)message;
-(void) dismissSupportVC;

@end

@interface AIONewThreadVC : UIViewController<UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate>

@property(nonatomic, strong) id <AIONewThreadDelegate> delegate;

@end
