//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDGroupGradeEditorCell, UITextField;

@protocol MDGroupGradeEditorCellDelegate <NSObject>
- (void)gradeEditorCell:(MDGroupGradeEditorCell *)arg1 textFieldEditing:(UITextField *)arg2 keyboardShow:(_Bool)arg3;
- (void)gradeNameCleared:(MDGroupGradeEditorCell *)arg1;
- (void)gradeNameChanged:(MDGroupGradeEditorCell *)arg1;
@end

