//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol GADStatisticDictionaryDelegate, OS_dispatch_queue;

@interface GADStatisticDictionary : NSObject
{
    NSMutableDictionary *_statistics;
    _Bool _allowDictionaryModification;
    _Bool _hasEnqueuedNotificationBlock;
    id <GADStatisticDictionaryDelegate> _delegate;
    NSLock *_delegateLock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_arrayMaxSize;
}

@property(retain, nonatomic) NSMutableDictionary *arrayMaxSize; // @synthesize arrayMaxSize=_arrayMaxSize;
@property(nonatomic) _Bool hasEnqueuedNotificationBlock; // @synthesize hasEnqueuedNotificationBlock=_hasEnqueuedNotificationBlock;
@property(nonatomic) _Bool allowDictionaryModification; // @synthesize allowDictionaryModification=_allowDictionaryModification;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSLock *delegateLock; // @synthesize delegateLock=_delegateLock;
@property(nonatomic) __weak id <GADStatisticDictionaryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)resizeArray:(id)arg1 toMaxSize:(long long)arg2;
- (id)dictionary;
- (void)setMaxSize:(long long)arg1 forArrayWithKey:(id)arg2;
- (void)addObject:(id)arg1 toArrayWithKey:(id)arg2 shouldNotifyDelegate:(_Bool)arg3;
- (void)decrementNumberForKey:(id)arg1 shouldNotifyDelegate:(_Bool)arg2;
- (void)incrementNumberForKey:(id)arg1 shouldNotifyDelegate:(_Bool)arg2;
- (void)addNumber:(id)arg1 toNumberForKey:(id)arg2 shouldNotifyDelegate:(_Bool)arg3;
- (void)addEntriesFromDictionary:(id)arg1 shouldNotifyDelegate:(_Bool)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 shouldNotifyDelegate:(_Bool)arg3;
- (void)dispatchAsyncShouldNotifyDelegate:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)enqueueNotificationBlock;
- (void)didFinishModifying;
- (id)description;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithQueueLabel:(const char *)arg1 delegate:(id)arg2;

@end

