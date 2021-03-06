//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CEnterpriseContact, MMCPLabel, MMHeadImageView, UIButton, UILabel;
@protocol EnterpriseContactItemViewDelegate;

__attribute__((visibility("hidden")))
@interface EnterpriseContactItemView : MMUIView
{
    CEnterpriseContact *_contact;
    MMCPLabel *_nickNameLabel;
    MMHeadImageView *_headImage;
    UIButton *_rightButton;
    UILabel *_memberCountLabel;
    id <EnterpriseContactItemViewDelegate> delegate;
}

+ (double)cellHeight;
@property(nonatomic) __weak id <EnterpriseContactItemViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)onRightBtnClicked;
- (struct CGRect)calcRightButtonFrame:(id)arg1;
- (struct CGRect)calcMemberCountFrame:(id)arg1;
- (struct CGRect)calcNickNameFrame:(id)arg1;
- (void)initGreyRightButton:(id)arg1;
- (void)updateNickNameLabel;
- (void)updateHeadImageForContact:(id)arg1;
- (void)initMemberCountLabel:(id)arg1;
- (void)initNickNameLabel:(id)arg1;
- (void)initHeadImageForContact:(id)arg1;
- (void)updateView:(id)arg1;
- (void)initView:(id)arg1;
- (void)layoutSubviews;

@end

