//
//  HudTips.h
//  Fishes
//
//  Created by test on 2018/3/21.
//  Copyright © 2018年 com.youlu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HudTips : NSObject

//此处写的是上面StToaster的代码
+ (void)showToast:(NSString *)text showType:(StToastShowType)type animationType:(StToastAnimationType)animationType;

@end
