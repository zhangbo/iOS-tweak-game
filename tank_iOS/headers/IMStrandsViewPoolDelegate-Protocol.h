//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMUIProperties, UIView;

@protocol IMStrandsViewPoolDelegate <NSObject>
- (void)imStrandsViewPoolResetView:(UIView *)arg1 withProperties:(IMUIProperties *)arg2;
- (void)imStrandsViewPoolCleanView:(UIView *)arg1;
- (UIView *)imStrandsViewPoolCreateViewWithProperties:(IMUIProperties *)arg1;
@end

