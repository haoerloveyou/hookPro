//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIScrollView, UIView;

@interface JDRankContentView : JDView <UIScrollViewDelegate>
{
    _Bool _isLeftScroll;
    _Bool _isRootScroll;
    UIView *_blackView;
    id <JDRankContentViewDelegate> _slideSwitchViewDelegate;
    long long _selectIndex;
    UIView *_selectTabV;
    UIScrollView *_rootScrollView;
    double _userContentOffsetX;
    long long _userSelectedChannelID;
    long long _scrollViewSelectedChannelID;
    NSMutableArray *_viewArray;
}

@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(nonatomic) long long scrollViewSelectedChannelID; // @synthesize scrollViewSelectedChannelID=_scrollViewSelectedChannelID;
@property(nonatomic) long long userSelectedChannelID; // @synthesize userSelectedChannelID=_userSelectedChannelID;
@property(nonatomic) double userContentOffsetX; // @synthesize userContentOffsetX=_userContentOffsetX;
@property(retain, nonatomic) UIScrollView *rootScrollView; // @synthesize rootScrollView=_rootScrollView;
@property(nonatomic) _Bool isRootScroll; // @synthesize isRootScroll=_isRootScroll;
@property(nonatomic) _Bool isLeftScroll; // @synthesize isLeftScroll=_isLeftScroll;
@property(retain, nonatomic) UIView *selectTabV; // @synthesize selectTabV=_selectTabV;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) id <JDRankContentViewDelegate> slideSwitchViewDelegate; // @synthesize slideSwitchViewDelegate=_slideSwitchViewDelegate;
@property(retain, nonatomic) UIView *blackView; // @synthesize blackView=_blackView;
- (void).cxx_destruct;
- (void)scrollHandlePan:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadDataByModel:(id)arg1 modelCateId:(id)arg2;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
