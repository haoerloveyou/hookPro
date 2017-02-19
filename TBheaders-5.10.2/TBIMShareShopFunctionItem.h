//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ShareShopDelegate-Protocol.h"
#import "TBIMInputFunctionItem-Protocol.h"

@class NSString, UIViewController;
@protocol TBIMMessageServiceAdapter, TBIMSessionServiceAdapter;

@interface TBIMShareShopFunctionItem : NSObject <ShareShopDelegate, TBIMInputFunctionItem>
{
    _Bool _isNew;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_iconFontName;	// 24 = 0x18
    NSString *_pageName;	// 32 = 0x20
    id <TBIMMessageServiceAdapter> _messageSvr;	// 40 = 0x28
    UIViewController *_responseVC;	// 48 = 0x30
    NSString *_sessionId;	// 56 = 0x38
    id <TBIMSessionServiceAdapter> _sessionSvr;	// 64 = 0x40
    NSString *_moduleSPM;	// 72 = 0x48
    NSString *_clickSPM;	// 80 = 0x50
}

@property(copy, nonatomic) NSString *clickSPM; // @synthesize clickSPM=_clickSPM;
@property(copy, nonatomic) NSString *moduleSPM; // @synthesize moduleSPM=_moduleSPM;
@property(nonatomic) __weak id <TBIMSessionServiceAdapter> sessionSvr; // @synthesize sessionSvr=_sessionSvr;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak UIViewController *responseVC; // @synthesize responseVC=_responseVC;
@property(nonatomic) __weak id <TBIMMessageServiceAdapter> messageSvr; // @synthesize messageSvr=_messageSvr;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(copy, nonatomic) NSString *iconFontName; // @synthesize iconFontName=_iconFontName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)sendShareShop:(id)arg1;
- (void)clickItemAction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
