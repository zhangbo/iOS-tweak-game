//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ADVASTModel : NSObject
{
    unsigned long long currentIndex;
    NSMutableArray *adsArray;
    NSMutableArray *vastDocumentArray;
}

@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex;
@property(retain, nonatomic) NSMutableArray *adsArray; // @synthesize adsArray;
- (void).cxx_destruct;
- (id)urlWithCleanString:(id)arg1;
- (id)content:(id)arg1;
- (id)resultsForQuery:(id)arg1;
- (id)getCurrentAd;
- (id)mediaFiles:(id)arg1;
- (id)clickTracking:(id)arg1;
- (id)clickThrough:(id)arg1;
- (id)trackingEvents:(id)arg1;
- (id)impressions:(id)arg1;
- (id)errors:(id)arg1;
- (id)vastVersion;
- (void)addVASTDocument:(id)arg1;
- (id)iconFiles:(id)arg1;
- (id)companion:(id)arg1;
- (void)getCompanionAd:(unsigned long long)arg1 dict:(id)arg2;
- (void)getAvailableCreativeAndInfo:(unsigned long long)arg1 dict:(id)arg2;
- (void)getInLineAvailableAd;
- (void)dealloc;
- (id)init;

@end
