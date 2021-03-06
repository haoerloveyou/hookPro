//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDBirthdayFriendHandlerDelegate.h"
#import "MDSearchControllerDelegate.h"

@class MBProgressHUD, MDBirthdayFriendHandler, MDSearchController, MomoTapView, NSString, UITableView, UIView;

@interface MDBirthdayFriendsController : MDViewController <MDBirthdayFriendHandlerDelegate, MDSearchControllerDelegate>
{
    _Bool _presented;
    _Bool _showSelf;
    _Bool _showFollow;
    MDBirthdayFriendHandler *_friendHandler;
    CDUnknownBlockType _completionBlock;
    long long _currentIndex;
    NSString *_alertMessage;
    NSString *_alertTitle;
    NSString *_viewTitle;
    MomoTapView *_tapView;
    UITableView *_shareTableView;
    UIView *_backView;
    MBProgressHUD *_hud;
    MDSearchController *_searchController;
}

@property(retain, nonatomic) MDSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UITableView *shareTableView; // @synthesize shareTableView=_shareTableView;
@property(retain, nonatomic) MomoTapView *tapView; // @synthesize tapView=_tapView;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(retain, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(nonatomic) _Bool showFollow; // @synthesize showFollow=_showFollow;
@property(nonatomic) _Bool showSelf; // @synthesize showSelf=_showSelf;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool presented; // @synthesize presented=_presented;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MDBirthdayFriendHandler *friendHandler; // @synthesize friendHandler=_friendHandler;
- (void).cxx_destruct;
- (void)enableSubViewEndSearch;
- (void)disableSubViewBeginSearch;
- (void)refreshData;
- (void)addRefreshHeader;
- (void)didSelectFriendList:(id)arg1;
- (void)refreshSubViews;
- (void)_returnBack;
- (void)didClickBack:(id)arg1;
- (void)removeHud;
- (void)showHud;
- (void)addTableView;
- (void)addBackView;
- (void)configureNavBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 withSegmentIndex:(long long)arg2 showSelf:(_Bool)arg3 alertMessage:(id)arg4;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 withSegmentIndex:(long long)arg2 showSelf:(_Bool)arg3;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 withSegmentIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

