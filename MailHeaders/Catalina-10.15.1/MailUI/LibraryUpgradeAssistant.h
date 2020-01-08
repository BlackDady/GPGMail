//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Assistant.h"

#import "MFLibraryUpgraderDelegate-Protocol.h"
#import "MFPersistenceVersionUpgraderDelegate-Protocol.h"

@class MFLibraryUpgrader, MFPersistenceVersionUpgrader, NSButton, NSString, NSView;

@interface LibraryUpgradeAssistant : Assistant <MFLibraryUpgraderDelegate, MFPersistenceVersionUpgraderDelegate>
{
    MFLibraryUpgrader *_libraryUpgrader;	// 8 = 0x8
    NSView *_currentView;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    BOOL _accountsRequireStoragePolicyChange;	// 32 = 0x20
    BOOL _isProgressIndeterminate;	// 33 = 0x21
    NSView *_accountsRequireCachePolicyChangeView;	// 40 = 0x28
    NSView *_patienceView;	// 48 = 0x30
    NSView *_epilogueView;	// 56 = 0x38
    NSView *_errorView;	// 64 = 0x40
    NSButton *_showNewFeaturesButton;	// 72 = 0x48
    NSString *_statusMessage;	// 80 = 0x50
    double _progress;	// 88 = 0x58
    MFPersistenceVersionUpgrader *_persistenceVersionUpgrader;	// 96 = 0x60
}

@property(readonly, nonatomic) MFPersistenceVersionUpgrader *persistenceVersionUpgrader; // @synthesize persistenceVersionUpgrader=_persistenceVersionUpgrader;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL isProgressIndeterminate; // @synthesize isProgressIndeterminate=_isProgressIndeterminate;
@property(copy, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(nonatomic) BOOL accountsRequireStoragePolicyChange; // @synthesize accountsRequireStoragePolicyChange=_accountsRequireStoragePolicyChange;
@property(nonatomic) __weak NSButton *showNewFeaturesButton; // @synthesize showNewFeaturesButton=_showNewFeaturesButton;
@property(retain, nonatomic) NSView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSView *epilogueView; // @synthesize epilogueView=_epilogueView;
@property(retain, nonatomic) NSView *patienceView; // @synthesize patienceView=_patienceView;
@property(retain, nonatomic) NSView *accountsRequireCachePolicyChangeView; // @synthesize accountsRequireCachePolicyChangeView=_accountsRequireCachePolicyChangeView;
// - (void).cxx_destruct;	// IMP=0x00000001001931e5
- (void)upgrader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100192f4b
- (void)upgraderDidFinish:(id)arg1;	// IMP=0x0000000100192e3d
- (void)persistenceUpgraderDidFinish;	// IMP=0x0000000100192d46
- (void)showNewFeatures:(id)arg1;	// IMP=0x0000000100192cd0
- (void)requestUserAttentionWithRequestType:(unsigned long long)arg1;	// IMP=0x0000000100192c64
- (void)goForward;	// IMP=0x0000000100192b4f
- (void)stop;	// IMP=0x0000000100192ada
- (void)start;	// IMP=0x00000001001927ee
@property(retain, nonatomic) NSView *currentView;
@property(nonatomic) long long state;
- (id)windowTitle;	// IMP=0x0000000100192217
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100191df0
@property(retain, nonatomic) MFLibraryUpgrader *libraryUpgrader;
- (void)dealloc;	// IMP=0x0000000100191bd0
- (id)initWithAssistantManager:(id)arg1;	// IMP=0x0000000100191a00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

