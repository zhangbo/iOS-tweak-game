//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdNativeAdNetworkAdapter, NSDictionary, NSMutableDictionary, NSString;

@interface AdViewNativeAdInfo : NSObject
{
    NSMutableDictionary *infoDict;
    AdNativeAdNetworkAdapter *adapter;
    NSDictionary *_nativeAdDict;
    NSString *_nativeAdID;
}

@property(retain, nonatomic) NSString *nativeAdID; // @synthesize nativeAdID=_nativeAdID;
@property(retain, nonatomic) NSDictionary *nativeAdDict; // @synthesize nativeAdDict=_nativeAdDict;
@property(retain, nonatomic) AdNativeAdNetworkAdapter *adapter; // @synthesize adapter;
@property(retain, nonatomic) NSMutableDictionary *infoDict; // @synthesize infoDict;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clickNativeAd;
- (void)showNativeAdWith:(id)arg1;
- (void)finishedDataExport;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

