//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CacheNetworkManager;

@interface SkuDetailNetworkAccess : NSObject
{
    CacheNetworkManager *cacheNetworkManager_;
    CDUnknownBlockType finishBlock_;
    CDUnknownBlockType cancelBlock_;
    _Bool _cdnwareRequest;
}

@property(nonatomic) _Bool cdnwareRequest; // @synthesize cdnwareRequest=_cdnwareRequest;
- (void).cxx_destruct;
- (id)cdnURLWithFunctionId:(id)arg1 wareId:(id)arg2;
- (void)showNewSkuDetail:(id)arg1 components:(id)arg2 error:(id)arg3;
- (void)fetchDataFromNetworkWithParam:(id)arg1 finishBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;

@end

