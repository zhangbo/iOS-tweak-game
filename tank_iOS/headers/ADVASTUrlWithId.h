//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface ADVASTUrlWithId : NSObject
{
    NSString *_id_;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)initWithID:(id)arg1 url:(id)arg2;

@end

