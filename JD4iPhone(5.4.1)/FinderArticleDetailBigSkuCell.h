//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class FinderArticleSkuPicWithPriceView;

@interface FinderArticleDetailBigSkuCell : JDFinderTableViewCell
{
    CDUnknownBlockType _clickSkuView;
    FinderArticleSkuPicWithPriceView *_skuView;
}

@property(retain, nonatomic) FinderArticleSkuPicWithPriceView *skuView; // @synthesize skuView=_skuView;
@property(copy, nonatomic) CDUnknownBlockType clickSkuView; // @synthesize clickSkuView=_clickSkuView;
- (void).cxx_destruct;
- (void)tapBigSku:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end
