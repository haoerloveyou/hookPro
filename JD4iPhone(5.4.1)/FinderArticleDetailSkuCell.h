//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class JDImageView, UILabel, UIView;

@interface FinderArticleDetailSkuCell : JDFinderTableViewCell
{
    UIView *_backView;
    JDImageView *_skuImageView;
    UILabel *_skuNameLabel;
    UILabel *_skuPriceLabel;
    UILabel *_skuBuyLabel;
}

@property(retain, nonatomic) UILabel *skuBuyLabel; // @synthesize skuBuyLabel=_skuBuyLabel;
@property(retain, nonatomic) UILabel *skuPriceLabel; // @synthesize skuPriceLabel=_skuPriceLabel;
@property(retain, nonatomic) UILabel *skuNameLabel; // @synthesize skuNameLabel=_skuNameLabel;
@property(retain, nonatomic) JDImageView *skuImageView; // @synthesize skuImageView=_skuImageView;
- (void).cxx_destruct;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end
