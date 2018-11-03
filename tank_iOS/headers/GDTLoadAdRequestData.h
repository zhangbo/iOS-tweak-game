//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTLoadAdRequestExtData, NSMutableDictionary, NSString;

@interface GDTLoadAdRequestData : NSObject
{
    int _adPosCount;
    int _count;
    int _dataType;
    int _posWidth;
    int _posHeight;
    int _posType;
    int _reqType;
    int _supportHttps;
    int _fc;
    NSString *_posId;
    NSString *_jsVersion;
    GDTLoadAdRequestExtData *_extReq;
    NSMutableDictionary *_jsExtMap;
    NSString *_checksum;
}

+ (id)encryptExt:(id)arg1;
@property(nonatomic) int fc; // @synthesize fc=_fc;
@property(nonatomic) int supportHttps; // @synthesize supportHttps=_supportHttps;
@property(copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(retain, nonatomic) NSMutableDictionary *jsExtMap; // @synthesize jsExtMap=_jsExtMap;
@property(retain, nonatomic) GDTLoadAdRequestExtData *extReq; // @synthesize extReq=_extReq;
@property(retain, nonatomic) NSString *jsVersion; // @synthesize jsVersion=_jsVersion;
@property(nonatomic) int reqType; // @synthesize reqType=_reqType;
@property(nonatomic) int posType; // @synthesize posType=_posType;
@property(nonatomic) int posHeight; // @synthesize posHeight=_posHeight;
@property(nonatomic) int posWidth; // @synthesize posWidth=_posWidth;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) int adPosCount; // @synthesize adPosCount=_adPosCount;
@property(retain, nonatomic) NSString *posId; // @synthesize posId=_posId;
- (void).cxx_destruct;
- (void)mergeExtReqDic:(id)arg1 withJsReqDic:(id)arg2;
- (void)generateCheckSumValue;
- (id)toMap;

@end
