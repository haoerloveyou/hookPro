//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SearchToolSubViewProtocol-Protocol.h"

@class NSString;
@protocol SearchResultSpellCheckViewDelegate, SearchToolSubViewsDelegate;

@interface SearchResultSpellCheckView : UIView <SearchToolSubViewProtocol>
{
    _Bool _actionEnabled;	// 8 = 0x8
    id <SearchToolSubViewsDelegate> toolSubViewsDelegate;	// 16 = 0x10
    id <SearchResultSpellCheckViewDelegate> _delegate;	// 24 = 0x18
    NSString *_spellCheck;	// 32 = 0x20
    NSString *_hintText;	// 40 = 0x28
    NSString *_placeholderInHintText;	// 48 = 0x30
}

+ (double)preferredHeight;
@property(nonatomic) _Bool actionEnabled; // @synthesize actionEnabled=_actionEnabled;
@property(copy, nonatomic) NSString *placeholderInHintText; // @synthesize placeholderInHintText=_placeholderInHintText;
@property(copy, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(copy, nonatomic) NSString *spellCheck; // @synthesize spellCheck=_spellCheck;
@property(nonatomic) __weak id <SearchResultSpellCheckViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SearchToolSubViewsDelegate> toolSubViewsDelegate; // @synthesize toolSubViewsDelegate;
- (void).cxx_destruct;
- (void)buttonDidPressed:(id)arg1;
- (void)buildView;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)getViewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
