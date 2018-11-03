//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdViewAdNetworkConfig, AdViewConfig, AdViewView, NSTimer, UIView;
@protocol AdViewDelegate;

@interface AdViewAdNetworkAdapter : NSObject
{
    id <AdViewDelegate> adViewDelegate;
    AdViewView *adViewView;
    AdViewConfig *adViewConfig;
    AdViewAdNetworkConfig *networkConfig;
    UIView *adNetworkView;
    UIView *actAdView;
    NSTimer *dummyHackTimer;
    int nAdWaitFlag;
    int nAdBlockFlag;
    _Bool bWaitAd;
    _Bool _bGotView;
    int nSizeAd;
    struct CGSize sSizeAd;
    struct CGRect rSizeAd;
}

+ (void)setDummyHackTimeInterval:(int)arg1;
+ (int)networkType;
+ (_Bool)helperIsRetina;
+ (_Bool)helperIsIpad;
@property(nonatomic) int nAdBlockFlag; // @synthesize nAdBlockFlag;
@property(nonatomic) int nAdWaitFlag; // @synthesize nAdWaitFlag;
@property(retain) UIView *actAdView; // @synthesize actAdView;
@property(retain, nonatomic) NSTimer *dummyHackTimer; // @synthesize dummyHackTimer;
@property(nonatomic) struct CGSize sSizeAd; // @synthesize sSizeAd;
@property(nonatomic) struct CGRect rSizeAd; // @synthesize rSizeAd;
@property(nonatomic) int nSizeAd; // @synthesize nSizeAd;
@property(nonatomic) _Bool bGotView; // @synthesize bGotView=_bGotView;
@property(nonatomic) _Bool bWaitAd; // @synthesize bWaitAd;
@property(retain, nonatomic) UIView *adNetworkView; // @synthesize adNetworkView;
@property(retain, nonatomic) AdViewAdNetworkConfig *networkConfig; // @synthesize networkConfig;
@property(retain, nonatomic) AdViewConfig *adViewConfig; // @synthesize adViewConfig;
@property(nonatomic) __weak AdViewView *adViewView; // @synthesize adViewView;
@property(nonatomic) __weak id <AdViewDelegate> adViewDelegate; // @synthesize adViewDelegate;
- (void).cxx_destruct;
- (void)addActAdViewInContain:(id)arg1 rect:(struct CGRect)arg2;
- (void)getImageOfActAdViewForRemove;
- (void)setSizeParameter:(int *)arg1 rect:(struct CGRect *)arg2;
- (void)setSizeParameter:(int *)arg1 size:(struct CGSize *)arg2;
- (int)getSizeIndex;
- (void)updateSizeParameter;
- (void)dealloc;
- (_Bool)canMultiBeingDelegate;
- (_Bool)canClearDelegate;
- (void)cleanupDummyRetain;
- (void)dummyHackTimerHandler;
- (void)cleanupDummyHackTimer;
- (void)setupDefaultDummyHackTimer;
- (void)setupDummyHackTimer:(double)arg1;
- (_Bool)isBannerAnimationOK:(int)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldSendExMetric;
- (void)stopBeingDelegate;
- (void)getAd;
- (id)initWithAdViewDelegate:(id)arg1 view:(id)arg2 config:(id)arg3 networkConfig:(id)arg4;
- (_Bool)helperUseLandscapeMode;
- (_Bool)helperUseGpsMode;
- (_Bool)helperIsLandscape;
- (_Bool)isTestMode;
- (long long)helperCalculateAge;
- (id)helperSecondaryTextColorToUse;
- (id)helperTextColorToUse;
- (id)helperBackgroundColorToUse;
- (void)helperNotifyDelegateOfFullScreenModalDismissal;
- (void)helperNotifyDelegateOfFullScreenModal;

@end
