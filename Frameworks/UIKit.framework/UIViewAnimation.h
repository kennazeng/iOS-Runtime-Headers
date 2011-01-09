/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;



@interface UIViewAnimation : NSObject 
{
    UIView *_view;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _endRect;
    float _endAlpha;
    float _startFraction;
    float _endFraction;
    NSInteger _curve;
    BOOL _animateFromCurrentPosition;
    BOOL _shouldDeleteAfterAnimation;
    BOOL _editing;
}

@property(readonly) BOOL editing; /* unknown property attribute: V_editing */
@property(readonly) BOOL shouldDeleteAfterAnimation; /* unknown property attribute: V_shouldDeleteAfterAnimation */
@property(readonly) BOOL animateFromCurrentPosition; /* unknown property attribute: V_animateFromCurrentPosition */
@property(readonly) NSInteger curve; /* unknown property attribute: V_curve */
@property(readonly) float endFraction; /* unknown property attribute: V_endFraction */
@property(readonly) float startFraction; /* unknown property attribute: V_startFraction */
@property(readonly) float endAlpha; /* unknown property attribute: V_endAlpha */
@property(readonly) CGRect endRect; /* unknown property attribute: V_endRect */
@property(readonly) UIView *view; /* unknown property attribute: V_view */


- (id)initWithView:(id)arg1 endRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 endAlpha:(float)arg3 startFraction:(float)arg4 endFraction:(float)arg5 curve:(NSInteger)arg6 animateFromCurrentPosition:(BOOL)arg7 shouldDeleteAfterAnimation:(BOOL)arg8 editing:(BOOL)arg9;
- (void)dealloc;
- (BOOL)editing;
- (BOOL)shouldDeleteAfterAnimation;
- (BOOL)animateFromCurrentPosition;
- (NSInteger)curve;
- (float)endFraction;
- (float)startFraction;
- (float)endAlpha;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endRect;
- (id)view;

@end