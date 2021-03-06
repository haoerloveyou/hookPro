//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DataServiceDelegate-Protocol.h"
#import "TBDebugToolPanelAbtestViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UILabel, UITableView;

@interface TBDebugToolPanelAbtestView : UIView <DataServiceDelegate, UITableViewDataSource, UITableViewDelegate, TBDebugToolPanelAbtestViewDelegate>
{
    _Bool _isShowTestsView;	// 8 = 0x8
    int _currentViewStyle;	// 12 = 0xc
    NSMutableArray *_abtestData;	// 16 = 0x10
    NSArray *_groupsData;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    UIView *_testsContainerView;	// 40 = 0x28
    UIView *_groupsViewContainerView;	// 48 = 0x30
    UITableView *_testsTableView;	// 56 = 0x38
    UITableView *_groupsTableView;	// 64 = 0x40
    UIButton *_reloadBtn;	// 72 = 0x48
    UIButton *_resetBtn;	// 80 = 0x50
    UIButton *_confirmBtn;	// 88 = 0x58
    NSString *_selectedGroup;	// 96 = 0x60
    UILabel *_testsTitleLabel;	// 104 = 0x68
    UIActivityIndicatorView *_loadingView;	// 112 = 0x70
    UIButton *_failureBtn;	// 120 = 0x78
    id _abtestEngine;	// 128 = 0x80
}

@property(retain, nonatomic) id abtestEngine; // @synthesize abtestEngine=_abtestEngine;
@property(retain, nonatomic) UIButton *failureBtn; // @synthesize failureBtn=_failureBtn;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isShowTestsView; // @synthesize isShowTestsView=_isShowTestsView;
@property(retain, nonatomic) UILabel *testsTitleLabel; // @synthesize testsTitleLabel=_testsTitleLabel;
@property(retain, nonatomic) NSString *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(nonatomic) int currentViewStyle; // @synthesize currentViewStyle=_currentViewStyle;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *resetBtn; // @synthesize resetBtn=_resetBtn;
@property(retain, nonatomic) UIButton *reloadBtn; // @synthesize reloadBtn=_reloadBtn;
@property(retain, nonatomic) UITableView *groupsTableView; // @synthesize groupsTableView=_groupsTableView;
@property(retain, nonatomic) UITableView *testsTableView; // @synthesize testsTableView=_testsTableView;
@property(retain, nonatomic) UIView *groupsViewContainerView; // @synthesize groupsViewContainerView=_groupsViewContainerView;
@property(retain, nonatomic) UIView *testsContainerView; // @synthesize testsContainerView=_testsContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *groupsData; // @synthesize groupsData=_groupsData;
@property(retain, nonatomic) NSMutableArray *abtestData; // @synthesize abtestData=_abtestData;
- (void).cxx_destruct;
- (void)showTestsView;
- (void)showGroupsView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)hideAlog;
- (void)onBackClick:(id)arg1;
- (void)onConfirmClick:(id)arg1;
- (void)onReloadClick:(id)arg1;
- (void)onResetClick:(id)arg1;
- (void)expandBtnClickWithCell:(id)arg1 showBucketsButton:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configAbtestDataViewbyData:(id)arg1;
- (void)configGroupViewByData:(id)arg1;
- (void)failLoad;
- (void)didFinishLoad;
- (void)startLoad;
- (void)doRequest;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

