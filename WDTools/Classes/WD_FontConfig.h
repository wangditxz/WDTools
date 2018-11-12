//
//  FontConfig.h
//  FastDevelopKit
//
//  Created by zhao on 2/2/16.
//  Copyright © 2016 zmy. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef TK_FontConfig_h
#define TK_FontConfig_h

#pragma mark - Font

/*! 自适配字号 DynamicAdapter */
CG_INLINE UIFont* TK_DAFont(int size) {
    return [UIFont systemFontOfSize:size*(([UIScreen mainScreen].bounds.size.width>[UIScreen mainScreen].bounds.size.height?[UIScreen mainScreen].bounds.size.height:[UIScreen mainScreen].bounds.size.width)/375.0)];
}
/*! 自适配字号 DynamicAdapter */
CG_INLINE UIFont* TK_DABlodFont(int size) {
    return [UIFont boldSystemFontOfSize:size*(([UIScreen mainScreen].bounds.size.width>[UIScreen mainScreen].bounds.size.height?[UIScreen mainScreen].bounds.size.height:[UIScreen mainScreen].bounds.size.width)/375.0)];
}


/*! 不自适配字号 */
CG_INLINE UIFont* TK_FontForSystem(int size) {
    return [UIFont systemFontOfSize:size];
}
/*! 不自适配字号 */
CG_INLINE UIFont* TK_FontForBlod(int size) {
    return [UIFont boldSystemFontOfSize:size];
}

#pragma mark - Custom Font
/** Custom Font Small */
CG_INLINE UIFont* TK_Font_Small() {
    return TK_FontForSystem(12);
}

/** Custom Font Middle */
CG_INLINE UIFont* TK_Font_Middle() {
    return TK_FontForSystem(14);
}

/** Custom Font Big */
CG_INLINE UIFont* TK_Font_Big() {
    return TK_FontForSystem(16);
}

/** Custom Font Bigger */
CG_INLINE UIFont* TK_Font_Bigger() {
    return TK_FontForSystem(18);
}

/** Custom Font Biggest */
CG_INLINE UIFont* TK_Font_Biggest() {
    return TK_FontForSystem(20);
}

#pragma mark - System Font

/** System font 6 */
CG_INLINE UIFont* TK_Font_System_6() {
    return TK_FontForSystem(6);
}

/** System font 7 */
CG_INLINE UIFont* TK_Font_System_7() {
    return TK_FontForSystem(7);
}

/** System font 8 */
CG_INLINE UIFont* TK_Font_System_8() {
    return TK_FontForSystem(8);
}

/** System font 9 */
CG_INLINE UIFont* TK_Font_System_9() {
    return TK_FontForSystem(9);
}

/** System font 10 */
CG_INLINE UIFont* TK_Font_System_10() {
    return TK_FontForSystem(10);
}

/** System font 11 */
CG_INLINE UIFont* TK_Font_System_11() {
    return TK_FontForSystem(11);
}

/** System font 12 */
CG_INLINE UIFont* TK_Font_System_12() {
    return TK_FontForSystem(12);
}

/** System font 13 */
CG_INLINE UIFont* TK_Font_System_13() {
    return TK_FontForSystem(13);
}

/** System font 14 */
CG_INLINE UIFont* TK_Font_System_14() {
    return TK_FontForSystem(14);
}

/** System font 15 */
CG_INLINE UIFont* TK_Font_System_15() {
    return TK_FontForSystem(15);
}

/** System font 16 */
CG_INLINE UIFont* TK_Font_System_16() {
    return TK_FontForSystem(16);
}

/** System font 17 */
CG_INLINE UIFont* TK_Font_System_17() {
    return TK_FontForSystem(17);
}

/** System font 18 */
CG_INLINE UIFont* TK_Font_System_18() {
    return TK_FontForSystem(18);
}

/** System font 19 */
CG_INLINE UIFont* TK_Font_System_19() {
    return TK_FontForSystem(19);
}

/** System font 20 */
CG_INLINE UIFont* TK_Font_System_20() {
    return TK_FontForSystem(20);
}

/** System font 21 */
CG_INLINE UIFont* TK_Font_System_21() {
    return TK_FontForSystem(21);
}

/** System font 22 */
CG_INLINE UIFont* TK_Font_System_22() {
    return TK_FontForSystem(22);
}

/** System font 23 */
CG_INLINE UIFont* TK_Font_System_23() {
    return TK_FontForSystem(23);
}

/** System font 24 */
CG_INLINE UIFont* TK_Font_System_24() {
    return TK_FontForSystem(24);
}

/** System font 25 */
CG_INLINE UIFont* TK_Font_System_25() {
    return TK_FontForSystem(25);
}

/** System font 26 */
CG_INLINE UIFont* TK_Font_System_26() {
    return TK_FontForSystem(26);
}

/** System font 27 */
CG_INLINE UIFont* TK_Font_System_27() {
    return TK_FontForSystem(27);
}

/** System font 28 */
CG_INLINE UIFont* TK_Font_System_28() {
    return TK_FontForSystem(28);
}

/** System font 29 */
CG_INLINE UIFont* TK_Font_System_29() {
    return TK_FontForSystem(29);
}

/** System font 30 */
CG_INLINE UIFont* TK_Font_System_30() {
    return TK_FontForSystem(30);
}





#endif /* TK_FontConfig_h */








