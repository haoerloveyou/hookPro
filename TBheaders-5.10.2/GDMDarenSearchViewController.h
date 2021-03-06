//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GDMDarenSearchAccountRequest, NSMutableArray, NSString, UITableView, UIView;

@interface GDMDarenSearchViewController : GDMViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_contentTableView;	// 16 = 0x10
    UIView *_headView;	// 24 = 0x18
    GDMDarenSearchAccountRequest *_accoundSearch;	// 32 = 0x20
    NSMutableArray *_feedItemList;	// 40 = 0x28
    _Bool _isJumpUseSelf;	// 48 = 0x30
    NSString *_searchKeyWord;	// 56 = 0x38
}

- (void).cxx_destruct;
- (void)onSearchBarCallBack:(id)arg1;
- (void)onAccoundCellCallBack:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)utPageName;
- (void)onReloadErrorCallBack;
- (void)searchFeedRequest;
- (void)searchAcccoundRequest;
- (void)onLoadMoreFresh;
- (void)configTableviewFresh;
- (void)addAccoundToHeadView;
- (void)addCellView:(id)arg1 toAcoundView:(id)arg2;
- (id)accoundCellViewByInfoWighTag:(int)arg1;
- (id)buildHeadView;
- (id)initWithSearchKeyWord:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

