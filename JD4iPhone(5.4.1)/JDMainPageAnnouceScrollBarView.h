//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDMainPageAnnouceUnitView, NSTimer;

@interface JDMainPageAnnouceScrollBarView : UIView
{
    NSTimer *_scrollTimer;
    unsigned long long _totalViewsNum;
    unsigned long long _currentNum;
    _Bool _isFirstView;
    _Bool _isInShow;
    id <JDMainPageAnnouceScrollBarViewDelegate> _delegate;
    JDMainPageAnnouceUnitView *_firstUnitView;
    JDMainPageAnnouceUnitView *_secondUnitView;
}

@property(retain, nonatomic) JDMainPageAnnouceUnitView *secondUnitView; // @synthesize secondUnitView=_secondUnitView;
@property(retain, nonatomic) JDMainPageAnnouceUnitView *firstUnitView; // @synthesize firstUnitView=_firstUnitView;
@property(nonatomic) _Bool isInShow; // @synthesize isInShow=_isInShow;
@property(nonatomic) __weak id <JDMainPageAnnouceScrollBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAnimation;
- (void)buttonPressed:(id)arg1;
- (void)becomeFirstView;
- (void)becomeSecondView;
- (void)resetToFirstView;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)scrollTimerFired:(id)arg1;
- (void)stopScroll;
- (void)startScroll;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

