//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate.h"
#import "SHVPDanmuSDKDelegate.h"
#import "SHVPLivingPlayerDelegate.h"

@class JDImageView, NSDate, NSMutableArray, NSString, NSTimer, SHVPAbnormalMATModel, SHVPCustomActivityView, SHVPDataProvider, SHVPLikedAnimationController, SHVPMainPageAddCommentView, SHVPMainPageAnchorInfoView, SHVPMainPageBrandInfoView, SHVPMainPageButtonView, SHVPMainPageCommentTableViewDelegate, SHVPMainPageHorizontalViewController, SHVPMainPageReminderView, SHVPMainPageReplayBar, SHVPMainPageSkuView, SHVPMainPageTouchScreen, SHVPMainPageViewerHeaderView, SHVPReloadNetView, UIButton, UIImageView, UILabel, UIScrollView, UITableView, UIView;

@interface SHVPMainPageViewController : JDViewController <SHVPDanmuSDKDelegate, SHVPLivingPlayerDelegate, JDBaseToastViewDelegate>
{
    double _startContentOffsetX;
    double _willEndContentOffsetX;
    double _endContentOffsetX;
    _Bool _isShowAuthorInfoView;
    _Bool _isShowSkuView;
    _Bool _hasGetedLikeCount;
    _Bool _authorIsInReset;
    _Bool _isLECReturnStatus;
    _Bool _hasStartedHiddenTouchScreen;
    _Bool _isSWindowClosed;
    _Bool _isSelfViewShow;
    _Bool _hasToast;
    NSString *_roomId;
    NSString *_authorId;
    NSString *_position;
    unsigned long long _orientation;
    long long _playStatus;
    SHVPDataProvider *_dataProvider;
    SHVPCustomActivityView *_activityIndicatorView;
    UIImageView *_bgView;
    SHVPMainPageReminderView *_reminderView;
    UIView *_mainView;
    NSString *_playerURLString;
    UILabel *_viewerCountLabel;
    SHVPMainPageViewerHeaderView *_viewerHeaderView;
    SHVPMainPageButtonView *_likeButton;
    SHVPMainPageButtonView *_cartListButton;
    double _animationViewTop;
    SHVPLikedAnimationController *_animationView;
    SHVPMainPageAnchorInfoView *_anchorInfoView;
    SHVPMainPageBrandInfoView *_brandInfoView;
    SHVPMainPageSkuView *_skuView;
    SHVPMainPageAddCommentView *_addCommentView;
    UITableView *_danmuTableview;
    SHVPMainPageCommentTableViewDelegate *_danmuTableviewDelegate;
    NSMutableArray *_toShowProductViewArr;
    SHVPMainPageReplayBar *_replayBar;
    SHVPAbnormalMATModel *_abnormalBroadCastMatModel;
    SHVPAbnormalMATModel *_abnormalStuckMatModel;
    NSMutableArray *_stuckTimeArray;
    SHVPReloadNetView *_reloadNetView;
    SHVPMainPageTouchScreen *_touchScreen;
    JDImageView *_floatIcon;
    UIScrollView *_bgScrollView;
    UIButton *_closeBtn;
    UILabel *_iconLabel;
    UILabel *_roomTitle;
    UIView *_topBlackView;
    UIView *_bottomBlackView;
    UIButton *_shareBtn;
    UIImageView *_authorBackImage;
    JDImageView *_authorHeaderImage;
    UILabel *_authorNameLabel;
    UIButton *_commentBtn;
    unsigned long long _originNetworkStatus;
    NSDate *_startDate;
    NSTimer *_reloadTimer;
    SHVPMainPageHorizontalViewController *_horizontalVC;
}

@property(retain, nonatomic) SHVPMainPageHorizontalViewController *horizontalVC; // @synthesize horizontalVC=_horizontalVC;
@property(retain, nonatomic) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long originNetworkStatus; // @synthesize originNetworkStatus=_originNetworkStatus;
@property(nonatomic) _Bool hasToast; // @synthesize hasToast=_hasToast;
@property(nonatomic) _Bool isSelfViewShow; // @synthesize isSelfViewShow=_isSelfViewShow;
@property(nonatomic) _Bool isSWindowClosed; // @synthesize isSWindowClosed=_isSWindowClosed;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *authorHeaderImage; // @synthesize authorHeaderImage=_authorHeaderImage;
@property(retain, nonatomic) UIImageView *authorBackImage; // @synthesize authorBackImage=_authorBackImage;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIView *bottomBlackView; // @synthesize bottomBlackView=_bottomBlackView;
@property(retain, nonatomic) UIView *topBlackView; // @synthesize topBlackView=_topBlackView;
@property(retain, nonatomic) UILabel *roomTitle; // @synthesize roomTitle=_roomTitle;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(nonatomic) _Bool hasStartedHiddenTouchScreen; // @synthesize hasStartedHiddenTouchScreen=_hasStartedHiddenTouchScreen;
@property(retain, nonatomic) JDImageView *floatIcon; // @synthesize floatIcon=_floatIcon;
@property(retain, nonatomic) SHVPMainPageTouchScreen *touchScreen; // @synthesize touchScreen=_touchScreen;
@property(nonatomic) _Bool isLECReturnStatus; // @synthesize isLECReturnStatus=_isLECReturnStatus;
@property(nonatomic) _Bool authorIsInReset; // @synthesize authorIsInReset=_authorIsInReset;
@property(retain, nonatomic) SHVPReloadNetView *reloadNetView; // @synthesize reloadNetView=_reloadNetView;
@property(retain, nonatomic) NSMutableArray *stuckTimeArray; // @synthesize stuckTimeArray=_stuckTimeArray;
@property(retain, nonatomic) SHVPAbnormalMATModel *abnormalStuckMatModel; // @synthesize abnormalStuckMatModel=_abnormalStuckMatModel;
@property(retain, nonatomic) SHVPAbnormalMATModel *abnormalBroadCastMatModel; // @synthesize abnormalBroadCastMatModel=_abnormalBroadCastMatModel;
@property(retain, nonatomic) SHVPMainPageReplayBar *replayBar; // @synthesize replayBar=_replayBar;
@property(nonatomic) _Bool hasGetedLikeCount; // @synthesize hasGetedLikeCount=_hasGetedLikeCount;
@property(copy, nonatomic) NSMutableArray *toShowProductViewArr; // @synthesize toShowProductViewArr=_toShowProductViewArr;
@property(retain, nonatomic) SHVPMainPageCommentTableViewDelegate *danmuTableviewDelegate; // @synthesize danmuTableviewDelegate=_danmuTableviewDelegate;
@property(retain, nonatomic) UITableView *danmuTableview; // @synthesize danmuTableview=_danmuTableview;
@property(retain, nonatomic) SHVPMainPageAddCommentView *addCommentView; // @synthesize addCommentView=_addCommentView;
@property(nonatomic) _Bool isShowSkuView; // @synthesize isShowSkuView=_isShowSkuView;
@property(nonatomic) _Bool isShowAuthorInfoView; // @synthesize isShowAuthorInfoView=_isShowAuthorInfoView;
@property(retain, nonatomic) SHVPMainPageSkuView *skuView; // @synthesize skuView=_skuView;
@property(retain, nonatomic) SHVPMainPageBrandInfoView *brandInfoView; // @synthesize brandInfoView=_brandInfoView;
@property(retain, nonatomic) SHVPMainPageAnchorInfoView *anchorInfoView; // @synthesize anchorInfoView=_anchorInfoView;
@property(retain, nonatomic) SHVPLikedAnimationController *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) double animationViewTop; // @synthesize animationViewTop=_animationViewTop;
@property(retain, nonatomic) SHVPMainPageButtonView *cartListButton; // @synthesize cartListButton=_cartListButton;
@property(retain, nonatomic) SHVPMainPageButtonView *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) SHVPMainPageViewerHeaderView *viewerHeaderView; // @synthesize viewerHeaderView=_viewerHeaderView;
@property(retain, nonatomic) UILabel *viewerCountLabel; // @synthesize viewerCountLabel=_viewerCountLabel;
@property(copy, nonatomic) NSString *playerURLString; // @synthesize playerURLString=_playerURLString;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) SHVPMainPageReminderView *reminderView; // @synthesize reminderView=_reminderView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SHVPCustomActivityView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SHVPDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)insertVideoView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)willPushNewVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getNetType;
- (void)feedFirstPlayDelayTimes;
- (void)startSetMonitorDate;
- (void)startMonitor;
- (void)removeDataError;
- (void)toastDataError:(unsigned long long)arg1;
- (void)abnormalBroadMATDataUploadWithAbnormalModel:(id)arg1;
- (void)tapFloatIcon;
- (void)SWindowClosed:(id)arg1;
- (void)addCartResult:(id)arg1;
- (void)toastNoWIFI;
- (_Bool)isNoWifi;
- (void)reachabilityChanged:(id)arg1;
- (void)unrigisterDanmu;
- (void)stopDanmu;
- (void)startDanmu;
- (void)initDanmu;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)startComment;
- (void)tapAuthor;
- (void)share:(id)arg1;
- (void)buryQuitRoom;
- (void)unrigisterSelfUnits:(id)arg1;
- (void)closeRoom;
- (void)setUpSelfViewSubviews;
- (_Bool)hideSHVPSWindow;
- (void)invalidReloadTimer;
- (void)startReloadTableView;
- (void)creatReloadTimer;
- (void)avoidScroll;
- (void)drawFloatIcon;
- (void)setUpAuthorBack;
- (void)setUpReplayView;
- (void)setUpOnGoingView;
- (void)getPlayStatus;
- (void)startSetUp;
- (_Bool)prefersStatusBarHidden;
- (void)removeDuplicateSHVPRoom;
- (void)willPopViewController;
- (void)horizontalAction;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)startFetchRoomData;
- (void)viewDidLoad;
- (void)unrigister;
- (void)dealloc;
- (id)initWithParam:(id)arg1;
- (void)cartButtonShake;
- (void)productGoBottom:(id)arg1;
- (void)bringProductToFront:(id)arg1;
- (void)hostAddProductToCart;
- (void)reloadTableview;
- (void)sdk:(id)arg1 liveBroadCastEndAtTime:(double)arg2;
- (void)sdk:(id)arg1 ProductList:(id)arg2;
- (void)sdk:(id)arg1 AnchorResumeLiveWithNickName:(id)arg2;
- (void)sdk:(id)arg1 AnchorSuspendLiveWithNickName:(id)arg2;
- (void)sdk:(id)arg1 ShopcartMessage:(id)arg2 Nickname:(id)arg3;
- (void)sdk:(id)arg1 AnchorMessage:(id)arg2 Nickname:(id)arg3;
- (void)sdk:(id)arg1 UserMessage:(id)arg2 Nickname:(id)arg3;
- (void)sdk:(id)arg1 HeadPicArray:(id)arg2;
- (void)sdk:(id)arg1 TotalCartNum:(int)arg2;
- (void)sdk:(id)arg1 TotalThumbUpNum:(int)arg2;
- (void)sdk:(id)arg1 TotalViewerNum:(int)arg2;
- (void)sdk:(id)arg1 LeaveLiveBroadcastWithNickName:(id)arg2;
- (void)sdk:(id)arg1 JoinLiveBroadcastWithNickName:(id)arg2;
- (void)sdk:(id)arg1 ClosedWithAddress:(id)arg2 Error:(id)arg3 Retrying:(_Bool)arg4;
- (void)innerShowAuthorInfoView;
- (void)innerSetAuthorData;
- (void)showAuthorInfoError;
- (void)showAuthorInfoView;
- (void)fetchAuthorInfo;
- (void)fetchRoomData;
- (void)BuryData:(id)arg1;
- (void)backToRoom;
- (void)touchToSmallView;
- (void)buryData:(id)arg1;
- (void)goToJump:(id)arg1;
- (void)setBaseModelTapBlock:(id)arg1;
- (void)innerShowCartInfoView;
- (void)innerSetCartData;
- (_Bool)cartHasData;
- (void)showCartInfoError;
- (void)showNoDataTips;
- (void)showCartInfoView;
- (void)fetchCartInfo;
- (void)LECStatusReturned;
- (void)performOutTimeTips;
- (void)get15SecondsCountDown;
- (void)addStuckTimeToArray;
- (void)SHVPLivingPlayer:(id)arg1 contentTypeChanged:(int)arg2;
- (void)SHVPLivingPlayer:(id)arg1 position:(long long)arg2 cacheDuration:(long long)arg3 duration:(long long)arg4;
- (void)SHVPLivingPlayer:(id)arg1 playerEvent:(int)arg2;
- (void)startHiddenScreen;
- (void)stop;
- (void)play;
- (void)setUpPlayerParameter;
- (void)initPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

