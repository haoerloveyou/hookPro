//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "LVProtocal-Protocol.h"

@class LView, NSString;

@interface UIScrollView (UIScrollViewLuaView) <LVProtocal>
- (void)lv_refreshFooterToLoadMore;
- (void)lv_refreshHeaderToRefresh;
- (void)lv_resetNoMoreData;
- (void)lv_noticeNoMoreData;
- (void)lv_hiddenRefreshFooter:(_Bool)arg1;
- (void)lv_initRefreshFooter;
- (_Bool)lv_isRefreshing;
- (void)lv_endRefreshing;
- (void)lv_beginRefreshing;
- (void)lv_hiddenRefreshHeader:(_Bool)arg1;
- (void)lv_initRefreshHeader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak LView *lv_lview;
@property(nonatomic) struct _LVUserDataInfo *lv_userData;
@property(readonly) Class superclass;
@end
