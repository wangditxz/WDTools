//
//  SystemConfig.h
//  FastDevelopKit
//
//  Created by zhao on 2/2/16.
//  Copyright © 2016 zmy. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef TK_SystemConfig_h
#define TK_SystemConfig_h

#pragma mark - 获取屏幕物理高度

/** 屏幕宽度 */
CG_INLINE CGFloat TK_Screen_W() {
    return [UIScreen mainScreen].bounds.size.width;
}

/** 屏幕高度 */
CG_INLINE CGFloat TK_Screen_H() {
    return [UIScreen mainScreen].bounds.size.height;
}

/** 应用frame 宽度 */
CG_INLINE CGFloat TK_App_W() {
    return [UIScreen mainScreen].applicationFrame.size.width;
}

/** 应用frame 高度 */
CG_INLINE CGFloat TK_App_H() {
    return [UIScreen mainScreen].applicationFrame.size.height;
}

#pragma mark - 屏幕

/** 是否是retina屏幕 */
CG_INLINE CGFloat TK_Screen_Scale() {
    return [UIScreen mainScreen].scale;
}

/** 是否是最小屏幕(3.5寸屏幕，iPhone4、4S的屏幕大小) */
CG_INLINE BOOL TK_IsScreen3_5() {
    return ((TK_Screen_W() == 320.0) && (TK_Screen_H() == 480.0)) ? true : false;
}

/** 是否是最小屏幕(4寸屏幕，iPhone5、5S、SE的屏幕大小) */
CG_INLINE BOOL TK_IsScreen4_0() {
    return ((TK_Screen_W() == 320.0) && (TK_Screen_H() == 568.0)) ? true : false;
}

/** 是否是最小屏幕(4.7寸屏幕，iPhone6、6S、7的屏幕大小) */
CG_INLINE BOOL TK_IsScreen4_7() {
    return ((TK_Screen_W() == 375.0) && (TK_Screen_H() == 667.0)) ? true : false;
}

/** 是否是最小屏幕(5.5寸屏幕，iPhone6-p、6S-p、7-p的屏幕大小) */
CG_INLINE BOOL TK_IsScreen5_5() {
    return ((TK_Screen_W() == 414.0) && (TK_Screen_H() == 736.0)) ? true : false;
}

/** 是否是最小屏幕(5.8寸屏幕，iPhoneX的屏幕大小) */
CG_INLINE BOOL TK_IsScreen5_8() {
    return ((TK_Screen_W() == 375.0) && (TK_Screen_H() == 812.0)) ? true : false;
}

/** 屏幕宽度比例 */
CG_INLINE CGFloat TK_Screen_W_Percent() {
    return (TK_Screen_W() / 320.0);
}

/** 屏幕高度比例 */
CG_INLINE CGFloat TK_Screen_H_Percent() {
    return (TK_Screen_H() / 480.0);
}

#pragma mark - 版本号

/** App_infoDictionary */
CG_INLINE NSDictionary* TK_App_infoDictionary() {
    return [NSDictionary dictionaryWithDictionary:[NSBundle mainBundle].infoDictionary];
}

/** App_Version */
CG_INLINE NSString* TK_App_Version() {
    return [NSString stringWithFormat:@"%@", TK_App_infoDictionary()[@"CFBundleShortVersionString"]];
}

/** App_BundleVersion */
CG_INLINE NSString* TK_App_BundleVersion() {
    return [NSString stringWithFormat:@"%@", TK_App_infoDictionary()[@"CFBundleVersion"]];
}

/** IOS_Version */
CG_INLINE NSString* TK_iOS_Version() {
    return [UIDevice currentDevice].systemVersion;
}

/** 是否是iOS11系统 */
CG_INLINE BOOL TK_Is_iOS11() {
    return (([TK_iOS_Version() doubleValue] >= 11) && ([TK_iOS_Version() doubleValue] < 12)) ? true : false;
}

/** 是否是iOS10系统 */
CG_INLINE BOOL TK_Is_iOS10() {
    return (([TK_iOS_Version() doubleValue] >= 10) && ([TK_iOS_Version() doubleValue] < 11)) ? true : false;
}

/** 是否是iOS9系统 */
CG_INLINE BOOL TK_Is_iOS9() {
    return (([TK_iOS_Version() compare:@"9"] >= 0) && ([TK_iOS_Version() doubleValue] < 10)) ? true : false;
}

/** 是否是iOS8系统 */
CG_INLINE BOOL TK_Is_iOS8() {
    return (([TK_iOS_Version() compare:@"8"] >= 0) && ([TK_iOS_Version() compare:@"9"] < 0)) ? true : false;
}

/** 是否是iOS7系统 */
CG_INLINE BOOL TK_Is_iOS7() {
    return (([TK_iOS_Version() compare:@"7"] >= 0) && ([TK_iOS_Version() compare:@"8"] < 0)) ? true : false;
}

/** IOS_11_Or_Later */
CG_INLINE BOOL TK_iOS_11_Or_Later() {
    return ([TK_iOS_Version() doubleValue] >= 11) ? true : false;
}

/** IOS_10_Or_Later */
CG_INLINE BOOL TK_iOS_10_Or_Later() {
    return ([TK_iOS_Version() doubleValue] >= 10) ? true : false;
}

/** IOS_9_Or_Later */
CG_INLINE BOOL TK_iOS_9_Or_Later() {
    return ([TK_iOS_Version() doubleValue] >= 9) ? true : false;
}

/** IOS_8_Or_Later */
CG_INLINE BOOL TK_iOS_8_Or_Later() {
    return ([TK_iOS_Version() doubleValue] >= 8) ? true : false;
}

/** IOS_7_Or_Later */
CG_INLINE BOOL TK_iOS_7_Or_Later() {
    return ([TK_iOS_Version() doubleValue] >= 7) ? true : false;
}



#endif /* TK_SystemConfig_h */


