//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TBIAssetDelegate-Protocol.h"
#import "TBICameraAddViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol TBIAssetDelegate;

@interface TBIAssetCell : UITableViewCell <TBIAssetDelegate, TBICameraAddViewDelegate>
{
    NSArray *_rowAssets;	// 8 = 0x8
    _Bool _isFirstRow;	// 16 = 0x10
    long long _selectStyle;	// 24 = 0x18
    id <TBIAssetDelegate> _delegate;	// 32 = 0x20
}

@property(nonatomic) __weak id <TBIAssetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectStyle; // @synthesize selectStyle=_selectStyle;
@property(nonatomic) _Bool isFirstRow; // @synthesize isFirstRow=_isFirstRow;
- (void).cxx_destruct;
- (void)resetAlbumContainer;
- (void)TBICameraAddShouldGoCamera:(id)arg1;
- (void)assetView:(id)arg1 selectedWithAsset:(id)arg2;
- (void)setAssets:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
