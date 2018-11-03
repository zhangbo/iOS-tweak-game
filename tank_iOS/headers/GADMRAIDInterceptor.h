//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol OS_dispatch_queue;

@interface GADMRAIDInterceptor : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSString *_bannerImplementationURLString;
    NSString *_expandedBannerImplementationURLString;
    NSString *_interstitialImplementationURLString;
    NSSet *_implementationURLStrings;
    _Bool _enabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy) NSString *interstitialImplementationURLString;
@property(copy) NSString *expandedBannerImplementationURLString;
@property(copy) NSString *bannerImplementationURLString;
- (_Bool)shouldRedirectRequest:(id)arg1;
- (_Bool)canRedirect;
- (void)updateImplementationURLStrings;
- (_Bool)URLisImplementationURL:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)init;
- (id)MRAIDURLStringForAdView:(id)arg1;

@end
