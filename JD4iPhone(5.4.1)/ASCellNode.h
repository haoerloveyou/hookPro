//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDisplayNode.h"

@class UIScrollView, UIViewController;

@interface ASCellNode : ASDisplayNode
{
    CDUnknownBlockType _viewControllerBlock;
    CDUnknownBlockType _viewControllerDidLoadBlock;
    ASDisplayNode *_viewControllerNode;
    UIViewController *_viewController;
    _Bool _neverShowPlaceholders;
    _Bool _selected;
    _Bool _highlighted;
    id <ASCellNodeLayoutDelegate> _layoutDelegate;
    long long _selectionStyle;
    UIScrollView *_scrollView;
}

@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) _Bool neverShowPlaceholders; // @synthesize neverShowPlaceholders=_neverShowPlaceholders;
@property(nonatomic) __weak id <ASCellNodeLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)visibilityDidChange:(_Bool)arg1;
- (void)cellNodeVisibilityEvent:(unsigned long long)arg1 inScrollView:(id)arg2 withCellFrame:(struct CGRect)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didRelayoutFromOldSize:(struct CGSize)arg1 toNewSize:(struct CGSize)arg2;
- (void)transitionLayoutWithSizeRange:(CDStruct_42a63532)arg1 animated:(_Bool)arg2 shouldMeasureAsync:(_Bool)arg3 measurementCompletion:(CDUnknownBlockType)arg4;
- (void)transitionLayoutWithAnimation:(_Bool)arg1 shouldMeasureAsync:(_Bool)arg2 measurementCompletion:(CDUnknownBlockType)arg3;
- (void)__setNeedsLayout;
- (void)setLayerBacked:(_Bool)arg1;
- (id)initWithViewBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)initWithLayerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (void)layoutDidFinish;
- (void)layout;
- (void)didLoad;
- (id)initWithViewControllerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

