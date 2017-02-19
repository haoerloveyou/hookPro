//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MDGroupZoneParty, NSMutableArray, UIButton, UILabel, UIView;

@interface MDGroupZonePartyEnterCell : UITableViewCell
{
    UILabel *_descLabel;
    NSMutableArray *_activityCells;
    MDGroupZoneParty *_groupZoneParty;
    UIButton *_createPartyButton;
    UIButton *_customActionButton;
    UILabel *_partyTipLabel;
    UIView *_lineView;
}

+ (double)groupZonePartyEnterCellHeight:(id)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *partyTipLabel; // @synthesize partyTipLabel=_partyTipLabel;
@property(retain, nonatomic) UIButton *customActionButton; // @synthesize customActionButton=_customActionButton;
@property(retain, nonatomic) UIButton *createPartyButton; // @synthesize createPartyButton=_createPartyButton;
@property(retain, nonatomic) MDGroupZoneParty *groupZoneParty; // @synthesize groupZoneParty=_groupZoneParty;
@property(retain, nonatomic) NSMutableArray *activityCells; // @synthesize activityCells=_activityCells;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)decorateGroupZonePartyEnterCell:(id)arg1;
- (void)resetToDefault;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)customActionButtonClicked:(id)arg1;
- (void)createGroupZoneParty:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
