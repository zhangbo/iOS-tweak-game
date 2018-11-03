//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GADWebViewConfiguration : NSObject <NSCopying>
{
    _Bool _mediaPlaybackRequiresUserAction;
    _Bool _scalesPageToFit;
    unsigned long long _dataDetectorType;
    NSString *_webViewClassKey;
}

@property(copy, nonatomic) NSString *webViewClassKey; // @synthesize webViewClassKey=_webViewClassKey;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction; // @synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction;
@property(nonatomic) unsigned long long dataDetectorType; // @synthesize dataDetectorType=_dataDetectorType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
