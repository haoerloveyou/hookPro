//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBLongPressButton, TBLongPressView, TBSearchWapItem, TBXSearchService;

@interface TBXSearchItemCellLongPressManager : NSObject
{
    int _style;	// 8 = 0x8
    TBLongPressView *_longpressView;	// 16 = 0x10
    TBLongPressButton *_sameBtn;	// 24 = 0x18
    TBLongPressButton *_similarBtn;	// 32 = 0x20
    TBLongPressButton *_collectionBtn;	// 40 = 0x28
    TBSearchWapItem *_item;	// 48 = 0x30
    TBXSearchService *_xSearchService;	// 56 = 0x38
    id _delegate;	// 64 = 0x40
}

+ (id)getSimilarURLItem:(id)arg1 Style:(int)arg2;
+ (_Bool)gotoSimilar:(id)arg1 Service:(id)arg2 FromView:(id)arg3 Style:(int)arg4;
+ (_Bool)gotoSame:(id)arg1 Service:(id)arg2 FromView:(id)arg3;
+ (_Bool)hasSimilar:(id)arg1;
+ (_Bool)hasSame:(id)arg1;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak TBXSearchService *xSearchService; // @synthesize xSearchService=_xSearchService;
@property(retain, nonatomic) TBSearchWapItem *item; // @synthesize item=_item;
@property(retain, nonatomic) TBLongPressButton *collectionBtn; // @synthesize collectionBtn=_collectionBtn;
@property(retain, nonatomic) TBLongPressButton *similarBtn; // @synthesize similarBtn=_similarBtn;
@property(retain, nonatomic) TBLongPressButton *sameBtn; // @synthesize sameBtn=_sameBtn;
@property(retain, nonatomic) TBLongPressView *longpressView; // @synthesize longpressView=_longpressView;
- (void).cxx_destruct;
- (_Bool)hasCollected;
- (void)setCollectionSucess;
- (void)pressCollectionButton:(id)arg1;
- (void)showWithAnimation:(int)arg1;
- (void)configWithItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

