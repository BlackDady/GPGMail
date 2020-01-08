//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFSyncedSignaturesFile, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MFSignatureManager : NSObject
{
    NSMutableDictionary *_signatures;	// 8 = 0x8
    NSMutableArray *_accounts;	// 16 = 0x10
    NSMutableDictionary *_lastDefaultSignatures;	// 24 = 0x18
    BOOL _isDirty;	// 32 = 0x20
    MFSyncedSignaturesFile *_syncedFile;	// 40 = 0x28
}

+ (id)signatureContentsFileRelativePathWithUniqueID:(id)arg1;	// IMP=0x000000000020654a
+ (id)signaturesFileRelativePath;	// IMP=0x00000000002064e5
+ (id)sharedInstance;	// IMP=0x0000000000205a1e
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000205965
+ (id)_signaturesFolderPath;	// IMP=0x00000000002058cb
+ (id)allSignaturesAccount;	// IMP=0x0000000000205880
@property(readonly, nonatomic) MFSyncedSignaturesFile *syncedFile; // @synthesize syncedFile=_syncedFile;
@property(nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
// - (void).cxx_destruct;	// IMP=0x000000000020b232
- (void)configurePopUpButton:(id)arg1 forAccount:(id)arg2 defaultSignature:(id)arg3 selectionMethod:(long long)arg4 showAccount:(BOOL)arg5;	// IMP=0x000000000020a8dd
@property(nonatomic) BOOL placeSignatureAboveQuotedText;
- (void)unsetShowsComposeAccessoryView;	// IMP=0x000000000020a68e
- (void)setShowsComposeAccessoryView:(BOOL)arg1;	// IMP=0x000000000020a5eb
- (BOOL)showComposeAccessoryView;	// IMP=0x000000000020a5d7
- (BOOL)showComposeAccessoryView:(char *)arg1;	// IMP=0x000000000020a571
- (id)activeSignatureWithId:(id)arg1;	// IMP=0x000000000020a328
- (id)activeSignatureWithName:(id)arg1;	// IMP=0x000000000020a0df
- (void)setSignatureSelectionMethod:(long long)arg1 forAccount:(id)arg2;	// IMP=0x0000000000209f45
- (long long)signatureSelectionMethodForAccount:(id)arg1;	// IMP=0x0000000000209e2d
- (id)defaultSignatureForAccount:(id)arg1;	// IMP=0x0000000000209bd0
- (void)setDefaultSignature:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000000002099cf
- (void)_setDefaultSignatureId:(id)arg1 forAccountId:(id)arg2;	// IMP=0x000000000020991d
- (void)_signatureManagerChanged:(id)arg1;	// IMP=0x00000000002092dc
- (void)_signatureChanged:(id)arg1;	// IMP=0x0000000000209032
- (id)_accountsMap;	// IMP=0x0000000000208b95
- (id)_serializedSignatures;	// IMP=0x0000000000208973
- (void)saveChangesToDisk;	// IMP=0x00000000002086cb
- (void)_signatureNameChanged:(id)arg1;	// IMP=0x00000000002086b4
- (void)addSignature:(id)arg1;	// IMP=0x0000000000208647
- (void)insertSignature:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000020841c
- (void)insertSignature:(id)arg1 atIndex:(unsigned long long)arg2 forAccount:(id)arg3;	// IMP=0x000000000020812f
- (void)removeSignatureAtIndex:(unsigned long long)arg1 forAccount:(id)arg2;	// IMP=0x0000000000207f83
- (void)_removeSignature:(id)arg1;	// IMP=0x0000000000207c67
- (void)removeSignatureAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000207bab
- (id)signatureAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000207b92
- (id)signatureAtIndex:(unsigned long long)arg1 forAccount:(id)arg2;	// IMP=0x0000000000207aef
- (id)signaturesForAccount:(id)arg1;	// IMP=0x0000000000207a8c
@property(readonly, nonatomic) unsigned long long numberOfSignatures;
- (id)_fixAccountIdsInPlist:(id)arg1;	// IMP=0x00000000002076b9
- (void)loadSignaturesFromDisk;	// IMP=0x00000000002075c4
- (void)_loadSignaturesFromDiskIfNeeded;	// IMP=0x00000000002075a9
@property(readonly, copy, nonatomic) NSDictionary *signatures;
- (void)_loadAllSignatures:(id)arg1 forAccounts:(id)arg2;	// IMP=0x0000000000206e79
- (BOOL)updateAccountList;	// IMP=0x000000000020692f
- (void)_loadAccountsIfNeeded;	// IMP=0x0000000000206740
@property(readonly, copy, nonatomic) NSArray *signatureAccounts;
- (void)_loadLastDefaultSignatures;	// IMP=0x00000000002065ab
- (void)dealloc;	// IMP=0x00000000002063e0
- (id)init;	// IMP=0x0000000000205ad7

@end

