//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WanderShopBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDStoreNetwork, NSString, UIButton, WanderShopCircleModel, WanderShopCircleSelectorRecommendTipView;

@interface WanderShopCircleSelectorViewController : WanderShopBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    WanderShopCircleSelectorRecommendTipView *_tipView;
    _Bool _isFirstLoaded;
    _Bool _isDataLoading;
    CDUnknownBlockType _submitCircle;
    WanderShopCircleModel *_selectedModel;
    long long _rowsCount;
    JDStoreNetwork *_myCircleDao;
    JDStoreNetwork *_recommendCircleDao;
    JDStoreNetwork *_joinDao;
    UIButton *_submitButton;
    UIButton *_cancelButton;
}

@property(nonatomic) _Bool isDataLoading; // @synthesize isDataLoading=_isDataLoading;
@property(nonatomic) _Bool isFirstLoaded; // @synthesize isFirstLoaded=_isFirstLoaded;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) JDStoreNetwork *joinDao; // @synthesize joinDao=_joinDao;
@property(retain, nonatomic) JDStoreNetwork *recommendCircleDao; // @synthesize recommendCircleDao=_recommendCircleDao;
@property(retain, nonatomic) JDStoreNetwork *myCircleDao; // @synthesize myCircleDao=_myCircleDao;
@property(nonatomic) long long rowsCount; // @synthesize rowsCount=_rowsCount;
@property(retain, nonatomic) WanderShopCircleModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(copy, nonatomic) CDUnknownBlockType submitCircle; // @synthesize submitCircle=_submitCircle;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)getCircleCount:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getCellData:(id)arg1 CircleType:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadMoreData;
- (void)reloadData;
- (void)reconnect;
- (void)removeReloadView;
- (void)showLoadErrorView;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)changeModelStatus:(id)arg1;
- (void)refreshTableView;
- (void)refreshData;
- (void)cancelButtonTap;
- (void)enterButtonTap;
- (void)setNavItemButton;
- (void)createBackTopButton;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

