//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTAdThreadIdUtil : NSObject
{
}

+ (_Bool)sample:(id)arg1 reportRatio:(int)arg2;
+ (_Bool)isSampledClkAdThreadId:(id)arg1;
+ (_Bool)isSampledExpAdThreadId:(id)arg1;
+ (_Bool)isSampledGetAdThreadId:(id)arg1;
+ (id)buildAdThreadId:(id)arg1 posId:(id)arg2 deviceId:(id)arg3;

@end

