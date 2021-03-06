//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSURL, UIImage;

@interface MLCostlyGiftAnimationConfiguration : EtaModel
{
    _Bool _dimmingBackground;
    _Bool _cardAnimationDisabled;
    _Bool _itemRocksOnTray;
    _Bool _cardHasHaloBackground;
    _Bool _trayHasLightEffect;
    double _trayDuration;
    UIImage *_itemImage;
    UIImage *_itemAnimatedOverlayImage;
    UIImage *_cardImage;
    UIImage *_cardBreathingBackgroundImage;
    UIImage *_trayBackgroundImage;
    UIImage *_trayBreathingBackgroundImage;
    UIImage *_twinkleEffectImage;
    double _cardDisplayDuration;
    NSURL *_soundEffectURL;
    unsigned long long _comboStyle;
    double _cardOffsetY;
}

+ (id)carAnimationConfiguration;
+ (id)shipAnimationConfiguration;
+ (id)rocketAnimationConfiguration;
@property(nonatomic) double cardOffsetY; // @synthesize cardOffsetY=_cardOffsetY;
@property(nonatomic) _Bool trayHasLightEffect; // @synthesize trayHasLightEffect=_trayHasLightEffect;
@property(nonatomic) unsigned long long comboStyle; // @synthesize comboStyle=_comboStyle;
@property(copy, nonatomic) NSURL *soundEffectURL; // @synthesize soundEffectURL=_soundEffectURL;
@property(nonatomic) _Bool cardHasHaloBackground; // @synthesize cardHasHaloBackground=_cardHasHaloBackground;
@property(nonatomic) _Bool itemRocksOnTray; // @synthesize itemRocksOnTray=_itemRocksOnTray;
@property(nonatomic) double cardDisplayDuration; // @synthesize cardDisplayDuration=_cardDisplayDuration;
@property(nonatomic) _Bool cardAnimationDisabled; // @synthesize cardAnimationDisabled=_cardAnimationDisabled;
@property(retain, nonatomic) UIImage *twinkleEffectImage; // @synthesize twinkleEffectImage=_twinkleEffectImage;
@property(retain, nonatomic) UIImage *trayBreathingBackgroundImage; // @synthesize trayBreathingBackgroundImage=_trayBreathingBackgroundImage;
@property(retain, nonatomic) UIImage *trayBackgroundImage; // @synthesize trayBackgroundImage=_trayBackgroundImage;
@property(retain, nonatomic) UIImage *cardBreathingBackgroundImage; // @synthesize cardBreathingBackgroundImage=_cardBreathingBackgroundImage;
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(retain, nonatomic) UIImage *itemAnimatedOverlayImage; // @synthesize itemAnimatedOverlayImage=_itemAnimatedOverlayImage;
@property(retain, nonatomic) UIImage *itemImage; // @synthesize itemImage=_itemImage;
@property(nonatomic) double trayDuration; // @synthesize trayDuration=_trayDuration;
@property(nonatomic) _Bool dimmingBackground; // @synthesize dimmingBackground=_dimmingBackground;
- (void).cxx_destruct;

@end

