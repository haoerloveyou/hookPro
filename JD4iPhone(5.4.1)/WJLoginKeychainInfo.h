//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSString;

@interface WJLoginKeychainInfo : NSObject
{
    int _a2ExpiredInterval;
    int _a2RefreshInterval;
    NSString *_account;
    NSString *_pin;
    NSData *_a2;
    NSDate *_a2CreateTime;
}

@property(nonatomic) int a2RefreshInterval; // @synthesize a2RefreshInterval=_a2RefreshInterval;
@property(nonatomic) int a2ExpiredInterval; // @synthesize a2ExpiredInterval=_a2ExpiredInterval;
@property(retain, nonatomic) NSDate *a2CreateTime; // @synthesize a2CreateTime=_a2CreateTime;
@property(retain, nonatomic) NSData *a2; // @synthesize a2=_a2;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;

@end

