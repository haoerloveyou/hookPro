//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IEnterpriseBrandContactMgrExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class CContact, MMScrollView, MMTableView, MMUIAlertView, NSArray, NSString, UIAlertController;
@protocol EnterpriseBrandContactSelectViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EnterpriseBrandContactSelectViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, contactInfoDelegate, IEnterpriseBrandContactMgrExt>
{
    CContact *_mainBrandContact;
    NSArray *_arySubContact;
    CContact *_selectedContact;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
    MMUIAlertView *_selectAlertView;
    UIAlertController *_selectAlertController;
    unsigned int _scene;
    id <EnterpriseBrandContactSelectViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <EnterpriseBrandContactSelectViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)cancelSelect:(id)arg1;
- (void)confirmToSend;
- (void)openSubBrandInfo:(id)arg1;
- (void)selectContact:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (void)onEnterpriseBrandContactChanged:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)updateEmptyView;
- (void)initEmptyView;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (id)initWithMainContact:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

