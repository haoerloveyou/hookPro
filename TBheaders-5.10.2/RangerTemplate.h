//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface RangerTemplate : NSObject
{
    NSMutableArray *_childTemplate;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSArray *_cssClassName;	// 24 = 0x18
    NSString *_cssIdName;	// 32 = 0x20
    NSMutableDictionary *_attributes;	// 40 = 0x28
    NSString *_content;	// 48 = 0x30
    RangerTemplate *_parent;	// 56 = 0x38
}

@property __weak RangerTemplate *parent; // @synthesize parent=_parent;
@property(retain) NSString *content; // @synthesize content=_content;
@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSString *cssIdName; // @synthesize cssIdName=_cssIdName;
@property(retain) NSArray *cssClassName; // @synthesize cssClassName=_cssClassName;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)templateToView;
- (id)description;
@property(readonly, nonatomic) NSArray *childs;
- (void)insertChildTemplate:(id)arg1;
- (void)insertAttribute:(id)arg1 forKey:(id)arg2;
- (id)initWithTagName:(id)arg1 attribute:(id)arg2;
- (id)init;

@end

