//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaiduMobAdInterstitialSlot, BaiduMobAdInterstitialView, NSString;
@protocol BaiduMobAdInterstitialDelegate;

@interface BaiduMobAdInterstitial : NSObject
{
    _Bool _isReady;
    int _interstitialType;
    id <BaiduMobAdInterstitialDelegate> _delegate;
    NSString *_AdUnitTag;
    NSString *_Version;
    BaiduMobAdInterstitialSlot *_interstitialSlot;
    BaiduMobAdInterstitialView *_interstitialView;
}

@property(retain, nonatomic) BaiduMobAdInterstitialView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(retain, nonatomic) BaiduMobAdInterstitialSlot *interstitialSlot; // @synthesize interstitialSlot=_interstitialSlot;
@property(readonly, nonatomic) NSString *Version; // @synthesize Version=_Version;
@property(copy, nonatomic) NSString *AdUnitTag; // @synthesize AdUnitTag=_AdUnitTag;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) int interstitialType; // @synthesize interstitialType=_interstitialType;
@property(nonatomic) id <BaiduMobAdInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
- (id)userOtherAttributes;
- (id)userHobbies;
- (long long)userSalary;
- (long long)userEducation;
- (id)userWork;
- (id)userPostalCode;
- (id)userCity;
- (id)userBirthday;
- (int)userGender;
- (id)keywords;
- (_Bool)enableLocation;
- (id)channelId;
- (id)publisherId;
- (id)buildSlotInfo:(id)arg1;
- (void)buildCallbackBlock;
- (_Bool)sizeValid:(struct CGRect)arg1;
- (void)loadAd:(_Bool)arg1;
- (void)presentFromView:(id)arg1;
- (void)presentFromRootViewController:(id)arg1;
- (void)loadUsingSize:(struct CGRect)arg1;
- (void)load;
- (void)loadAndDisplayUsingKeyWindow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

