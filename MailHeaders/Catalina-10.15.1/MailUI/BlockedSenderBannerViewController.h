//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LoadBlockedMessageContentBannerViewController.h"

@class NSButton, NSTextField;

@interface BlockedSenderBannerViewController : LoadBlockedMessageContentBannerViewController
{
    NSTextField *_messageField;	// 16 = 0x10
    NSButton *_moveMessageButton;	// 24 = 0x18
    NSButton *_notJunkButton;	// 32 = 0x20
}

@property(retain, nonatomic) NSButton *notJunkButton; // @synthesize notJunkButton=_notJunkButton;
@property(retain, nonatomic) NSButton *moveMessageButton; // @synthesize moveMessageButton=_moveMessageButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
// - (void).cxx_destruct;	// IMP=0x00000001000c6b31
- (void)updateBannerContents;	// IMP=0x00000001000c69f0
- (void)updateWantsDisplay;	// IMP=0x00000001000c6997
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000c68d0
- (void)setRepresentedObject:(id)arg1;	// IMP=0x00000001000c67e7
- (BOOL)shouldDisplayToLoadBlockedContent;	// IMP=0x00000001000c67df
- (void)dealloc;	// IMP=0x00000001000c6763

@end

