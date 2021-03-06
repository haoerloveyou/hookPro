//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MDFeedBackHeaderViewDelegate.h"
#import "MDFeedMomentViewDelegate.h"
#import "MDFeedReleaseGuideViewDelegate.h"

@class MDFeedBackHeaderView, MDFeedHeaderViewModel, MDFeedMomentView, MDFeedReleaseGuideView, MUAlertBar, NSString;

@interface MDFeedHeaderController : UIView <MDFeedBackHeaderViewDelegate, MDFeedReleaseGuideViewDelegate, MDFeedMomentViewDelegate>
{
    _Bool _feedQucikViewShowing;
    _Bool _isFailBarAnimationShowed;
    id <MDFeedHeaderControllerDelegate> _delegate;
    long long _viewType;
    MDFeedBackHeaderView *_feedBackView;
    MDFeedReleaseGuideView *_releaseGuideView;
    MDFeedMomentView *_feedMomentView;
    NSString *_targetId;
    MDFeedHeaderViewModel *_headerModel;
    UIView *_failBarView;
    MUAlertBar *_momentFailBar;
}

@property(nonatomic) _Bool isFailBarAnimationShowed; // @synthesize isFailBarAnimationShowed=_isFailBarAnimationShowed;
@property(retain, nonatomic) MUAlertBar *momentFailBar; // @synthesize momentFailBar=_momentFailBar;
@property(retain, nonatomic) UIView *failBarView; // @synthesize failBarView=_failBarView;
@property(nonatomic) _Bool feedQucikViewShowing; // @synthesize feedQucikViewShowing=_feedQucikViewShowing;
@property(retain, nonatomic) MDFeedHeaderViewModel *headerModel; // @synthesize headerModel=_headerModel;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) MDFeedMomentView *feedMomentView; // @synthesize feedMomentView=_feedMomentView;
@property(retain, nonatomic) MDFeedReleaseGuideView *releaseGuideView; // @synthesize releaseGuideView=_releaseGuideView;
@property(retain, nonatomic) MDFeedBackHeaderView *feedBackView; // @synthesize feedBackView=_feedBackView;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) __weak id <MDFeedHeaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)momentViewWillChangeHeight:(double)arg1;
- (void)animationTransImageViewInTableView:(id)arg1 IndexPath:(id)arg2;
- (void)momentViewWillGotoWatcherList:(id)arg1;
- (void)momentViewWillGotoMyMoment:(id)arg1;
- (void)clickReleaseGuideButtonWithPreloadImage:(id)arg1;
- (void)clickReleaseGuideLabel;
- (void)feedQuickViewShowing:(_Bool)arg1;
- (void)feedHeaderViewHeightChange:(double)arg1;
- (void)updateFeedHeaderHeight;
- (void)clickBackImageAction;
- (void)clickHeadAvatarAction;
- (void)doFollowAction:(id)arg1;
- (void)doChatAction:(id)arg1;
- (void)friendMomentCollectionScrollToTop;
- (void)animationSuperView:(id)arg1 transImageViewInTableView:(id)arg2 IndexPath:(id)arg3;
- (id)containerViewForTranslation;
- (void)gotoMyMoment;
- (void)animationMomentFailedViewShow;
- (void)showMomentFailedView;
- (_Bool)checkShowMomentFailureInfo;
- (void)removeFeedReleasePhotoGuide;
- (void)shouldShowFeedReleasePhotoGuide;
- (void)updateFeedBackViewWithTargetId:(id)arg1;
- (void)updateFriendFeedMomentView;
- (void)updateFeedHeaderView:(id)arg1 viewModel:(id)arg2;
- (void)setupContentView;
- (id)initWithViewType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

