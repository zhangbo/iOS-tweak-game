//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADCrashReporter : NSObject
{
    CDUnknownFunctionPointerType _previousUncaughtExceptionHandler;
    _Bool _reportingEnabled;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
- (void)handleUncaughtException:(id)arg1;
- (void)reportUncaughtException:(id)arg1;
- (id)init;

@end
