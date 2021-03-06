//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDMainPageCell.h"

@class JDMainPageCountdownExtFloorModel, JDMainPageCountdownExtModel, JDMainPageCountdownExtTimerView, JDMainPageImageView, JDMainPageWeakTimer, JDSHXViewUtil, NSDate, UILabel;

@interface JDMainPageCountdownExtCell : JDMainPageCell
{
    _Bool _isInMainPage;
    JDMainPageImageView *_picImageView;
    JDMainPageCountdownExtTimerView *_timerView;
    UILabel *_titleLabel;
    JDMainPageWeakTimer *_timer;
    long long _timeRemain;
    NSDate *_leaveTime;
    JDMainPageCountdownExtFloorModel *_floorModel;
    JDMainPageCountdownExtModel *_detailModel;
    long long _timePast;
    long long _preloadXViewTime;
    JDSHXViewUtil *_xViewUtil;
    long long _xViewEnableRemianTime;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long xViewEnableRemianTime; // @synthesize xViewEnableRemianTime=_xViewEnableRemianTime;
@property(retain, nonatomic) JDSHXViewUtil *xViewUtil; // @synthesize xViewUtil=_xViewUtil;
@property(nonatomic) long long preloadXViewTime; // @synthesize preloadXViewTime=_preloadXViewTime;
@property(nonatomic) long long timePast; // @synthesize timePast=_timePast;
@property(retain, nonatomic) JDMainPageCountdownExtModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) JDMainPageCountdownExtFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) NSDate *leaveTime; // @synthesize leaveTime=_leaveTime;
@property(nonatomic) _Bool isInMainPage; // @synthesize isInMainPage=_isInMainPage;
@property(nonatomic) long long timeRemain; // @synthesize timeRemain=_timeRemain;
@property(retain, nonatomic) JDMainPageWeakTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDMainPageCountdownExtTimerView *timerView; // @synthesize timerView=_timerView;
@property(retain, nonatomic) JDMainPageImageView *picImageView; // @synthesize picImageView=_picImageView;
- (void).cxx_destruct;
- (void)mtaModel:(id)arg1 appendStr:(id)arg2 isJump:(_Bool)arg3;
- (void)resetData;
- (void)setNextActivityTimer;
- (void)preloadXView:(id)arg1;
- (void)preloadXView;
- (void)resetDetailModel;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)leaveMainPage;
- (void)backMainPage;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)timerRun;
- (void)imgPressedJump;
- (void)afterCountdownStyle;
- (void)inCountdownStyle;
- (void)dealloc;
- (void)updateContent;
- (void)fillData:(id)arg1;
- (void)setupUI;

@end

