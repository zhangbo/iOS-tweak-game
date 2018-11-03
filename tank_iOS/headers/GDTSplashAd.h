//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTClickControllerDelegate-Protocol.h"
#import "GDTSplashViewDelegate-Protocol.h"

@class GDTAdMgr, GDTAntiSpamParam, GDTClickController, GDTSplashAdData, GDTSplashService, GDTSplashView, GDTSplashViewController, NSString, NSTimer, UIColor, UIView, UIWindow;
@protocol GDTSplashAdDelegate;

@interface GDTSplashAd : NSObject <GDTSplashViewDelegate, GDTClickControllerDelegate>
{
    GDTSplashView *_splashView;
    GDTSplashViewController *splashVC;
    NSString *_placementId;
    NSString *_appkey;
    GDTAdMgr *_adMgr;
    GDTSplashService *_splashService;
    UIWindow *_window;
    UIView *_defaultView;
    NSTimer *_fetchTimer;
    int _fetchDelay;
    int _exposureDuration;
    _Bool _loading;
    long long _loadAdTime;
    long long _loadImageTime;
    long long _startExporsureTime;
    long long _endExporsureTime;
    long long _playBeginTime;
    NSString *_threadId;
    GDTSplashAdData *_splashAdData;
    GDTClickController *_clickController;
    GDTAntiSpamParam *_antiSpam;
    id <GDTSplashAdDelegate> _delegate;
    UIColor *_backgroundColor;
    struct CGPoint _skipButtonCenter;
}

@property(nonatomic) struct CGPoint skipButtonCenter; // @synthesize skipButtonCenter=_skipButtonCenter;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int fetchDelay; // @synthesize fetchDelay=_fetchDelay;
@property(nonatomic) __weak id <GDTSplashAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)splashViewTsaLogo;
- (void)clickSplashAd:(id)arg1;
- (void)splashSkipViewLifeTime:(unsigned long long)arg1;
- (void)splashViewSkipButton:(_Bool)arg1;
- (void)exposureTimeoutSkip:(_Bool)arg1;
- (void)splashViewBottom:(id)arg1;
- (void)splashViewImage:(id)arg1;
- (void)modalDidDismiss;
- (void)modalWillDismiss;
- (void)modalDidPresent;
- (void)modalWillPresent;
- (void)leaveApp;
- (id)antiSpamClickUrl:(id)arg1;
- (void)resignActive;
- (void)fetchTimerUpdate;
- (void)closeDefaultView;
- (void)dissmissSplashAdAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeSplashAdAnimated:(_Bool)arg1;
- (void)showSplashAd;
- (void)exposureAd:(long long)arg1;
- (void)showDefaultBackground;
- (void)showError:(int)arg1;
- (_Bool)checkSkipView:(id)arg1;
- (_Bool)checkParams:(id)arg1;
- (void)loadAdAndShowInWindow:(id)arg1 withBottomView:(id)arg2 skipView:(id)arg3;
- (void)loadAdAndShowInWindow:(id)arg1 withBottomView:(id)arg2;
- (void)loadAdAndShowInWindow:(id)arg1;
- (void)initSplashView:(id)arg1;
- (void)initAdMgr;
- (id)initWithAppkey:(id)arg1 placementId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
