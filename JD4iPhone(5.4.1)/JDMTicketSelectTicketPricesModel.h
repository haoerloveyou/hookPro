//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface JDMTicketSelectTicketPricesModel : JDModel
{
    int _yn;
    int _priceType;
    int _presaleSwitch;
    int _sellState;
    long long _ticketTime;
    long long _agentId;
    long long _ticketId;
    NSString *_priceTypeName;
    NSString *_sellStateName;
    long long _priceId;
    double _price;
    NSString *_priceInfo;
    long long _priceTimeLevel;
    double _priceNum;
    double _skuId;
    NSString *_priceFormat;
}

@property(retain, nonatomic) NSString *priceFormat; // @synthesize priceFormat=_priceFormat;
@property(nonatomic) double skuId; // @synthesize skuId=_skuId;
@property(nonatomic) double priceNum; // @synthesize priceNum=_priceNum;
@property(nonatomic) int sellState; // @synthesize sellState=_sellState;
@property(nonatomic) long long priceTimeLevel; // @synthesize priceTimeLevel=_priceTimeLevel;
@property(retain, nonatomic) NSString *priceInfo; // @synthesize priceInfo=_priceInfo;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) long long priceId; // @synthesize priceId=_priceId;
@property(retain, nonatomic) NSString *sellStateName; // @synthesize sellStateName=_sellStateName;
@property(retain, nonatomic) NSString *priceTypeName; // @synthesize priceTypeName=_priceTypeName;
@property(nonatomic) long long ticketId; // @synthesize ticketId=_ticketId;
@property(nonatomic) int presaleSwitch; // @synthesize presaleSwitch=_presaleSwitch;
@property(nonatomic) int priceType; // @synthesize priceType=_priceType;
@property(nonatomic) long long agentId; // @synthesize agentId=_agentId;
@property(nonatomic) long long ticketTime; // @synthesize ticketTime=_ticketTime;
@property(nonatomic) int yn; // @synthesize yn=_yn;
- (void).cxx_destruct;
- (void)dealloc;
- (id)formatPrice;
- (void)setDataWithDic:(id)arg1;

@end

