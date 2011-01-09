/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */



@interface CalendarEventAlarmEditItem : CalendarEventEditItem 
{
}


- (id)identifier;
- (void)absorbValueFromView:(id)arg1;
- (id)detailViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;
- (BOOL)configureForCalendarConstraints:(id)arg1 withOccurrence:(struct CalEventOccurrence { }*)arg2;
- (id)_newDictionaryRepresentationForAlarmAtIndex:(NSInteger)arg1;
- (BOOL)editItemViewDirty:(id)arg1;
- (void)saveIntoEvent:(void*)arg1;
- (id)cellForSubitemAtIndex:(NSInteger)arg1 givenEditModel:(id)arg2;
- (id)serializedValue;
- (BOOL)shouldCancelEditingForModel:(id)arg1;
- (NSInteger)numberOfSubitems;

@end