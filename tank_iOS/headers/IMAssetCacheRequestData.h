//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMNetworkServiceProvider, NSString;

@interface IMAssetCacheRequestData : NSObject
{
    IMNetworkServiceProvider *_nsp;
    NSString *_fileType;
    NSString *_hashString;
}

@property(retain) NSString *hashString; // @synthesize hashString=_hashString;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) IMNetworkServiceProvider *nsp; // @synthesize nsp=_nsp;
- (void).cxx_destruct;

@end

