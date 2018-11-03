//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADAdChoicesView, GADMediaView, GADNativeAdViewPolicy, GADNativeContentAd;

@interface GADNativeContentAdView : UIView
{
    GADNativeAdViewPolicy *_nativeAdViewPolicy;
    UIView *_headlineView;
    UIView *_bodyView;
    UIView *_imageView;
    UIView *_logoView;
    UIView *_callToActionView;
    UIView *_advertiserView;
    GADMediaView *_mediaView;
    GADAdChoicesView *_adChoicesView;
}

@property(nonatomic) __weak GADAdChoicesView *adChoicesView; // @synthesize adChoicesView=_adChoicesView;
@property(nonatomic) __weak GADMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) __weak UIView *advertiserView; // @synthesize advertiserView=_advertiserView;
@property(nonatomic) __weak UIView *callToActionView; // @synthesize callToActionView=_callToActionView;
@property(nonatomic) __weak UIView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak UIView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) __weak UIView *headlineView; // @synthesize headlineView=_headlineView;
- (void).cxx_destruct;
- (void)updateMediaView;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
@property(retain, nonatomic) GADNativeContentAd *nativeContentAd;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

