//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MDGiftActionViewProtocol.h"

@class MDStarActionController, NSString, UIImageView, UILabel;

@interface MDGiftActionView : UIView <MDGiftActionViewProtocol>
{
    _Bool _isAnimating;
    unsigned long long _actionType;
    UIImageView *_trayBgView;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_giftDesLabel;
    UIImageView *_giftImgView;
    UIImageView *_sliderView;
    MDStarActionController *_starActionController;
}

@property(retain, nonatomic) MDStarActionController *starActionController; // @synthesize starActionController=_starActionController;
@property(retain, nonatomic) UIImageView *sliderView; // @synthesize sliderView=_sliderView;
@property(nonatomic) __weak UIImageView *giftImgView; // @synthesize giftImgView=_giftImgView;
@property(nonatomic) __weak UILabel *giftDesLabel; // @synthesize giftDesLabel=_giftDesLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak UIImageView *trayBgView; // @synthesize trayBgView=_trayBgView;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)bindActionModel:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
