//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface InMobi_AvidEvent : NSObject
{
    NSString *_name;
    NSString *_type;
    NSDictionary *_data;
}

+ (id)eventWithName:(id)arg1 type:(id)arg2 data:(id)arg3;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 type:(id)arg2 data:(id)arg3;

@end

