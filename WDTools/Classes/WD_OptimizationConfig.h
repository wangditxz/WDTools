//
//  ColorConfig.h
//  FastDevelopKit
//
//  Created by zhao on 2/2/16.
//  Copyright © 2016 zmy. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef TK_OptimizationConfig_h
#define TK_OptimizationConfig_h

/*! 可以计算block的执行时间，用来优化测试 */
CG_INLINE CGFloat TK_LinkedTime(void (^block)(void)) {
    CFAbsoluteTime startTime = CFAbsoluteTimeGetCurrent();
    block ();
    CFAbsoluteTime linkTime = (CFAbsoluteTimeGetCurrent() - startTime) * 1000.0;
    return linkTime;
}

/*! 可以打印block的执行时间，用来优化测试 */
CG_INLINE int TK_PrintLinkedTime(void (^block)(void)) {
    NSLog(@"Linked in %f ms", TK_LinkedTime(block));
    return 1;
}

#endif /* TK_OptimizationConfig_h */







