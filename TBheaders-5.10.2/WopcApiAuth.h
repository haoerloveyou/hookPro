//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WopcBasicRequestModelDelegate-Protocol.h"

@class NSDictionary, NSString, WopcBasicRequestModel;

@interface WopcApiAuth : NSObject <WopcBasicRequestModelDelegate>
{
    NSString *_topApiName;	// 8 = 0x8
    NSString *_appkey;	// 16 = 0x10
    NSString *_domain;	// 24 = 0x18
    CDUnknownBlockType _completeBlock;	// 32 = 0x20
    NSDictionary *_permissionApiDict;	// 40 = 0x28
    WopcBasicRequestModel *_request;	// 48 = 0x30
    CDUnknownBlockType _apiListBlock;	// 56 = 0x38
}

@property(copy, nonatomic) CDUnknownBlockType apiListBlock; // @synthesize apiListBlock=_apiListBlock;
@property(retain, nonatomic) WopcBasicRequestModel *request; // @synthesize request=_request;
@property(retain, nonatomic) NSDictionary *permissionApiDict; // @synthesize permissionApiDict=_permissionApiDict;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) NSString *topApiName; // @synthesize topApiName=_topApiName;
- (void).cxx_destruct;
- (void)dealloc;
- (void)modelDidCancelLoad:(id)arg1;
- (void)modelDidFailedLoad:(id)arg1;
- (void)modelDidFinishLoad:(id)arg1;
- (void)checkApiAuthWithTopApi:(id)arg1 permissionApiDict:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)requestPermissionApiListWithAppkey:(id)arg1 domain:(id)arg2;
- (void)getApiPermissionList:(id)arg1 domain:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)authWithTopApi:(id)arg1 appkey:(id)arg2 domain:(id)arg3 complete:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

