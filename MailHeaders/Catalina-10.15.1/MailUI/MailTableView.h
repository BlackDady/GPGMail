//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import "NSScrollViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString;
@protocol MailTableViewDelegate;

@interface MailTableView : NSTableView <NSScrollViewDelegate>
{
    BOOL _keyEventHandled;	// 136 = 0x88
    BOOL _delegateProvidesDragImage;	// 137 = 0x89
    BOOL _delegateDoesCommandBySelector;	// 138 = 0x8a
    BOOL _delegateDragWillEndOperation;	// 139 = 0x8b
    BOOL _delegateDraggedImageMovedTo;	// 140 = 0x8c
    BOOL _delegateRespondsToWillDrawRowsInRange;	// 141 = 0x8d
    BOOL _delegateApprovesScrolling;	// 142 = 0x8e
    BOOL _delegateRespondsToMouseDown;	// 143 = 0x8f
    BOOL _delegateRespondsToWillMoveToWindow;	// 144 = 0x90
    BOOL _delegateRespondsToDidMoveToWindow;	// 145 = 0x91
    BOOL _delegateRespondsToWillStartLiveResize;	// 146 = 0x92
    BOOL _delegateRespondsToDidEndLiveResize;	// 147 = 0x93
    BOOL _delegateRespondsToDidBecomeFirstResponder;	// 148 = 0x94
    BOOL _delegateRespondsToDidResignFirstResponder;	// 149 = 0x95
    BOOL _delegateRespondsToUserDidScrollInTableView;	// 150 = 0x96
    BOOL _delegateRespondsToPrepareContentInRange;	// 151 = 0x97
    BOOL _delegateRespondsToAccessibilityUILinkedViewsForMailTableView;	// 152 = 0x98
    BOOL _delegateRespondsToAccessibilityRowHeaderUIElements;	// 153 = 0x99
    BOOL _delegateRespondsToValidRequestorForSendTypeReturnType;	// 154 = 0x9a
    BOOL _didLazyLoadMenu;	// 155 = 0x9b
    BOOL _delegateRespondsToFloatingHeaderHeight;	// 156 = 0x9c
    NSLayoutConstraint *_widthConstraint;	// 160 = 0xa0
}

@property(nonatomic) BOOL delegateRespondsToFloatingHeaderHeight; // @synthesize delegateRespondsToFloatingHeaderHeight=_delegateRespondsToFloatingHeaderHeight;
@property(nonatomic) BOOL didLazyLoadMenu; // @synthesize didLazyLoadMenu=_didLazyLoadMenu;
@property(nonatomic) BOOL delegateRespondsToValidRequestorForSendTypeReturnType; // @synthesize delegateRespondsToValidRequestorForSendTypeReturnType=_delegateRespondsToValidRequestorForSendTypeReturnType;
@property(nonatomic) BOOL delegateRespondsToAccessibilityRowHeaderUIElements; // @synthesize delegateRespondsToAccessibilityRowHeaderUIElements=_delegateRespondsToAccessibilityRowHeaderUIElements;
@property(nonatomic) BOOL delegateRespondsToAccessibilityUILinkedViewsForMailTableView; // @synthesize delegateRespondsToAccessibilityUILinkedViewsForMailTableView=_delegateRespondsToAccessibilityUILinkedViewsForMailTableView;
@property(nonatomic) BOOL delegateRespondsToPrepareContentInRange; // @synthesize delegateRespondsToPrepareContentInRange=_delegateRespondsToPrepareContentInRange;
@property(nonatomic) BOOL delegateRespondsToUserDidScrollInTableView; // @synthesize delegateRespondsToUserDidScrollInTableView=_delegateRespondsToUserDidScrollInTableView;
@property(nonatomic) BOOL delegateRespondsToDidResignFirstResponder; // @synthesize delegateRespondsToDidResignFirstResponder=_delegateRespondsToDidResignFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidBecomeFirstResponder; // @synthesize delegateRespondsToDidBecomeFirstResponder=_delegateRespondsToDidBecomeFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidEndLiveResize; // @synthesize delegateRespondsToDidEndLiveResize=_delegateRespondsToDidEndLiveResize;
@property(nonatomic) BOOL delegateRespondsToWillStartLiveResize; // @synthesize delegateRespondsToWillStartLiveResize=_delegateRespondsToWillStartLiveResize;
@property(nonatomic) BOOL delegateRespondsToDidMoveToWindow; // @synthesize delegateRespondsToDidMoveToWindow=_delegateRespondsToDidMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToWillMoveToWindow; // @synthesize delegateRespondsToWillMoveToWindow=_delegateRespondsToWillMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToMouseDown; // @synthesize delegateRespondsToMouseDown=_delegateRespondsToMouseDown;
@property(nonatomic) BOOL delegateApprovesScrolling; // @synthesize delegateApprovesScrolling=_delegateApprovesScrolling;
@property(nonatomic) BOOL delegateRespondsToWillDrawRowsInRange; // @synthesize delegateRespondsToWillDrawRowsInRange=_delegateRespondsToWillDrawRowsInRange;
@property(nonatomic) BOOL delegateDraggedImageMovedTo; // @synthesize delegateDraggedImageMovedTo=_delegateDraggedImageMovedTo;
@property(nonatomic) BOOL delegateDragWillEndOperation; // @synthesize delegateDragWillEndOperation=_delegateDragWillEndOperation;
@property(nonatomic) BOOL delegateDoesCommandBySelector; // @synthesize delegateDoesCommandBySelector=_delegateDoesCommandBySelector;
@property(nonatomic) BOOL delegateProvidesDragImage; // @synthesize delegateProvidesDragImage=_delegateProvidesDragImage;
@property BOOL keyEventHandled; // @synthesize keyEventHandled=_keyEventHandled;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
// - (void).cxx_destruct;	// IMP=0x00000001001cd02a
- (id)accessibilityRowHeaderUIElements;	// IMP=0x00000001001cccef
- (id)accessibilityLinkedUIElements;	// IMP=0x00000001001ccc78
- (void)prepareContentInRect:(struct CGRect)arg1;	// IMP=0x00000001001ccbab
- (void)didScrollInScrollView:(id)arg1;	// IMP=0x00000001001ccb40
- (void)scrollRowToVisible:(long long)arg1 position:(long long)arg2;	// IMP=0x000000010003dce7
- (void)showSelectionAndCenter:(BOOL)arg1;	// IMP=0x000000010003dca0
@property(readonly, nonatomic) BOOL isSelectionVisible;
@property(readonly, nonatomic) long long lastRowInSelection;
@property(readonly, nonatomic) long long firstRowInSelection;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;	// IMP=0x00000001001cc953
- (BOOL)resignFirstResponder;	// IMP=0x000000010004a1bf
- (BOOL)becomeFirstResponder;	// IMP=0x000000010002999b
- (void)viewDidMoveToSuperview;	// IMP=0x00000001001cc907
- (void)viewWillMoveToSuperview:(id)arg1;	// IMP=0x00000001001cc895
- (void)viewDidMoveToWindow;	// IMP=0x000000010001e098
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x000000010001dff4
- (void)_logSpotlightInfoForClickedMessage;	// IMP=0x00000001001cc2de
- (void)mouseDown:(id)arg1;	// IMP=0x0000000100046bd8
- (void)_highlightRect:(struct CGRect)arg1 withColor:(id)arg2 usingStyle:(long long)arg3;	// IMP=0x00000001001cc129
@property(readonly, nonatomic) BOOL shouldUseSecondaryHighlightColor;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;	// IMP=0x00000001001cbf9d
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;	// IMP=0x00000001001cbf2f
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;	// IMP=0x000000010008b490
- (void)scrollRowToVisible:(long long)arg1;	// IMP=0x00000001000489ea
- (id)menu;	// IMP=0x000000010008e254
@property __weak id <MailTableViewDelegate> delegate;
- (void)keyDown:(id)arg1;	// IMP=0x000000010007aab8
- (void)insertText:(id)arg1;	// IMP=0x00000001001cbefa
- (void)doCommandBySelector:(SEL)arg1;	// IMP=0x000000010007abac
- (BOOL)respondsToSelector:(SEL)arg1;	// IMP=0x00000001001cbeb6
- (void)viewDidEndLiveResize;	// IMP=0x00000001001cbe31
- (void)viewWillStartLiveResize;	// IMP=0x00000001001cbdac
- (void)sizeTableHeaderCellsToFit;	// IMP=0x00000001001cb84f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100013314
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001cb7ed
- (void)_mailTableViewCommonInit;	// IMP=0x0000000100013a9e
- (id)menuForEvent:(id)arg1;	// IMP=0x000000010008e1a8

// Remaining properties
@property(setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property(setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

