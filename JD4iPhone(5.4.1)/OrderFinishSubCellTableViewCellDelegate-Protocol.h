//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OrderFinishSubCellTableViewCell, childOrderVoListItemModel;

@protocol OrderFinishSubCellTableViewCellDelegate <NSObject>
- (void)orderListButtonClickedOption:(OrderFinishSubCellTableViewCell *)arg1 model:(childOrderVoListItemModel *)arg2;
- (void)homePageButtonClickedOption:(OrderFinishSubCellTableViewCell *)arg1 model:(childOrderVoListItemModel *)arg2;
- (void)paymentButtonClickedOption:(OrderFinishSubCellTableViewCell *)arg1 model:(childOrderVoListItemModel *)arg2;
@end
