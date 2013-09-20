/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSCH3DComponent16WidenShaderEffect : TSCH3DLowColorBitsShaderEffect {
    float mFactor;
    NSString *mWidenFunction;
}

@property float factor;

+ (id)variableWidenSelect;

- (void)addVariables:(id)arg1;
- (void)dealloc;
- (float)factor;
- (void)inject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setFactor:(float)arg1;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (id)variableWidenSelect;
- (id)widenFunction;

@end