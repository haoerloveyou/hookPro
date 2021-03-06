//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TBSNSTopicSendBtn, UIButton, UIViewController;

@interface TBSNSTopicSendMenu : UIView <UIScrollViewDelegate>
{
    CDUnknownBlockType _menuClickedBlock;	// 8 = 0x8
    NSString *_topicName;	// 16 = 0x10
    NSString *_accountId;	// 24 = 0x18
    UIButton *_bgView;	// 32 = 0x20
    TBSNSTopicSendBtn *_imgBtn;	// 40 = 0x28
    TBSNSTopicSendBtn *_videoBtn;	// 48 = 0x30
    UIViewController *_vc;	// 56 = 0x38
    CDUnknownBlockType _removeHandler;	// 64 = 0x40
}

@property(copy, nonatomic) CDUnknownBlockType removeHandler; // @synthesize removeHandler=_removeHandler;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) TBSNSTopicSendBtn *videoBtn; // @synthesize videoBtn=_videoBtn;
@property(retain, nonatomic) TBSNSTopicSendBtn *imgBtn; // @synthesize imgBtn=_imgBtn;
@property(retain, nonatomic) UIButton *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(copy, nonatomic) CDUnknownBlockType menuClickedBlock; // @synthesize menuClickedBlock=_menuClickedBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)buttonClicked:(id)arg1;
- (void)menuTap:(id)arg1;
- (id)utParam;
- (void)removeFromView;
- (void)showInView:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 viewControll:(id)arg2 topicName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

