//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface InMobi_ExternalAvidAdSessionContext : NSObject
{
    _Bool _isDeferred;
    NSString *_partnerVersion;
}

+ (id)contextWithPartnerVersion:(id)arg1 isDeferred:(_Bool)arg2;
+ (id)contextWithPartnerVersion:(id)arg1;
@property(readonly, nonatomic) _Bool isDeferred; // @synthesize isDeferred=_isDeferred;
@property(readonly, nonatomic) NSString *partnerVersion; // @synthesize partnerVersion=_partnerVersion;
- (void).cxx_destruct;
- (id)initWithPartnerVersion:(id)arg1 isDeferred:(_Bool)arg2;
- (id)initWithPartnerVersion:(id)arg1;

@end

