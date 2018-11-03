//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMAsset, IMNativeVideoProperties, IMVideoAssetMetaData, NSData, NSDictionary, NSObject, NSString, UIView;

@protocol IMAssetActionDelegate <NSObject>
- (NSObject *)imActionGetNotificationSender;
- (void)imActionVideoCompletedQuartile:(long long)arg1 forVideoAssetId:(NSString *)arg2;
- (_Bool)imActionIsCloseScheduled;
- (_Bool)imActionShouldRequireCustomViewabilityTracker:(IMAsset *)arg1;
- (void)asset:(IMAsset *)arg1 builtNonObstuctiveViewForVideoViewability:(UIView *)arg2;
- (_Bool)imActionShouldScrollToTopForRoot:(IMAsset *)arg1;
- (IMVideoAssetMetaData *)imActionGetVideoMetadataForAssetId:(NSString *)arg1;
- (void)imActionShowVideoEndCardForAsset:(IMAsset *)arg1;
- (IMAsset *)imActionGetAssetWithID:(NSString *)arg1;
- (void)imActionRewardedActionComplete;
- (NSData *)imActionGetVastTagIfAvailable;
- (void)imActionFoundVastAds:(NSData *)arg1;
- (IMNativeVideoProperties *)imAssetActionRequireVideoPropertiesWithRoot:(IMAsset *)arg1;
- (void)fireGenericEventUrl:(NSString *)arg1 forAsset:(IMAsset *)arg2;
- (void)assetVisibleOnScreen:(IMAsset *)arg1;
- (void)countdownTimerFireAction:(NSString *)arg1;
- (void)assetClicked:(IMAsset *)arg1 withParams:(NSDictionary *)arg2;
@end
