//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface CommuneMyQuestionModel : JDModel
{
    NSString *_productName;
    NSString *_questionContent;
    NSString *_createTime;
    unsigned long long _answerCount;
}

@property(nonatomic) unsigned long long answerCount; // @synthesize answerCount=_answerCount;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *questionContent; // @synthesize questionContent=_questionContent;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void).cxx_destruct;

@end
