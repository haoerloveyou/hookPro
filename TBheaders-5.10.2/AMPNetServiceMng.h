//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AMPNetServiceACDS, AMPNetServiceAMPRPC, AMPNetServiceMtop;

@interface AMPNetServiceMng : NSObject
{
    AMPNetServiceMtop *_mtopSvr;	// 8 = 0x8
    AMPNetServiceACDS *_acdsSvr;	// 16 = 0x10
    AMPNetServiceAMPRPC *_rpcSvr;	// 24 = 0x18
}

+ (id)sharedInstance;
@property(retain, nonatomic) AMPNetServiceAMPRPC *rpcSvr; // @synthesize rpcSvr=_rpcSvr;
@property(retain, nonatomic) AMPNetServiceACDS *acdsSvr; // @synthesize acdsSvr=_acdsSvr;
@property(retain, nonatomic) AMPNetServiceMtop *mtopSvr; // @synthesize mtopSvr=_mtopSvr;
- (void).cxx_destruct;
- (_Bool)processPacket:(id)arg1;
- (id)init;

@end

