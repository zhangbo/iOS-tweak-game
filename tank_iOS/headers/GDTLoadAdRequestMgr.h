//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GDTLoadAdRequestMgr : NSObject
{
    NSMutableDictionary *_adRequestsDict;
}

+ (id)instance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedGDTLoadAdRequestMgr;
@property(retain, nonatomic) NSMutableDictionary *adRequestsDict; // @synthesize adRequestsDict=_adRequestsDict;
- (void).cxx_destruct;
- (void)removeFirstAddRequest;
- (id)adRequestParam:(id)arg1;
- (void)saveLoadAdRequest:(id)arg1 threadId:(id)arg2;
- (id)adRequestServerReport:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

