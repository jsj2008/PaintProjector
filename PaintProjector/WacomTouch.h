//
//  WacomTouch.h
//  PaintProjector
//
//  Created by 文杰 胡 on 2/10/15.
//  Copyright (c) 2015 WenjiHu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WacomDevice/WacomDeviceFramework.h>
#import "TrackedTouch+Extension.h"
@interface WacomTouch : UITouch
@property (retain, nonatomic) TrackedTouch *trackedTouch;
@property (assign, nonatomic) BOOL isPaintTouch;
+ (id)touchFromTrackedTouch:(TrackedTouch *)trackedTouch;
@end
