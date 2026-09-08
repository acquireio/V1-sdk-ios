//
//  AIOTouchEvent.h
//  AcquireIOSDK
//
//  Created by Raju Jangid on 10/16/18.
//  Copyright © 2018 AcquireIO Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@interface AIOTouchEvent : NSObject


@property(nonatomic) CGFloat delta;

@property(nonatomic) CGFloat distance;

@property(nonatomic) NSString *_id;

@property(nonatomic) BOOL isEnd;

@property(nonatomic) BOOL isMove;

@property(nonatomic) BOOL isStart;

@property(nonatomic) CGPoint position;

@property(nonatomic) NSInteger state;

-(AIOTouchEvent *) initWithDictionary:(NSDictionary *)dict;

-(CGPoint) positionInWindow:(CGPoint *)position;
-(void) setTouch;
-(void) touch;

@end

NS_ASSUME_NONNULL_END
