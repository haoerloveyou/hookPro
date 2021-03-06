//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (RoundedCorner)
- (id)imageWithRadius:(struct CGSize)arg1 cornerRadius:(struct MDCornerRadius)arg2;
- (void)addRoundedRectToPath:(struct CGRect)arg1 context:(struct CGContext *)arg2 ovalWidth:(double)arg3 ovalHeight:(double)arg4;
- (id)clipImageWithFinalWidth:(double)arg1 finalHeight:(double)arg2;
- (id)scaleImageWithRadius:(float)arg1 finalWidth:(double)arg2 finalHeight:(double)arg3;
- (id)imagewithRadiusForUserTitlewidth:(float)arg1 height:(float)arg2;
- (id)getEllipseImageWithImage:(id)arg1;
- (id)imageWithRadius:(float)arg1 width:(float)arg2 height:(float)arg3;
- (id)roundedCornerImage:(long long)arg1 borderSize:(long long)arg2;
@end

