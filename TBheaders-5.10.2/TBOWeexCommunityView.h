//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HMSegmentedControl, TBOWeexCommunityHeaderView, TBOWeexHeader;

@interface TBOWeexCommunityView : UIView
{
    TBOWeexCommunityHeaderView *_headerView;	// 8 = 0x8
    HMSegmentedControl *_seg;	// 16 = 0x10
    TBOWeexHeader *_model;	// 24 = 0x18
}

@property(retain, nonatomic) TBOWeexHeader *model; // @synthesize model=_model;
@property(retain, nonatomic) HMSegmentedControl *seg; // @synthesize seg=_seg;
@property(retain, nonatomic) TBOWeexCommunityHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)setCommunityHeaderView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
