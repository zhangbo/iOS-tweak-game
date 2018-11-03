//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CJSONScanner;

@interface CJSONDeserializer : NSObject
{
    CJSONScanner *scanner;
    unsigned long long options;
}

+ (id)deserializer;
@property(nonatomic) unsigned long long options; // @synthesize options;
@property(retain, nonatomic) CJSONScanner *scanner; // @synthesize scanner;
- (id)deserializeAsArray:(id)arg1 error:(id *)arg2;
- (id)deserializeAsDictionary:(id)arg1 error:(id *)arg2;
- (id)deserialize:(id)arg1 error:(id *)arg2;
@property(nonatomic) unsigned long long allowedEncoding;
@property(retain, nonatomic) id nullObject;
- (void)dealloc;
- (id)init;
- (void)deserializeAsArray:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deserializeAsDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

