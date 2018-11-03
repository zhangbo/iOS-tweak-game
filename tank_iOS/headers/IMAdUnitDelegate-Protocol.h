//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMAdUnit, NSDictionary, NSString;

@protocol IMAdUnitDelegate <NSObject>

@optional
- (void)imNativeAdUnitViewablilityTracked:(IMAdUnit *)arg1;
- (void)ad:(IMAdUnit *)arg1 rewardActionCompletedWithRewards:(NSDictionary *)arg2;
- (void)ad:(IMAdUnit *)arg1 didInteractWithParams:(NSDictionary *)arg2;
- (void)adDidDismissScreen:(IMAdUnit *)arg1;
- (void)adWillDismissScreen:(IMAdUnit *)arg1;
- (void)adDidPresentScreen:(IMAdUnit *)arg1;
- (void)adWillPresentScreen:(IMAdUnit *)arg1;
- (void)adDidLeaveApplication:(IMAdUnit *)arg1;
- (void)ad:(IMAdUnit *)arg1 didFailToLoadWithErrorCode:(int)arg2 andDescription:(NSString *)arg3;
- (void)adIsAvailable:(IMAdUnit *)arg1;
- (void)adDidFinishLoad:(IMAdUnit *)arg1;
@end

