//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TBIMChatTimeTipView, TBSenderNameLagel, UIImageView, UILabel, UIView;
@protocol TBIMChatBubble, TBIMChatCellDelegate, TBIMChatCellModel;

@protocol TBIMChatCell <NSObject>
@property(retain, nonatomic) TBSenderNameLagel *wwNameLabel;
@property(retain, nonatomic) UILabel *nameLabel;
@property(retain, nonatomic) UILabel *identityLabel;
@property(retain, nonatomic) UIImageView *avatarImageView;
@property(retain, nonatomic) UIView<TBIMChatBubble> *chatBubble;
@property(retain, nonatomic) TBIMChatTimeTipView *timeTipView;
@property(retain, nonatomic) id <TBIMChatCellModel> cellModel;
@property(nonatomic) __weak id <TBIMChatCellDelegate> delegate;
- (void)updateCellModel:(id <TBIMChatCellModel>)arg1;
- (UIView<TBIMChatBubble> *)chatBubbleWithChatBubbleLayoutType:(long long)arg1 direction:(long long)arg2;
- (void)recycleChatBubble:(UIView<TBIMChatBubble> *)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(NSString *)arg2 cellModel:(id <TBIMChatCellModel>)arg3;

@optional
- (void)resginRelevantFirstResponder;
- (void)stopAudioAnimating;
- (void)startAudioAnimating;
- (void)updateWithCurrentLikeStatus;
- (void)updateWithCurrentUser;
- (void)showMenuView;
@end

