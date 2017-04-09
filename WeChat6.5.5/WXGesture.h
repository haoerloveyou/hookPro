//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, CALayer, NSString, SnapshotView, UIImage, UIPanGestureRecognizer, UIView, UIViewController;
@protocol WXGestureDelegate;

__attribute__((visibility("hidden")))
@interface WXGesture : MMObject <UIGestureRecognizerDelegate>
{
    id <WXGestureDelegate> _delegate;
    _Bool _isEnable;
    struct {
        unsigned int isGesturePrepared:1;
        unsigned int isTransitioning:2;
        unsigned int isTransitionCanceled:1;
        unsigned int isGestureTransitioning:1;
    } _transitionGestureFlags;
    UIPanGestureRecognizer *internalGesture;
    SnapshotView *bottomView;
    UIView *topView;
    UIView *internalShadowView;
    double startingTranslationValue;
    double animationProgress;
    CADisplayLink *timer;
    UIViewController *curViewController;
    UIImage *fromSnap;
    SnapshotView *fakeNavBar;
    CALayer *depthLayer;
    CDUnknownBlockType _animationCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType animationCompletionBlock; // @synthesize animationCompletionBlock=_animationCompletionBlock;
@property(retain, nonatomic) CALayer *depthLayer; // @synthesize depthLayer;
@property(retain, nonatomic) SnapshotView *fakeNavBar; // @synthesize fakeNavBar;
@property(retain, nonatomic) UIImage *fromSnap; // @synthesize fromSnap;
@property(nonatomic) __weak UIViewController *curViewController; // @synthesize curViewController;
@property(retain, nonatomic) CADisplayLink *timer; // @synthesize timer;
@property(nonatomic) double animationProgress; // @synthesize animationProgress;
@property(nonatomic) double startingTranslationValue; // @synthesize startingTranslationValue;
@property(retain, nonatomic) UIView *internalShadowView; // @synthesize internalShadowView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView;
@property(retain, nonatomic) SnapshotView *bottomView; // @synthesize bottomView;
@property(retain, nonatomic) UIPanGestureRecognizer *internalGesture; // @synthesize internalGesture;
@property(nonatomic) __weak id <WXGestureDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)panGesture:(id)arg1;
- (void)gesture:(id)arg1 translation:(struct CGPoint)arg2;
- (void)translateAnimationByTransitionX:(float)arg1;
- (void)beginTransitionAnimation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateTranslationByFrame;
- (void)stopGestureAnimation;
- (void)prepareGestureAnimation;
- (id)snapshotForUIView:(id)arg1;
- (id)genShadowView;
- (id)genBottomView;
- (void)setGestureIsEnable:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCurViewController:(id)arg1 andFromViewSnapshot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
