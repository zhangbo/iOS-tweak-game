//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMAsset.h"

#import "IMAssetCacheDelegate-Protocol.h"
#import "IMStrandsViewPoolDelegate-Protocol.h"
#import "IMTimerDelegate-Protocol.h"

@class IMTimerManager, IMVastCompanion, NSArray, NSData, NSString, UIImage;

@interface IMImageAsset : IMAsset <IMAssetCacheDelegate, IMStrandsViewPoolDelegate, IMTimerDelegate>
{
    _Bool _prevUserInteractionEnabled;
    _Bool _delayTimerHit;
    NSString *_imageUrl;
    NSData *_imageData;
    UIImage *_image;
    double _startImageFetchTS;
    long long _displayDelay;
    NSString *_displayReference;
    NSString *_displayReferenceType;
    IMTimerManager *_delayTimer;
    IMVastCompanion *_companion;
    NSArray *_companionErrorTrackers;
    unsigned long long _assetSubType;
}

@property(nonatomic) unsigned long long assetSubType; // @synthesize assetSubType=_assetSubType;
@property(retain, nonatomic) NSArray *companionErrorTrackers; // @synthesize companionErrorTrackers=_companionErrorTrackers;
@property(retain, nonatomic) IMVastCompanion *companion; // @synthesize companion=_companion;
@property(nonatomic) _Bool delayTimerHit; // @synthesize delayTimerHit=_delayTimerHit;
@property(nonatomic) _Bool prevUserInteractionEnabled; // @synthesize prevUserInteractionEnabled=_prevUserInteractionEnabled;
@property(retain, nonatomic) IMTimerManager *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(retain, nonatomic) NSString *displayReferenceType; // @synthesize displayReferenceType=_displayReferenceType;
@property(nonatomic) NSString *displayReference; // @synthesize displayReference=_displayReference;
@property(nonatomic) long long displayDelay; // @synthesize displayDelay=_displayDelay;
@property(nonatomic) double startImageFetchTS; // @synthesize startImageFetchTS=_startImageFetchTS;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)imStrandsViewPoolResetView:(id)arg1 withProperties:(id)arg2;
- (void)imStrandsViewPoolCleanView:(id)arg1;
- (id)imStrandsViewPoolCreateViewWithProperties:(id)arg1;
- (void)dealloc;
- (void)fireCompanionErrorTrackers;
- (void)assetAddToCacheFailedForURL:(id)arg1 withError:(id)arg2;
- (void)assetReturningFromNetworkAt:(id)arg1 forURL:(id)arg2;
- (void)assetReturnedFromCacheAt:(id)arg1 forURL:(id)arg2;
- (void)populateImage:(id)arg1;
- (void)fireCompanionViewTrackers;
- (void)unHideView;
- (void)hideView;
- (void)timerHitForManager:(id)arg1;
- (void)videoQuartileHit;
- (id)urlByReplacingCacheBustingMacro:(id)arg1;
- (void)addImageToViewWithTransition:(_Bool)arg1;
- (void)fetchAssetResources;
- (_Bool)isStyleValid;
- (void)recycleView;
- (id)buildAssetView;
- (id)initWithJson:(id)arg1 withStyles:(id)arg2 atJPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

