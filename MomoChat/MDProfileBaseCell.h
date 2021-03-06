//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MDProfileBaseProtocol.h"

@class NSString, UIImageView, UIView;

@interface MDProfileBaseCell : UITableViewCell <MDProfileBaseProtocol>
{
    UIImageView *_accessoryImageView;
    UIView *_seperateLine;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
- (void).cxx_destruct;
- (void)bindModel:(id)arg1;
- (void)setAccessoryCenterY:(double)arg1;
- (void)setAccessoryOrigin:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

