//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADAdType : NSObject
{
    _Bool _isRewardBasedVideoAd;
    _Bool _isInterstitial;
    struct GADAdSize _adSize;
}

+ (id)interstitialAdType;
+ (id)bannerAdTypeForSize:(struct GADAdSize)arg1;
@property(nonatomic) struct GADAdSize adSize; // @synthesize adSize=_adSize;
@property(readonly, nonatomic) _Bool isInterstitial; // @synthesize isInterstitial=_isInterstitial;
- (id)description;
- (_Bool)isValid;
- (_Bool)isRewardBasedVideoAd;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initForRewardBasedVideoAd;
- (id)initForInterstitial;
- (id)initWithAdSize:(struct GADAdSize)arg1;
- (id)init;

@end

