//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CBPaymentBaseParamModel : NSObject
{
    NSString *_nonceStr;
    NSString *_timeStamp;
    NSString *_token;
    NSString *_merchant;
    NSString *_orderId;
    NSString *_extraInfo;
    NSString *_buttonContent;
    NSString *_title;
    NSString *_signResult;
    NSString *_returnMessage;
    NSString *_commonTip;
    NSString *_nextMethod;
}

@property(copy, nonatomic) NSString *nextMethod; // @synthesize nextMethod=_nextMethod;
@property(copy, nonatomic) NSString *commonTip; // @synthesize commonTip=_commonTip;
@property(copy, nonatomic) NSString *returnMessage; // @synthesize returnMessage=_returnMessage;
@property(copy, nonatomic) NSString *signResult; // @synthesize signResult=_signResult;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *buttonContent; // @synthesize buttonContent=_buttonContent;
@property(copy, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *merchant; // @synthesize merchant=_merchant;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end

