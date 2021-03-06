/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BBServerConnection, NSObject<OS_dispatch_queue>;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayRemoteInterface, BBXPCConnectionDelegate, XPCProxyTarget> {
    id _activeOverrideTypesChangedHandler;
    BBServerConnection *_connection;
    id _overrideStateChangeHandler;
    id _overrideStatusChangeHandler;
    id _overridesChangedHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;

- (void)activeBehaviorOverrideTypesChanged:(unsigned int)arg1;
- (void)behaviorOverrideStateChanged:(unsigned int)arg1;
- (void)behaviorOverrideStatusChanged:(int)arg1;
- (void)behaviorOverridesChanged:(id)arg1;
- (void)connection:(id)arg1 connectionStateDidChange:(BOOL)arg2;
- (void)dealloc;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithCompletion:(id)arg1;
- (void)getBehaviorOverridesEnabledWithCompletion:(id)arg1;
- (void)getBehaviorOverridesWithCompletion:(id)arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(id)arg1;
- (void)getPrivilegedSenderTypesWithCompletion:(id)arg1;
- (void)getSectionInfoForCategory:(int)arg1 withCompletion:(id)arg2;
- (void)getSectionInfoWithCompletion:(id)arg1;
- (void)getSectionOrderRuleWithCompletion:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)setActiveBehaviorOverrideTypesChangeHandler:(id)arg1;
- (void)setBehaviorOverrideStateChangeHandler:(id)arg1;
- (void)setBehaviorOverrideStatus:(int)arg1;
- (void)setBehaviorOverrideStatusChangeHandler:(id)arg1;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setBehaviorOverridesChangeHandler:(id)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1;
- (void)setBehaviorOverridesEnabled:(BOOL)arg1;
- (void)setOrderedSectionIDs:(id)arg1 forCategory:(int)arg2;
- (void)setOrderedSectionIDs:(id)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2;
- (void)setPrivilegedSenderTypes:(unsigned int)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(int)arg3;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setSectionOrderRule:(int)arg1;

@end
