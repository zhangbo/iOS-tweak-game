//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADInterstitial;

@interface GADInterstitialOwner : NSObject
{
    _Bool _isSlotCreated;
    _Bool _isInterstitialCloseDelayed;
    GADInterstitial *_weakInterstitial;
    GADInterstitial *_presentedInterstitial;
    GADInterstitial *_pageCloseDelayedInterstitial;
    double _delayPageCloseTimeoutInterval;
}

- (void).cxx_destruct;
- (void)interstitialDelayPageCloseStopped;
- (void)interstitialDelayPageCloseStarted;
- (void)stopObserving;
- (void)observeInterstitial:(id)arg1;
- (void)moveAdViewToPlaceholderWindow:(id)arg1;
- (void)interstitialIsDismissed;
- (void)interstitialWillBePresented;
- (void)interstitialDidCreateSlot;
- (void)dealloc;
- (id)initWithInterstitial:(id)arg1;

@end

