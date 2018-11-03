//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMAsset.h"

#import "IMStrandsViewPoolDelegate-Protocol.h"

@class NSString;

@interface IMButtonAsset : IMAsset <IMStrandsViewPoolDelegate>
{
}

- (void)imStrandsViewPoolResetView:(id)arg1 withProperties:(id)arg2;
- (void)imStrandsViewPoolCleanView:(id)arg1;
- (id)imStrandsViewPoolCreateViewWithProperties:(id)arg1;
- (void)fetchAssetResources;
- (_Bool)isStyleValid;
- (void)recycleView;
- (id)buildAssetView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
