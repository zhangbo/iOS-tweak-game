//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdSpreadScreenManager, AdViewAdNetworkConfig, AdViewConfig, UIViewController;
@protocol AdSpreadScreenManagerDelegate;

@interface AdSpreadScreenAdNetworkAdapter : NSObject
{
    id <AdSpreadScreenManagerDelegate> adSpreadScreenDelegate;
    AdSpreadScreenManager *adSpreadScreenManager;
    AdViewConfig *adViewConfig;
    AdViewAdNetworkConfig *networkConfig;
    UIViewController *adSpreadScreenController;
    int loadType;
    _Bool _bWaitAd;
}

+ (int)networkType;
@property(nonatomic) int loadType; // @synthesize loadType;
@property(nonatomic) _Bool bWaitAd; // @synthesize bWaitAd=_bWaitAd;
@property(retain, nonatomic) UIViewController *adSpreadScreenController; // @synthesize adSpreadScreenController;
@property(retain, nonatomic) AdViewAdNetworkConfig *networkConfig; // @synthesize networkConfig;
@property(retain, nonatomic) AdViewConfig *adViewConfig; // @synthesize adViewConfig;
@property(nonatomic) __weak AdSpreadScreenManager *adSpreadScreenManager; // @synthesize adSpreadScreenManager;
@property(nonatomic) __weak id <AdSpreadScreenManagerDelegate> adSpreadScreenDelegate; // @synthesize adSpreadScreenDelegate;
- (void).cxx_destruct;
- (_Bool)isOpenGps;
- (_Bool)isTestMode;
- (void)dealloc;
- (_Bool)isBannerAnimationOK:(int)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldSendExMetric;
- (void)stopBeingDelegate;
- (_Bool)loadAdSpreadScreen:(id)arg1;
- (id)initWithAdSpreadScreenDelegate:(id)arg1 manager:(id)arg2 config:(id)arg3 networkConfig:(id)arg4;

@end

