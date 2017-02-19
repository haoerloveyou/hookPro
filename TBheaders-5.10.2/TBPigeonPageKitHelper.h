//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PageKitTemplateManager;

@interface TBPigeonPageKitHelper : NSObject
{
    PageKitTemplateManager *_pigeonTemplateManager;	// 8 = 0x8
    CDUnknownBlockType _refreshBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(retain, nonatomic) PageKitTemplateManager *pigeonTemplateManager; // @synthesize pigeonTemplateManager=_pigeonTemplateManager;
- (void).cxx_destruct;
- (void)checkTemplateForSectionItem:(id)arg1;
- (_Bool)isSectionItemTemplateAvailable:(id)arg1;
- (_Bool)generatePageKitView:(id)arg1;
- (id)initWithRefreshView:(CDUnknownBlockType)arg1;

@end
