//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface MDMusicDetailBottomView : UIView
{
    UIButton *_OperationButton;
    UILabel *_musicNameLabel;
    UILabel *_artistNameLabel;
    UILabel *_albumNameLabel;
    UIView *_dividerView;
}

+ (id)bottomView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(nonatomic) __weak UILabel *albumNameLabel; // @synthesize albumNameLabel=_albumNameLabel;
@property(nonatomic) __weak UILabel *artistNameLabel; // @synthesize artistNameLabel=_artistNameLabel;
@property(nonatomic) __weak UILabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(nonatomic) __weak UIButton *OperationButton; // @synthesize OperationButton=_OperationButton;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (double)mySelfHeight;
- (void)awakeFromNib;

@end

