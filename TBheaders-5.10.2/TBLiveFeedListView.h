//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBLiveFeedFollowCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBLiveFeedEmptyView, TBLiveMenuResultModel, UITableView;
@protocol TBLiveFeedListViewDelegate;

@interface TBLiveFeedListView : UIView <UITableViewDataSource, UITableViewDelegate, TBLiveFeedFollowCellDelegate>
{
    id <TBLiveFeedListViewDelegate> _delegate;	// 8 = 0x8
    UITableView *_feedTableView;	// 16 = 0x10
    NSString *_lastFeedTime;	// 24 = 0x18
    NSMutableArray *_dataSource;	// 32 = 0x20
    long long _currentPageNum;	// 40 = 0x28
    TBLiveMenuResultModel *_menuModel;	// 48 = 0x30
    TBLiveFeedEmptyView *_emptyView;	// 56 = 0x38
    double _appointmentCellHeight;	// 64 = 0x40
}

@property(nonatomic) double appointmentCellHeight; // @synthesize appointmentCellHeight=_appointmentCellHeight;
@property(retain, nonatomic) TBLiveFeedEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBLiveMenuResultModel *menuModel; // @synthesize menuModel=_menuModel;
@property(nonatomic) long long currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *lastFeedTime; // @synthesize lastFeedTime=_lastFeedTime;
@property(retain, nonatomic) UITableView *feedTableView; // @synthesize feedTableView=_feedTableView;
@property(nonatomic) __weak id <TBLiveFeedListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didLikeList;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toggleRefresh;
- (void)requestFeedWithModel:(id)arg1;
- (void)showEmptyView;
- (void)configScrollsToTop:(_Bool)arg1;
- (void)requestFeedWithModel:(id)arg1 pageNum:(long long)arg2 isPullMode:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
