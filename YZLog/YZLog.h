

#ifndef YZLog_h
#define YZLog_h

#import "NSArray+YZLog.h"
#import "NSDictionary+YZLog.h"

#endif /* YZLog_h */


#ifdef DEBUG
#define YZLog(...) \
NSLog(@"\n%@第%d行:\n%@",[[NSString stringWithFormat:@"%s",__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:__VA_ARGS__]);
#else
#define YZLog(...)
#define NSLog(...)
#endif
