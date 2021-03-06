//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDApiBase.h"

@class MDAPICached;

@interface MomoUserProfileApi : MDApiBase
{
    MDAPICached *_apiCached;
}

@property(retain, nonatomic) MDAPICached *apiCached; // @synthesize apiCached=_apiCached;
- (void).cxx_destruct;
- (void)receiveLiveNotice:(_Bool)arg1 target:(id)arg2 remoteid:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)ignoreThisManFeedWithParams:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)batchFetchLimitedUsersInfoWithArray:(id)arg1 sourceType:(unsigned long long)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)remarkUserWithMomoid:(id)arg1 remarkName:(id)arg2 delegate:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)getTCWeiboTimeLinesWithMomoId:(id)arg1 userID:(id)arg2 delegate:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)getTCWeiboProfileWithMomoID:(id)arg1 userID:(id)arg2 delegate:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)sharedToTCWeiboFollowMomo:(_Bool)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)unbindTCWeiboWithDelegate:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)bindTCWeiboWithAccessToken:(id)arg1 refreshToken:(id)arg2 expiresIn:(double)arg3 openId:(id)arg4 enforced:(_Bool)arg5 delegate:(id)arg6 okSelector:(SEL)arg7 errSelector:(SEL)arg8 failSelector:(SEL)arg9;
- (void)sharedMemberInfoWithOptionsDic:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)getMemberSharedInfoWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)shareTWCardWithMomoid:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)shareFBCardWithMomoid:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)recvMsgFromOffilcalID:(id)arg1 postParams:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)weiboStatus:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)weiboUserWithMomoid:(id)arg1 sinaWeiboId:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)removeMultiFans:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)like:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)tipOffAndBlock:(id)arg1 aboutInfo:(id)arg2 isFromSearch:(_Bool)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)fetchProfileArray:(id)arg1 isSecret:(_Bool)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)fetch:(id)arg1 helloSource:(id)arg2 helloSourceInfo:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)fetch:(id)arg1 helloSource:(id)arg2 helloSourceInfo:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7 isMini:(_Bool)arg8;
- (void)fetchNiceProfile:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)fetch:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)dealloc;
- (id)initWithUser:(id)arg1;

@end

