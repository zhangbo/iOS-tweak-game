//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AdCompAdapter.h"

@class NSMutableDictionary;

@interface AdCompAdapterSuiZong : AdCompAdapter
{
    NSMutableDictionary *infoDict;
}

- (void).cxx_destruct;
- (void)adjustAdSize:(struct CGSize *)arg1;
- (_Bool)parseResponse:(id)arg1 AdContent:(id)arg2 ErrorInfo:(id *)arg3;
- (_Bool)useInternalParser;
- (id)getAdReportRequest:(_Bool)arg1 AdContent:(id)arg2;
- (id)getAdGetRequest:(id)arg1;
- (id)getAdVisitRequest:(int)arg1;
- (void)setURLRequestHeaders:(id)arg1 Type:(int)arg2;
- (id)getVisitUrl:(int)arg1;
- (void)setAdCondition:(id)arg1;
- (void)initInfo;
- (void)dealloc;
- (id)init;

@end

