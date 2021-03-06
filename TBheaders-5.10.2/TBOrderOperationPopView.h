//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;

@interface TBOrderOperationPopView : UIView
{
    _Bool _isTopArrow;	// 8 = 0x8
    _Bool _isShow;	// 9 = 0x9
    UIImageView *_backgroundView;	// 16 = 0x10
    NSMutableArray *_buttons;	// 24 = 0x18
    NSMutableArray *_lines;	// 32 = 0x20
    UIView *_actionView;	// 40 = 0x28
    CDUnknownBlockType _clickBlock;	// 48 = 0x30
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool isTopArrow; // @synthesize isTopArrow=_isTopArrow;
@property(retain, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)free;
- (void)buttonClick:(id)arg1;
- (void)setPopItems:(id)arg1;
- (id)createLine;
- (id)createButtonWithTitle:(id)arg1;
- (void)layoutSubviews;
- (double)calHeight;
- (void)hide;
- (id)arrowImage:(_Bool)arg1;
- (void)showInView:(id)arg1 withActionView:(id)arg2;
- (id)init;

@end

