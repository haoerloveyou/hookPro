//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TBRateOperationalResult : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_rateId;	// 16 = 0x10
    NSDictionary *_info;	// 24 = 0x18
}

@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *rateId; // @synthesize rateId=_rateId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

