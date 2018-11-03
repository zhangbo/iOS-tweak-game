//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTGestureDelegate-Protocol.h"
#import "GDTSplashBottomViewDelegate-Protocol.h"
#import "GDTSplashImageViewDelegate-Protocol.h"
#import "GDTSplashSkipViewDelegate-Protocol.h"

@class GDTSplashAdData, GDTSplashBottomView, GDTSplashImageView, GDTSplashSkipView, GDTSplashViewClickData, NSString, UIImageView;
@protocol GDTSplashViewDelegate;

@interface GDTSplashView : UIView <GDTSplashSkipViewDelegate, GDTSplashBottomViewDelegate, GDTSplashImageViewDelegate, GDTGestureDelegate>
{
    GDTSplashAdData *_splashAdData;
    id <GDTSplashViewDelegate> _delegate;
    GDTSplashSkipView *_skipAd;
    GDTSplashBottomView *_bottomView;
    GDTSplashImageView *_adImage;
    UIImageView *_tsaLogo;
    GDTSplashViewClickData *_clickData;
    struct CGPoint _skipButtonCenter;
}

@property(retain, nonatomic) GDTSplashViewClickData *clickData; // @synthesize clickData=_clickData;
@property(retain, nonatomic) UIImageView *tsaLogo; // @synthesize tsaLogo=_tsaLogo;
@property(retain, nonatomic) GDTSplashImageView *adImage; // @synthesize adImage=_adImage;
@property(retain, nonatomic) GDTSplashBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) GDTSplashSkipView *skipAd; // @synthesize skipAd=_skipAd;
@property(nonatomic) struct CGPoint skipButtonCenter; // @synthesize skipButtonCenter=_skipButtonCenter;
@property(nonatomic) __weak id <GDTSplashViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GDTSplashAdData *splashAdData; // @synthesize splashAdData=_splashAdData;
- (void).cxx_destruct;
- (void)handleSingleTapGesture:(id)arg1;
- (void)lifeTime:(unsigned long long)arg1;
- (void)exposureTimeout:(_Bool)arg1;
- (void)skipSplashView:(_Bool)arg1;
- (void)clickSplashBottom:(id)arg1;
- (void)clickSplashImageView:(id)arg1;
- (void)stopTick;
- (void)startTick:(int)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 skipView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

