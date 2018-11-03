//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMRdbmsDataStore;

@interface IMAdsDAO : NSObject
{
    IMRdbmsDataStore *_store;
    long long _adCount;
}

@property(nonatomic) long long adCount; // @synthesize adCount=_adCount;
@property(retain, nonatomic) IMRdbmsDataStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (_Bool)deleteAdWithId:(id)arg1;
- (_Bool)deleteOldestAds:(int)arg1 adType:(id)arg2;
- (void)updateVastTagForPlacementID:(long long)arg1 adType:(id)arg2 adSize:(id)arg3 impressionId:(id)arg4 vastTag:(id)arg5;
- (int)getAdCountForAdType:(id)arg1;
- (int)getAdCountForPlacementId:(long long)arg1 adType:(id)arg2 adSize:(id)arg3;
- (_Bool)deleteExpiredAdsWithAdType:(id)arg1 returningCount:(int *)arg2;
- (_Bool)deleteAdForImpressionId:(id)arg1;
- (_Bool)insertAds:(id)arg1 forID:(long long)arg2 adType:(id)arg3 adSize:(id)arg4 impressionId:(id)arg5 withExpiry:(long long)arg6 withMarkupType:(id)arg7 andClientID:(id)arg8;
- (id)getAdForPlacementID:(long long)arg1 adType:(id)arg2 adSize:(id)arg3;
- (id)init;

@end

