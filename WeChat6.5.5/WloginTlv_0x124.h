//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WloginTlv_0x124 : WloginTlv
{
    NSString *sOs;
    NSString *sOsVer;
    unsigned short wNetInfo;
    NSString *sNetDetail;
    NSString *sAddr;
}

@property(copy) NSString *sAddr; // @synthesize sAddr;
@property(copy) NSString *sNetDetail; // @synthesize sNetDetail;
@property unsigned short wNetInfo; // @synthesize wNetInfo;
@property(copy) NSString *sOsVer; // @synthesize sOsVer;
@property(copy) NSString *sOs; // @synthesize sOs;
- (void)dealloc;
- (int)encode:(id)arg1;

@end
