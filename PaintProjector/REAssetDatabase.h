//
//  AssetDatabase.h
//  PaintProjector
//
//  Created by kobunketsu on 14-5-4.
//  Copyright (c) 2014年 WenjiHu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "REObject.h"

@interface REAssetDatabase : NSObject

+(id)LoadAssetAtPath:(NSString*)assetPath ofType:(Class)aClass;
@end
