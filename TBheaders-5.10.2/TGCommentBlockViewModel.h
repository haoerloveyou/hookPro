//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGCollectionBlockViewModel.h"

@class NSString, TGRelatedCommentModel;

@interface TGCommentBlockViewModel : TGCollectionBlockViewModel
{
    TGRelatedCommentModel *_model;	// 8 = 0x8
}

@property(retain, nonatomic) TGRelatedCommentModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *time;
@property(readonly, nonatomic) NSString *imageUrl;
@property(readonly, nonatomic) NSString *content;
@property(readonly, nonatomic) NSString *author;
- (id)initWithCommmentModel:(id)arg1;

@end

