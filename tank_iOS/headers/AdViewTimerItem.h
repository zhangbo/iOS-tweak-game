//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface AdViewTimerItem : NSObject
{
    NSObject *target;
    SEL selFunc;
    double time;
    NSObject *param1;
    NSObject *param2;
    NSTimer *timer;
}

@property(nonatomic) __weak NSTimer *timer; // @synthesize timer;
@property(nonatomic) __weak NSObject *param2; // @synthesize param2;
@property(nonatomic) __weak NSObject *param1; // @synthesize param1;
@property(nonatomic) double time; // @synthesize time;
@property(nonatomic) SEL selFunc; // @synthesize selFunc;
@property(nonatomic) __weak NSObject *target; // @synthesize target;
- (void).cxx_destruct;
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;

@end
