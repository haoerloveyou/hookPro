//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBSDKServerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TBMemoryCache, UIButton, UIImageView, UITableView, huoyanHistoryService;

@interface TBHuoyanHistoryVC : UIViewController <UIActionSheetDelegate, TBSDKServerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    TBMemoryCache *memoryCache;	// 8 = 0x8
    UIButton *_clearBtn;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    UIImageView *_emptyImageView;	// 32 = 0x20
    huoyanHistoryService *_historyService;	// 40 = 0x28
}

@property(retain, nonatomic) huoyanHistoryService *historyService; // @synthesize historyService=_historyService;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (id)replaceCRLF:(id)arg1;
- (void)didFind:(id)arg1;
- (void)didSelectBarcode:(id)arg1;
- (void)historyClickUserTrack:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)backPanGestureRecoginzed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkEmpty;
- (void)viewDidLoad;
- (void)clearHistory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

