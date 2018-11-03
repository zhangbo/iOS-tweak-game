#line 1 "/Users/bobsmith/Downloads/MFJ/MFJDylib/Logos/MFJDylib.xm"


#import <UIKit/UIKit.h>
#import <objc/NSObject.h>

#define kTweakName @"Zhangbo"

#ifdef DEBUG
#define NSLog(FORMAT, ...) NSLog(@"[%@: %s - %i] %@", kTweakName, __FILE__, __LINE__, [NSString stringWithFormat:FORMAT, ##__VA_ARGS__])
#else
#define NSLog(FORMAT, ...) do {} while(0)
#endif

@interface MFJData : NSObject

- (BOOL)readAdStatus;
- (id)init;
- (void)setCash:(id)arg1;
- (void)setDatelimit:(id)arg1;
@end


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class MFJData; 
static BOOL (*_logos_orig$_ungrouped$MFJData$readAdStatus)(_LOGOS_SELF_TYPE_NORMAL MFJData* _LOGOS_SELF_CONST, SEL); static BOOL _logos_method$_ungrouped$MFJData$readAdStatus(_LOGOS_SELF_TYPE_NORMAL MFJData* _LOGOS_SELF_CONST, SEL); static MFJData* (*_logos_orig$_ungrouped$MFJData$init)(_LOGOS_SELF_TYPE_INIT MFJData*, SEL) _LOGOS_RETURN_RETAINED; static MFJData* _logos_method$_ungrouped$MFJData$init(_LOGOS_SELF_TYPE_INIT MFJData*, SEL) _LOGOS_RETURN_RETAINED; static void (*_logos_orig$_ungrouped$MFJData$setCash$)(_LOGOS_SELF_TYPE_NORMAL MFJData* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$MFJData$setCash$(_LOGOS_SELF_TYPE_NORMAL MFJData* _LOGOS_SELF_CONST, SEL, id); static void (*_logos_orig$_ungrouped$MFJData$setDatelimit$)(_LOGOS_SELF_TYPE_NORMAL MFJData* _LOGOS_SELF_CONST, SEL, id); static void _logos_method$_ungrouped$MFJData$setDatelimit$(_LOGOS_SELF_TYPE_NORMAL MFJData* _LOGOS_SELF_CONST, SEL, id); 

#line 22 "/Users/bobsmith/Downloads/MFJ/MFJDylib/Logos/MFJDylib.xm"


static BOOL _logos_method$_ungrouped$MFJData$readAdStatus(_LOGOS_SELF_TYPE_NORMAL MFJData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    HBLogDebug(@"-[<MFJData: %p> readAdStatus]: %@", self, ((NSString *)@"zhangbo - readAdStatus"));
    return NO;
}

static MFJData* _logos_method$_ungrouped$MFJData$init(_LOGOS_SELF_TYPE_INIT MFJData* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    HBLogDebug(@"-[<MFJData: %p> init]: %@", self, ((NSString *)@"zhangbo - MFJData is initialized"));
    if ((self = _logos_orig$_ungrouped$MFJData$init(self, _cmd))) {

    }
    return self;
}

static void _logos_method$_ungrouped$MFJData$setCash$(_LOGOS_SELF_TYPE_NORMAL MFJData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    if([arg1 isEqual:@"3000"]) {
        arg1 = [[NSMutableString alloc] initWithString:@"99999999"];
    }
    _logos_orig$_ungrouped$MFJData$setCash$(self, _cmd, arg1);
}


static void _logos_method$_ungrouped$MFJData$setDatelimit$(_LOGOS_SELF_TYPE_NORMAL MFJData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    if([arg1 isEqual:@"52"]) {
        arg1 = [[NSMutableString alloc] initWithString:@"900"];
    }
    _logos_orig$_ungrouped$MFJData$setDatelimit$(self, _cmd, arg1);
}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$MFJData = objc_getClass("MFJData"); MSHookMessageEx(_logos_class$_ungrouped$MFJData, @selector(readAdStatus), (IMP)&_logos_method$_ungrouped$MFJData$readAdStatus, (IMP*)&_logos_orig$_ungrouped$MFJData$readAdStatus);MSHookMessageEx(_logos_class$_ungrouped$MFJData, @selector(init), (IMP)&_logos_method$_ungrouped$MFJData$init, (IMP*)&_logos_orig$_ungrouped$MFJData$init);MSHookMessageEx(_logos_class$_ungrouped$MFJData, @selector(setCash:), (IMP)&_logos_method$_ungrouped$MFJData$setCash$, (IMP*)&_logos_orig$_ungrouped$MFJData$setCash$);MSHookMessageEx(_logos_class$_ungrouped$MFJData, @selector(setDatelimit:), (IMP)&_logos_method$_ungrouped$MFJData$setDatelimit$, (IMP*)&_logos_orig$_ungrouped$MFJData$setDatelimit$);} }
#line 52 "/Users/bobsmith/Downloads/MFJ/MFJDylib/Logos/MFJDylib.xm"
