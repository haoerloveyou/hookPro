//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSString, WCADBodyWrap, WCADCanvasInfo, WCADChainStrengthenInfo, WCADCommentWrap, WCADPageWrap, WCADPoiInfo, WCADVideoWrap, WCAdFeedDisplayInfo, WCMultiLanguageItem;

__attribute__((visibility("hidden")))
@interface WCAdvertiseInfo : NSObject <NSCoding>
{
    int adType;
    NSString *adDescription;
    NSString *adActionLink;
    NSString *adActionCardTpId;
    NSString *adActionCardExt;
    NSString *adActionCardTitle;
    int adActionType;
    NSString *adViewId;
    int adPosition;
    int noExposureExpireTime;
    int exposureNoActionExpireTime;
    _Bool webviewRightBarShow;
    NSString *adUserNickName;
    _Bool bExposured;
    int myAdCommentCount;
    unsigned int myAdCommentStartTime;
    NSString *adActionLinkWithTraceId;
    int source;
    NSString *expId;
    NSString *expOriginSnsId;
    _Bool adActionLinkHidden;
    _Bool attachShareLinkHidden;
    _Bool bWithoutAdExp;
    _Bool bIgnoreNewMsgTip;
    _Bool bIgnoreNewLikeMsg;
    _Bool bIgnoreNewCommentMsg;
    _Bool headClickRightBarShow;
    unsigned int headClickType;
    int longVideoAcessType;
    int adActionAppStoreType;
    NSString *adActionLinkName;
    WCMultiLanguageItem *expandOutsideTitle;
    WCMultiLanguageItem *expandInsideTitle;
    NSString *uxInfo;
    NSString *attachShareLinkUrl;
    NSString *attachShareLinkWording;
    unsigned long long commentStartTime;
    unsigned long long commentEndTime;
    unsigned long long unInterestStartTime;
    unsigned long long unInterestEndTime;
    NSMutableDictionary *adArgsDic;
    NSString *headClickParam;
    WCADPoiInfo *adPoiInfo;
    WCADChainStrengthenInfo *adChainStrengthenInfo;
    NSString *adActionAppStoreTitle;
    NSString *adActionAppStoreLink;
    WCADCanvasInfo *adCanvasInfo;
    NSString *traceId;
    NSString *sessionAid;
    WCAdFeedDisplayInfo *adFeedDisplayInfo;
    NSMutableDictionary *adCardItemDic;
    WCADBodyWrap *_bodyWrap;
    WCADCommentWrap *_commentWrap;
    WCADPageWrap *_detailPageWrap;
    WCADPageWrap *_h5PageWrap;
    WCADPageWrap *_albumPageWrap;
    WCADVideoWrap *_videoWrap;
    WCADVideoWrap *_streamVideoWrap;
    WCADPageWrap *_poiH5PageWrap;
    NSString *_originUxInfo;
    NSString *_originSnsId;
}

@property(retain, nonatomic) NSString *originSnsId; // @synthesize originSnsId=_originSnsId;
@property(retain, nonatomic) NSString *originUxInfo; // @synthesize originUxInfo=_originUxInfo;
@property(retain, nonatomic) WCADPageWrap *poiH5PageWrap; // @synthesize poiH5PageWrap=_poiH5PageWrap;
@property(retain, nonatomic) WCADVideoWrap *streamVideoWrap; // @synthesize streamVideoWrap=_streamVideoWrap;
@property(retain, nonatomic) WCADVideoWrap *videoWrap; // @synthesize videoWrap=_videoWrap;
@property(retain, nonatomic) WCADPageWrap *albumPageWrap; // @synthesize albumPageWrap=_albumPageWrap;
@property(retain, nonatomic) WCADPageWrap *h5PageWrap; // @synthesize h5PageWrap=_h5PageWrap;
@property(retain, nonatomic) WCADPageWrap *detailPageWrap; // @synthesize detailPageWrap=_detailPageWrap;
@property(retain, nonatomic) WCADCommentWrap *commentWrap; // @synthesize commentWrap=_commentWrap;
@property(retain, nonatomic) WCADBodyWrap *bodyWrap; // @synthesize bodyWrap=_bodyWrap;
@property(retain, nonatomic) NSMutableDictionary *adCardItemDic; // @synthesize adCardItemDic;
@property(retain, nonatomic) WCAdFeedDisplayInfo *adFeedDisplayInfo; // @synthesize adFeedDisplayInfo;
@property(retain, nonatomic) NSString *sessionAid; // @synthesize sessionAid;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId;
@property(retain, nonatomic) WCADCanvasInfo *adCanvasInfo; // @synthesize adCanvasInfo;
@property(nonatomic) int adActionAppStoreType; // @synthesize adActionAppStoreType;
@property(retain, nonatomic) NSString *adActionAppStoreLink; // @synthesize adActionAppStoreLink;
@property(retain, nonatomic) NSString *adActionAppStoreTitle; // @synthesize adActionAppStoreTitle;
@property(nonatomic) int longVideoAcessType; // @synthesize longVideoAcessType;
@property(retain, nonatomic) NSString *expOriginSnsId; // @synthesize expOriginSnsId;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
@property(nonatomic) int source; // @synthesize source;
@property(retain, nonatomic) WCADChainStrengthenInfo *adChainStrengthenInfo; // @synthesize adChainStrengthenInfo;
@property(retain, nonatomic) WCADPoiInfo *adPoiInfo; // @synthesize adPoiInfo;
@property(retain, nonatomic) NSString *adActionLinkWithTraceId; // @synthesize adActionLinkWithTraceId;
@property(retain, nonatomic) NSString *headClickParam; // @synthesize headClickParam;
@property(nonatomic) unsigned int headClickType; // @synthesize headClickType;
@property(nonatomic) _Bool headClickRightBarShow; // @synthesize headClickRightBarShow;
@property(nonatomic) _Bool bIgnoreNewCommentMsg; // @synthesize bIgnoreNewCommentMsg;
@property(nonatomic) _Bool bIgnoreNewLikeMsg; // @synthesize bIgnoreNewLikeMsg;
@property(nonatomic) _Bool bIgnoreNewMsgTip; // @synthesize bIgnoreNewMsgTip;
@property(retain, nonatomic) NSMutableDictionary *adArgsDic; // @synthesize adArgsDic;
@property(nonatomic) _Bool bWithoutAdExp; // @synthesize bWithoutAdExp;
@property(nonatomic) unsigned long long unInterestEndTime; // @synthesize unInterestEndTime;
@property(nonatomic) unsigned long long unInterestStartTime; // @synthesize unInterestStartTime;
@property(nonatomic) unsigned long long commentEndTime; // @synthesize commentEndTime;
@property(nonatomic) unsigned long long commentStartTime; // @synthesize commentStartTime;
@property(nonatomic) _Bool attachShareLinkHidden; // @synthesize attachShareLinkHidden;
@property(retain, nonatomic) NSString *attachShareLinkWording; // @synthesize attachShareLinkWording;
@property(retain, nonatomic) NSString *attachShareLinkUrl; // @synthesize attachShareLinkUrl;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo;
@property(retain, nonatomic) WCMultiLanguageItem *expandInsideTitle; // @synthesize expandInsideTitle;
@property(retain, nonatomic) WCMultiLanguageItem *expandOutsideTitle; // @synthesize expandOutsideTitle;
@property(retain, nonatomic) NSString *adActionLinkName; // @synthesize adActionLinkName;
@property(nonatomic) _Bool adActionLinkHidden; // @synthesize adActionLinkHidden;
@property(nonatomic) unsigned int myAdCommentStartTime; // @synthesize myAdCommentStartTime;
@property(nonatomic) int myAdCommentCount; // @synthesize myAdCommentCount;
@property(retain, nonatomic) NSString *adUserNickName; // @synthesize adUserNickName;
@property(nonatomic) _Bool webviewRightBarShow; // @synthesize webviewRightBarShow;
@property(nonatomic) int exposureNoActionExpireTime; // @synthesize exposureNoActionExpireTime;
@property(nonatomic) int noExposureExpireTime; // @synthesize noExposureExpireTime;
@property(nonatomic) _Bool bExposured; // @synthesize bExposured;
@property(nonatomic) int adPosition; // @synthesize adPosition;
@property(retain, nonatomic) NSString *adViewId; // @synthesize adViewId;
@property(nonatomic) int adActionType; // @synthesize adActionType;
@property(retain, nonatomic) NSString *adActionCardTitle; // @synthesize adActionCardTitle;
@property(retain, nonatomic) NSString *adActionCardExt; // @synthesize adActionCardExt;
@property(retain, nonatomic) NSString *adActionCardTpId; // @synthesize adActionCardTpId;
@property(retain, nonatomic) NSString *adActionLink; // @synthesize adActionLink;
@property(retain, nonatomic) NSString *adDescription; // @synthesize adDescription;
@property(nonatomic) int adType; // @synthesize adType;
- (void).cxx_destruct;
- (_Bool)isInCanvaAdDetailLinkJumpExp;
- (_Bool)shouldAdActionJumpCanvasPage;
- (void)allowAllVideoComponentsMakingVoice:(_Bool)arg1;
- (id)getInnerFirstVideoComponentItem;
- (_Bool)shouldForceStay;
- (id)genAdStatExt:(_Bool)arg1;
- (long long)countOfAdCanvasPageList;
- (_Bool)isCanvasAd;
- (_Bool)isAppstoreInternalJump;
- (_Bool)isValidForJumpAppstore;
- (_Bool)isValidForShowLinkBtn;
- (unsigned int)getAdClickLinkActionType;
- (id)getAdActionLink;
- (id)getAdActionTitle;
- (_Bool)hasMyAdComments;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

