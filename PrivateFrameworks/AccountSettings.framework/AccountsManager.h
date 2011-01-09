/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@class NSMutableArray, NSMutableDictionary, NSArray;



@interface AccountsManager : NSObject 
{
    NSMutableArray *_accounts;
    NSMutableDictionary *_accountsByID;
    NSUInteger _dataVersion;
    NSArray *_runtimeFixers;
}

+ (void)_migrateAccountsIfNeeded;
+ (id)displayNameForGroupOfAccountType:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
+ (id)createAndLockMigrationLockToPerformMigration:(BOOL)arg1;
+ (void)releaseMigrationLock:(id)arg1;
+ (void)waitForMigrationToFinish;
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;
+ (void)shouldMigrateOldMailAccounts:(BOOL*)arg1 oldDAAccounts:(BOOL*)arg2 newAccountSettings:(BOOL*)arg3;
+ (BOOL)accountSettingsNeedsToBeMigrated;
+ (BOOL)_oldDAAccountsInformationFound;
+ (BOOL)_oldMailAccountsInformationFound;
+ (NSUInteger)currentVersion;
+ (id)fullPathToAccountSettingsPlist;

- (id)_initInsideOfMigration;
- (id)init;
- (void)dealloc;
- (id)accountWithIdentifier:(id)arg1;
- (id)accountWithSyncIdentifier:(id)arg1;
- (id)allBasicAccounts;
- (NSUInteger)countOfBasicAccountsWithTypes:(id)arg1;
- (id)displayNameForAccountWithIdentifier:(id)arg1;
- (id)displayNameForAccountWithSyncIdentifier:(id)arg1;
- (id)legacyAccounts;
- (void)setLegacyAccounts:(id)arg1;
- (id)fullDeviceLocalAccount;
- (id)fullAccountWithIdentifier:(id)arg1;
- (id)allMailAccounts;
- (id)allExchangeAccounts;
- (id)accountsWithTypes:(id)arg1;
- (NSUInteger)count;
- (void)updateAccount:(id)arg1;
- (void)insertAccount:(id)arg1;
- (void)deleteAccount:(id)arg1;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)replaceExchangeAccountsWith:(id)arg1;
- (void)replaceAccountsWithTypes:(id)arg1 withAccounts:(id)arg2;
- (void)saveAllAccounts;
- (id)_initWithAccountsInfo:(id)arg1;
- (id)_createRuntimeFixers;
- (void)setDataVersion:(NSUInteger)arg1;
- (id)initWithAccounsInfoArray:(id)arg1;
- (NSUInteger)dataVersion;
- (BOOL)hasActiveDAMMeAccounts;

@end