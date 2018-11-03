//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface BaiduMobAdRequestInfo : NSObject
{
    _Bool _autoplayEnabled;
    _Bool _enableLocation;
    int _userGender;
    double _timestamp;
    NSString *_publisherId;
    NSString *_adId;
    NSString *_channelId;
    NSArray *_keywords;
    NSDate *_userBirthday;
    NSString *_userCity;
    NSString *_userPostalCode;
    NSString *_userWork;
    long long _userEducation;
    long long _userSalary;
    NSArray *_userHobbies;
    NSDictionary *_userOtherAttributes;
    NSNumber *_w;
    NSNumber *_h;
    NSNumber *_lw;
    NSNumber *_lh;
    CLLocation *_mapSdkLocation;
    double _startTimeStamp;
    double _containerBeforeCreatedTimeStamp;
    double _containerAfterCreatedTimeStamp;
    double _startLoadHtmlTimeStamp;
    NSNumber *_adAmount;
    struct CLLocationCoordinate2D _currentLocation;
}

@property(retain, nonatomic) NSNumber *adAmount; // @synthesize adAmount=_adAmount;
@property(nonatomic) double startLoadHtmlTimeStamp; // @synthesize startLoadHtmlTimeStamp=_startLoadHtmlTimeStamp;
@property(nonatomic) double containerAfterCreatedTimeStamp; // @synthesize containerAfterCreatedTimeStamp=_containerAfterCreatedTimeStamp;
@property(nonatomic) double containerBeforeCreatedTimeStamp; // @synthesize containerBeforeCreatedTimeStamp=_containerBeforeCreatedTimeStamp;
@property(nonatomic) double startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(retain, nonatomic) CLLocation *mapSdkLocation; // @synthesize mapSdkLocation=_mapSdkLocation;
@property(retain, nonatomic) NSNumber *lh; // @synthesize lh=_lh;
@property(retain, nonatomic) NSNumber *lw; // @synthesize lw=_lw;
@property(retain, nonatomic) NSNumber *h; // @synthesize h=_h;
@property(retain, nonatomic) NSNumber *w; // @synthesize w=_w;
@property(retain, nonatomic) NSDictionary *userOtherAttributes; // @synthesize userOtherAttributes=_userOtherAttributes;
@property(retain, nonatomic) NSArray *userHobbies; // @synthesize userHobbies=_userHobbies;
@property(nonatomic) long long userSalary; // @synthesize userSalary=_userSalary;
@property(nonatomic) long long userEducation; // @synthesize userEducation=_userEducation;
@property(copy, nonatomic) NSString *userWork; // @synthesize userWork=_userWork;
@property(copy, nonatomic) NSString *userPostalCode; // @synthesize userPostalCode=_userPostalCode;
@property(copy, nonatomic) NSString *userCity; // @synthesize userCity=_userCity;
@property(retain, nonatomic) NSDate *userBirthday; // @synthesize userBirthday=_userBirthday;
@property(nonatomic) int userGender; // @synthesize userGender=_userGender;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) _Bool enableLocation; // @synthesize enableLocation=_enableLocation;
@property(nonatomic) _Bool autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(copy, nonatomic) NSString *publisherId; // @synthesize publisherId=_publisherId;
@property(nonatomic) struct CLLocationCoordinate2D currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)prodProp;
- (int)frameWrokType;
- (_Bool)preLoad;
- (id)getSensorProperty;
- (id)getPersonProperty;
- (id)signApp;
- (id)duration;
- (id)act;
- (_Bool)sound;
- (int)adType;
- (id)getAdUnitProperty;
- (id)getDeviceInfo;
- (id)getAppInfo;
- (_Bool)canAddVideo;
- (_Bool)addMSSP;
- (id)requestId;
- (id)getNativeTimeStampDic;
- (id)appPropertyJsonString;
- (id)additionalParameters;
- (id)appProperty;
- (void)updateLocationOnce;
- (id)queryURL;
- (void)dealloc;
- (id)init;

@end
