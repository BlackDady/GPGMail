//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComposeViewController.h"

@class ComposeBackEndWK1, EditableWebMessageDocumentWK1, EditingMessageWebView, EditingWebMessageControllerWK1, NSString, WebViewEditorWK1;

@interface ComposeViewControllerWK1 : ComposeViewController
{
    EditingMessageWebView *_composeWebView;	// 24 = 0x18
    NSString *_userHTMLForSharingTop;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *userHTMLForSharingTop; // @synthesize userHTMLForSharingTop=_userHTMLForSharingTop;
@property(retain, nonatomic) EditingMessageWebView *composeWebView; // @synthesize composeWebView=_composeWebView;
// - (void).cxx_destruct;	// IMP=0x0000000100106023
- (void)_ensureTextFinder;	// IMP=0x0000000100105ee6
- (void)_setComposeViewDrawsBackground:(BOOL)arg1;	// IMP=0x0000000100105e9a
- (void)_restoreOriginalAttachments:(id)arg1;	// IMP=0x0000000100105acf
- (void)didFindNonIncrementalSearchInWebView:(id)arg1 DOMRange:(id)arg2;	// IMP=0x00000001001058a1
- (id)currentlySelectedWebView;	// IMP=0x000000010010588f
- (id)webViews;	// IMP=0x00000001001057fb
- (Class)backEndClass;	// IMP=0x00000001001057e2
- (void)_prependBRToBody;	// IMP=0x00000001001056f8
- (void)_addAttachmentsFromShareKit;	// IMP=0x0000000100104f7a
- (BOOL)_isFullyLoaded;	// IMP=0x0000000100104f19
- (void)_insertUserHTMLDivs;	// IMP=0x0000000100104ba5
- (void)_getUserHTMLForEditing;	// IMP=0x0000000100104a51
- (void)_addBaseURLToDocumentIfNeeded;	// IMP=0x000000010010490d
- (void)_changeSharedURLToDisplayType:(long long)arg1;	// IMP=0x0000000100103941
- (void)_appendMessages:(id)arg1 withMessageBodies:(id)arg2;	// IMP=0x000000010010356a
- (void)_registerSelectionRestorationWithUndoManager:(id)arg1;	// IMP=0x00000001001034a1
- (void)_removeAllFormatting;	// IMP=0x0000000100103464
- (void)backEndDidLoadInitialContent:(id)arg1 mayUseDarkAppearance:(BOOL)arg2;	// IMP=0x0000000100103248
- (id)_composeView;	// IMP=0x0000000100103236
- (id)_firstSelectedAttachmentView;	// IMP=0x0000000100103100
- (void)_replaceSelectionWithMarkupString:(id)arg1;	// IMP=0x000000010010308e
- (void)setInsertionPointAtEnd;	// IMP=0x0000000100102fad
- (id)shareItemsForSelection;	// IMP=0x0000000100102d11
- (void)continueLoadingInitialContent:(id)arg1;	// IMP=0x0000000100102bd0
- (void)_updateComposeWebViewPreferencesForRichText:(BOOL)arg1;	// IMP=0x0000000100102b4d
- (void)_finishLoadingEditor;	// IMP=0x0000000100102a95
- (void)_loadHTMLDataIntoWebView:(id)arg1;	// IMP=0x00000001001029fd
- (void)_loadHTMLStringIntoWebView:(id)arg1 baseURL:(id)arg2;	// IMP=0x00000001001028f5
- (id)_loadInitialDocumentOperation;	// IMP=0x000000010010283e
- (id)_textLengthEstimate;	// IMP=0x0000000100102700
- (void)_setUpWebMessageController;	// IMP=0x00000001001025a8

// Remaining properties
@property(retain, nonatomic) ComposeBackEndWK1 *backEnd; // @dynamic backEnd;
@property(retain, nonatomic) EditingWebMessageControllerWK1 *webMessageController; // @dynamic webMessageController;
@property(retain, nonatomic) EditableWebMessageDocumentWK1 *webMessageDocument; // @dynamic webMessageDocument;
@property(retain, nonatomic) WebViewEditorWK1 *webViewEditor; // @dynamic webViewEditor;

@end

