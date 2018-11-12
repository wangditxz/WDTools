//
//  ColorConfig.h
//  FastDevelopKit
//
//  Created by zhao on 2/2/16.
//  Copyright © 2016 zmy. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef TK_ColorConfig_h
#define TK_ColorConfig_h

#pragma mark - 16进制生成颜色

/** 根据16进制数、透明度(0.0-1.0)，生成对应的UIColor颜色 */
CG_INLINE UIColor* TK_Color_16_A(int RGB_Value, float alpha) {
    return [UIColor colorWithRed:((float)((RGB_Value & 0xFF0000) >> 16))/255.0 green:((float)((RGB_Value & 0xFF00) >> 8))/255.0 blue:((float)(RGB_Value & 0xFF))/255.0 alpha:alpha];
}

/** RGB，生成对应的UIColor颜色 */
CG_INLINE UIColor* TK_Color_RGB_A(int R, int G, int B, float alpha) {
    return [UIColor colorWithRed:(R)/255.0f green:(G)/255.0f blue:(B)/255.0f alpha:alpha];
}

/** 根据16进制数，生成对应的UIColor颜色，透明度为1.0 */
CG_INLINE UIColor* TK_Color_16(int RGB_Value) {
    return TK_Color_16_A(RGB_Value, 1.0);
}

#pragma mark - System Color

/** System Clear Color */
CG_INLINE UIColor* TK_Color_Clear() {
    return [UIColor clearColor];
}

/** System Red Color */
CG_INLINE UIColor* TK_Color_Red() {
    return [UIColor redColor];
}

/** System Yellow Color */
CG_INLINE UIColor* TK_Color_Yellow() {
    return [UIColor yellowColor];
}

/** System Green Color */
CG_INLINE UIColor* TK_Color_Green() {
    return [UIColor greenColor];
}

/** System Blue Color */
CG_INLINE UIColor* TK_Color_Blue() {
    return [UIColor blueColor];
}

/** System White Color */
CG_INLINE UIColor* TK_Color_White() {
    return [UIColor whiteColor];
}

/** System Black Color */
CG_INLINE UIColor* TK_Color_Black() {
    return [UIColor blackColor];
}

/** System Purple Color */
CG_INLINE UIColor* TK_Color_Purple() {
    return [UIColor purpleColor];
}

/** System DarkGray Color */
CG_INLINE UIColor* TK_Color_DarkGray() {
    return [UIColor darkGrayColor];
}

/** System LightGray Color */
CG_INLINE UIColor* TK_Color_LightGray() {
    return [UIColor lightGrayColor];
}

/** System LightGray Color */
CG_INLINE UIColor* TK_Color_DarkText() {
    return [UIColor darkTextColor];
}

#pragma mark - Custom Color

/** Custom Blue Color */
CG_INLINE UIColor* TK_Color_C_Blue() {
    return TK_Color_16(0x08b5f4);
}

/** Custom LightGray Color */
CG_INLINE UIColor* TK_Color_C_LightGray() {
    return TK_Color_16(0xeeedf2);
}

/** Custom Orange Color */
CG_INLINE UIColor* TK_Color_C_Orange() {
    return TK_Color_16(0xff9933);
}

/** Custom Gray Color */
CG_INLINE UIColor* TK_Color_C_Gray() {
    return TK_Color_16(0xe9e9e9);
}

/** Custom Gray2 Color */
CG_INLINE UIColor* TK_Color_C_Gray2() {
    return TK_Color_16(0x333333);
}

/** Custom Gray3 Color */
CG_INLINE UIColor* TK_Color_C_Gray3() {
    return TK_Color_16(0xb5b5b5);
}

/** Custom Gray4 Color */
CG_INLINE UIColor* TK_Color_C_Gray4() {
    return TK_Color_16(0xf7f7f7);
}

/** Custom Gray5 Color */
CG_INLINE UIColor* TK_Color_C_Gray5() {
    return TK_Color_16(0x666666);
}

/** Custom Orange2 Color */
CG_INLINE UIColor* TK_Color_C_Orange2() {
    return TK_Color_16(0xff6402);
}

/** Custom Line Color */
CG_INLINE UIColor* TK_Color_C_Line() {
    return TK_Color_16(0xececec);
}

/** Custom BottomOrange Color */
CG_INLINE UIColor* TK_Color_C_BottomOrange() {
    return TK_Color_16(0xfe8230);
}

/** Custom BackGround Color */
CG_INLINE UIColor* TK_Color_C_BackGround() {
    return TK_Color_16(0xf8f8f8);
}

/** 随机颜色 */
CG_INLINE UIColor* Tk_Color_Random() {
    int R = (arc4random() % 256) ;
    int G = (arc4random() % 256) ;
    int B = (arc4random() % 256) ;
    
    return [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:1];
}
#endif /* TK_ColorConfig_h */







