//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SecKillProgressLayer, UIColor, UILabel;

@interface SecKillProgressView : UIView
{
    UILabel *_progressLabel;
    SecKillProgressLayer *_progressLayer;
}

@property(retain, nonatomic) SecKillProgressLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *trackTintColor; // @dynamic trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @dynamic progressTintColor;
@property(retain, nonatomic) UIColor *borderTintColor; // @dynamic borderTintColor;
@property(nonatomic) double progress;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

