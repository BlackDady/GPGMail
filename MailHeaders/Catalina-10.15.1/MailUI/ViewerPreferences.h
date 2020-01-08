//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"

@class NSButton, NSColorWell, NSLayoutConstraint, NSMutableArray, NSPanel, NSPopUpButton, NSSegmentedControl, NSString, NSTableView;

@interface ViewerPreferences : NSViewController <NSTableViewDataSource>
{
    NSMutableArray *_filteredHeaders;	// 16 = 0x10
    BOOL _isEditingHeader;	// 24 = 0x18
    BOOL _isLightAppearance;	// 25 = 0x19
    NSButton *_highlightThreadCheckbox;	// 32 = 0x20
    NSColorWell *_threadHighlightColorWell;	// 40 = 0x28
    NSButton *_loadURLsSwitch;	// 48 = 0x30
    NSButton *_useSmartAddressesSwitch;	// 56 = 0x38
    NSTableView *_customHeaderTable;	// 64 = 0x40
    NSSegmentedControl *_addRemoveHeaderControl;	// 72 = 0x48
    NSPanel *_customHeaderPanel;	// 80 = 0x50
    NSPopUpButton *_headerDetailPopup;	// 88 = 0x58
    NSPopUpButton *_snippetLinesPopup;	// 96 = 0x60
    NSButton *_toCcButton;	// 104 = 0x68
    NSButton *_contactPhotosButton;	// 112 = 0x70
    NSButton *_viewRelatedMessagesButton;	// 120 = 0x78
    NSLayoutConstraint *_viewConversationsTopConstraintDarkBackgrounds;	// 128 = 0x80
}

+ (void)postSnippetLinesPreferenceChanged;	// IMP=0x00000001002b3c5b
+ (void)postViewingPreferencesChanged;	// IMP=0x00000001000857ca
@property(nonatomic) __weak NSLayoutConstraint *viewConversationsTopConstraintDarkBackgrounds; // @synthesize viewConversationsTopConstraintDarkBackgrounds=_viewConversationsTopConstraintDarkBackgrounds;
@property(nonatomic) BOOL isLightAppearance; // @synthesize isLightAppearance=_isLightAppearance;
@property(nonatomic) BOOL isEditingHeader; // @synthesize isEditingHeader=_isEditingHeader;
@property(nonatomic) __weak NSButton *viewRelatedMessagesButton; // @synthesize viewRelatedMessagesButton=_viewRelatedMessagesButton;
@property(nonatomic) __weak NSButton *contactPhotosButton; // @synthesize contactPhotosButton=_contactPhotosButton;
@property(nonatomic) __weak NSButton *toCcButton; // @synthesize toCcButton=_toCcButton;
@property(nonatomic) __weak NSPopUpButton *snippetLinesPopup; // @synthesize snippetLinesPopup=_snippetLinesPopup;
@property(nonatomic) __weak NSPopUpButton *headerDetailPopup; // @synthesize headerDetailPopup=_headerDetailPopup;
@property(retain, nonatomic) NSPanel *customHeaderPanel; // @synthesize customHeaderPanel=_customHeaderPanel;
@property(nonatomic) __weak NSSegmentedControl *addRemoveHeaderControl; // @synthesize addRemoveHeaderControl=_addRemoveHeaderControl;
@property(nonatomic) __weak NSTableView *customHeaderTable; // @synthesize customHeaderTable=_customHeaderTable;
@property(nonatomic) __weak NSButton *useSmartAddressesSwitch; // @synthesize useSmartAddressesSwitch=_useSmartAddressesSwitch;
@property(nonatomic) __weak NSButton *loadURLsSwitch; // @synthesize loadURLsSwitch=_loadURLsSwitch;
@property(nonatomic) __weak NSColorWell *threadHighlightColorWell; // @synthesize threadHighlightColorWell=_threadHighlightColorWell;
@property(nonatomic) __weak NSButton *highlightThreadCheckbox; // @synthesize highlightThreadCheckbox=_highlightThreadCheckbox;
// - (void).cxx_destruct;	// IMP=0x00000001002b51a8
- (void)viewRelatedMessagesClicked:(id)arg1;	// IMP=0x00000001000858ad
- (void)snippetLinesChanged:(id)arg1;	// IMP=0x00000001002b4e54
- (void)threadHighlightColorChanged:(id)arg1;	// IMP=0x00000001002b4d69
- (void)highlightThreadClicked:(id)arg1;	// IMP=0x0000000100085678
- (void)headerDetailLevelChanged:(id)arg1;	// IMP=0x00000001002b4c9e
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;	// IMP=0x00000001002b4c2b
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x00000001002b4bda
- (long long)numberOfRowsInTableView:(id)arg1;	// IMP=0x000000010007eef7
- (void)addRemoveHeaderClicked:(id)arg1;	// IMP=0x00000001002b494c
- (void)cancelClicked:(id)arg1;	// IMP=0x00000001002b4837
- (void)okClicked:(id)arg1;	// IMP=0x00000001002b46bb
- (void)_endEditingHeader;	// IMP=0x00000001002b4668
- (void)_removeInvalidHeaders;	// IMP=0x00000001002b43f5
- (void)_headerTableEndedEditing:(id)arg1;	// IMP=0x00000001002b43c5
- (void)_headerTableBeganEditing:(id)arg1;	// IMP=0x00000001002b4392
- (void)_editCustomHeadersClicked;	// IMP=0x00000001002b3fd4
- (void)useSmartAddressesClicked:(id)arg1;	// IMP=0x00000001000855ef
- (void)loadURLsClicked:(id)arg1;	// IMP=0x000000010008597a
- (void)initializeFromDefaults;	// IMP=0x000000010007f15c
- (void)_updateCustomHeaderUI;	// IMP=0x00000001002b3e47
- (void)viewDidLoad;	// IMP=0x00000001002b3d68
- (void)dealloc;	// IMP=0x00000001002b3cf3
- (void)awakeFromNib;	// IMP=0x000000010007ef26
- (void)_updateUseDarkBackgroundForMessagesButton:(BOOL)arg1;	// IMP=0x00000001002b3991
- (void)_viewDidChangeEffectiveAppearance:(id)arg1;	// IMP=0x00000001002b397a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

