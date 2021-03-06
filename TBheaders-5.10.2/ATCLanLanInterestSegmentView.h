//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ATCLanlanMenuItem, UIButton, UIFont, UIImageView, UILabel;

@interface ATCLanLanInterestSegmentView : UIView
{
    float _animProgress;	// 8 = 0x8
    ATCLanlanMenuItem *_item;	// 16 = 0x10
    long long _index;	// 24 = 0x18
    UIFont *_titleFont;	// 32 = 0x20
    UIButton *_actionButton;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UIImageView *_iconImageView;	// 56 = 0x38
    UIImageView *_tagImageView;	// 64 = 0x40
    CDUnknownBlockType _indexDidSelectedBlock;	// 72 = 0x48
    struct CGSize _iconImageViewSize;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType indexDidSelectedBlock; // @synthesize indexDidSelectedBlock=_indexDidSelectedBlock;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) struct CGSize iconImageViewSize; // @synthesize iconImageViewSize=_iconImageViewSize;
@property(nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) float animProgress; // @synthesize animProgress=_animProgress;
@property(retain, nonatomic) ATCLanlanMenuItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)actionButtonClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

