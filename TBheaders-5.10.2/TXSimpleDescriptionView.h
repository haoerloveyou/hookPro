//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor, UIFont;

@interface TXSimpleDescriptionView : UIView
{
    NSString *_text;	// 8 = 0x8
    UIFont *_font;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    UIButton *_detailBtn;	// 32 = 0x20
    long long _lineCount;	// 40 = 0x28
}

+ (id)DetailBtnClicked;
@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property(retain, nonatomic) UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)attributedString;
- (void)onBtnClick:(id)arg1;
- (void)updateUI;

// Remaining properties
@property(readonly, nonatomic) NSString *DetailBtnClicked; // @dynamic DetailBtnClicked;

@end

