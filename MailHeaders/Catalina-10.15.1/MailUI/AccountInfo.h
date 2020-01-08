//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTabViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class AccountSummary, IMAPMailboxes, MFMailAccount, NSMutableSet, NSPopUpButton, NSString, NSTabView, NSTabViewItem, NSView, NSWindow, OofPanelController, Quota;

@interface AccountInfo : NSObject <NSTabViewDelegate, NSWindowDelegate>
{
    NSMutableSet *_tabViewItemsThatHaveBeenSetup;	// 8 = 0x8
    NSWindow *_window;	// 16 = 0x10
    NSView *_topView;	// 24 = 0x18
    NSTabView *_tabView;	// 32 = 0x20
    NSPopUpButton *_accountPopup;	// 40 = 0x28
    NSTabViewItem *_mailboxListTab;	// 48 = 0x30
    NSTabViewItem *_outOfOfficeTab;	// 56 = 0x38
    AccountSummary *_summary;	// 64 = 0x40
    Quota *_quota;	// 72 = 0x48
    OofPanelController *_oofController;	// 80 = 0x50
    IMAPMailboxes *_mailboxes;	// 88 = 0x58
    MFMailAccount *_account;	// 96 = 0x60
    struct CGRect _oldFrame;	// 104 = 0x68
    struct CGRect _newFrame;	// 136 = 0x88
}

+ (void)showForAccount:(id)arg1 withTab:(id)arg2;	// IMP=0x0000000100097742
@property(nonatomic) struct CGRect newFrame; // @synthesize newFrame=_newFrame;
@property(nonatomic) struct CGRect oldFrame; // @synthesize oldFrame=_oldFrame;
@property(retain, nonatomic) MFMailAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) IMAPMailboxes *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(retain, nonatomic) OofPanelController *oofController; // @synthesize oofController=_oofController;
@property(retain, nonatomic) Quota *quota; // @synthesize quota=_quota;
@property(retain, nonatomic) AccountSummary *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSTabViewItem *outOfOfficeTab; // @synthesize outOfOfficeTab=_outOfOfficeTab;
@property(retain, nonatomic) NSTabViewItem *mailboxListTab; // @synthesize mailboxListTab=_mailboxListTab;
@property(nonatomic) __weak NSPopUpButton *accountPopup; // @synthesize accountPopup=_accountPopup;
@property(nonatomic) __weak NSTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) NSView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
// - (void).cxx_destruct;	// IMP=0x0000000100099a81
- (void)windowWillClose:(id)arg1;	// IMP=0x00000001000997a7
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;	// IMP=0x0000000100099630
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;	// IMP=0x0000000100099498
- (void)_handleOofError:(id)arg1;	// IMP=0x000000010009925b
- (void)accountPopupChanged:(id)arg1;	// IMP=0x000000010009918d
- (void)_showWithTab:(id)arg1;	// IMP=0x0000000100098ef9
- (void)_accountsDidChange:(id)arg1;	// IMP=0x0000000100098e4c
- (void)_setupTabViewItem:(id)arg1 oldTabViewItem:(id)arg2;	// IMP=0x00000001000988f1
- (id)_getOwnerFromIdentifier:(id)arg1;	// IMP=0x0000000100098818
- (void)_setAccount:(id)arg1 setupSelectedTab:(BOOL)arg2;	// IMP=0x0000000100098394
- (id)_selectedAccount;	// IMP=0x000000010009831a
- (void)_configureAccountPopupSelectingAccount:(id)arg1;	// IMP=0x0000000100097bca
- (void)dealloc;	// IMP=0x0000000100097b55
- (id)init;	// IMP=0x0000000100097a86
- (id)initWithMailAccount:(id)arg1;	// IMP=0x00000001000978bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

