//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSMutableArray, UIScrollView, UIView, ZDMPageViewController;

@interface ZDMPageBar : UIControl
{
    NSArray *_tabs;
    long long _selectedPage;
    NSMutableArray *_tabViews;
    UIView *_selectedPageIndicatorView;
    UIScrollView *_scrollView;
    ZDMPageViewController *_pageViewController;
}

@property(retain, nonatomic) ZDMPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *selectedPageIndicatorView; // @synthesize selectedPageIndicatorView=_selectedPageIndicatorView;
@property(retain, nonatomic) NSMutableArray *tabViews; // @synthesize tabViews=_tabViews;
@property(nonatomic) long long selectedPage; // @synthesize selectedPage=_selectedPage;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
- (void).cxx_destruct;
- (void)setSelectedPage:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

