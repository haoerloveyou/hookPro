//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, WanderShopProgressView;

@interface WanderShopBottomButtonsView : UIView
{
    UIImageView *_redImageView;
    UIImageView *_activityRedDot;
    UIView *contentView;
    id <WanderShopBottomButtonsDelagete> _delegate;
    WanderShopProgressView *_pView;
}

@property(retain, nonatomic) WanderShopProgressView *pView; // @synthesize pView=_pView;
@property(nonatomic) __weak id <WanderShopBottomButtonsDelagete> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)finishLogin;
- (void)composeStory;
- (void)refreshButtonStateOfIndex:(long long)arg1;
- (void)buttonSelect:(id)arg1;
- (void)hideRedView;
- (void)reloadRedView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
