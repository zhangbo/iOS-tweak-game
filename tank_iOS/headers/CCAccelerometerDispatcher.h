//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAccelerometerDelegate-Protocol.h"

@class CMMotionManager, NSString;

@interface CCAccelerometerDispatcher : NSObject <UIAccelerometerDelegate>
{
    struct Acceleration *_acceleration;
    CMMotionManager *_motionManager;
}

+ (id)sharedAccelerometerDispather;
- (void)accelerometer:(id)arg1;
- (void)setAccelerometerInterval:(float)arg1;
- (void)setAccelerometerEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

