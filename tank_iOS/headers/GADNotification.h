//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GADNotification : NSObject
{
    NSString *_name;
    NSDictionary *_parameters;
}

+ (_Bool)isNotificationURL:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNotificationURL:(id)arg1;
- (id)initWithName:(id)arg1 parameters:(id)arg2;
- (id)init;

@end

