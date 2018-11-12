#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "TK_ColorConfig.h"
#import "TK_DebugConfig.h"
#import "TK_FontConfig.h"
#import "TK_OptimizationConfig.h"
#import "TK_SystemConfig.h"

FOUNDATION_EXPORT double WDToolsVersionNumber;
FOUNDATION_EXPORT const unsigned char WDToolsVersionString[];

