//
//  DebugConfig.h
//  FastDevelopKit
//
//  Created by zhao on 2/2/16.
//  Copyright © 2016 zmy. All rights reserved.
//

#ifndef TK_DebugConfig
#define TK_DebugConfig

#pragma mark - DLog

/** DLog */
#ifndef DLog
#if DEBUG
#define DLog(id, ...) NSLog((@"%s Line %d: " id),__PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DLog(id, ...)
#endif
#endif

#pragma mark - exception

/** exception */
#define $try    @try {

#define $catch    }\
@catch (NSException *exception) {\
NSString *exceptionInfo = [NSString stringWithFormat:@"exception = %@\n Class = %@\n SEL = %@\n ",exception,self,NSStringFromSelector(_cmd)];\
DLog(@"%@",exceptionInfo);\
}

#endif /* TK_DebugConfig_h */
