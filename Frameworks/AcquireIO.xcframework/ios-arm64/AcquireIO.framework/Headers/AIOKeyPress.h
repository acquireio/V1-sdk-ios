//
//  AIOKeyPress.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 10/17/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AIOKeyCode) {
    AIOKeyCodeTAB =  9,
    AIOKeyCodeRETURN =  13,
    AIOKeyCodePAGE_UP =  33,
    AIOKeyCodePAGE_DOWN =  34,
    AIOKeyCodeBACKSPACE =  8,
    AIOKeyCodeENTER =  13,
    AIOKeyCodeSHIFT =  16,
    AIOKeyCodeCTRL =  17,
    AIOKeyCodeALT =  18,
    AIOKeyCodePAUSE =  19,
    AIOKeyCodeCAPS_LOCK =  20,
    AIOKeyCodeESCAPE =  27,
    AIOKeyCodeSPACE =  32,
    AIOKeyCodeEND =  35,
    AIOKeyCodeHOME =  36,
    AIOKeyCodeLEFT_ARROW =  37,
    AIOKeyCodeUP_ARROW =  38,
    AIOKeyCodeRIGHT_ARROW =  39,
    AIOKeyCodeDOWN_ARROW =  40,
    AIOKeyCodeINSERT =  45,
    AIOKeyCodeDELETE =  46,
};

@interface AIOKeyPress : NSObject

@property (nonatomic, readonly) NSString* key;
@property (nonatomic, readonly) NSInteger code;
@property (nonatomic, readonly) NSString* state;
@property (nonatomic, readonly) bool ctrlKey;
@property (nonatomic, readonly) bool shiftKey;
@property (nonatomic, readonly) bool altKey;
@property (nonatomic, readonly) bool metaKey;

-(instancetype) initWithDict:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
