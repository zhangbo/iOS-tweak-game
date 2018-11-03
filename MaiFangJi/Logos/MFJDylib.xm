// See http://iphonedevwiki.net/index.php/Logos

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

%hook MFJData
- (BOOL)readAdStatus
{
    %log((NSString *)@"zhangbo - readAdStatus");
    return NO;
}
- (id)init
{
    %log((NSString *)@"zhangbo - MFJData is initialized");
    if ((self = %orig)) {

    }
    return self;
}
- (void)setCash:(id)arg1
{
    if([arg1 isEqual:@"3000"]) {
        arg1 = [[NSMutableString alloc] initWithString:@"99999999"];
    }
    %orig;
}

- (void)setDatelimit:(id)arg1
{
    if([arg1 isEqual:@"52"]) {
        arg1 = [[NSMutableString alloc] initWithString:@"900"];
    }
    %orig;
}
%end
