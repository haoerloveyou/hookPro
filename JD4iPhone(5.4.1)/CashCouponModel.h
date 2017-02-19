//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString, getGiftCardModel, usedElecCouponsModel;

@interface CashCouponModel : JDModel
{
    _Bool _eCardAvailable;
    NSNumber *_currentDate;
    long long _expireDay;
    long long _maxSelectNum;
    usedElecCouponsModel *_coupons;
    getGiftCardModel *_cards;
    NSString *_NotifyMessage;
    NSNumber *_cantUseCouponsNum;
    NSString *_cantUseCouponsMsg;
}

@property(copy, nonatomic) NSString *cantUseCouponsMsg; // @synthesize cantUseCouponsMsg=_cantUseCouponsMsg;
@property(copy, nonatomic) NSNumber *cantUseCouponsNum; // @synthesize cantUseCouponsNum=_cantUseCouponsNum;
@property(copy, nonatomic) NSString *NotifyMessage; // @synthesize NotifyMessage=_NotifyMessage;
@property(retain, nonatomic) getGiftCardModel *cards; // @synthesize cards=_cards;
@property(retain, nonatomic) usedElecCouponsModel *coupons; // @synthesize coupons=_coupons;
@property(nonatomic) long long maxSelectNum; // @synthesize maxSelectNum=_maxSelectNum;
@property(nonatomic) long long expireDay; // @synthesize expireDay=_expireDay;
@property(nonatomic) _Bool eCardAvailable; // @synthesize eCardAvailable=_eCardAvailable;
@property(retain, nonatomic) NSNumber *currentDate; // @synthesize currentDate=_currentDate;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
