/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SALocalSearchSendToProtobufConduitCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSData * rawResponse;
@property(copy) NSString * refId;

+ (id)sendToProtobufConduitCompleted;
+ (id)sendToProtobufConduitCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)rawResponse;
- (void)setRawResponse:(id)arg1;

@end
