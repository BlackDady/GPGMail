//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LoadBlockedMessageContentBannerViewController.h"

@class NSButton, NSImageView, NSTextField;

@interface CertificateBannerViewController : LoadBlockedMessageContentBannerViewController
{
    NSImageView *_certificateImage;	// 16 = 0x10
    NSTextField *_messageField;	// 24 = 0x18
    NSButton *_helpButton;	// 32 = 0x20
}

@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak NSImageView *certificateImage; // @synthesize certificateImage=_certificateImage;
// - (void).cxx_destruct;	// IMP=0x00000001000cbc00
- (void)showDetails:(id)arg1;	// IMP=0x00000001000cb7dc
- (void)updateBannerContents;	// IMP=0x00000001000cb5b9
- (void)updateWantsDisplay;	// IMP=0x000000010003c8a1
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003e8af
- (void)setRepresentedObject:(id)arg1;	// IMP=0x000000010003c7b8
- (BOOL)shouldDisplayToLoadBlockedContent;	// IMP=0x00000001000cb5b1
- (void)dealloc;	// IMP=0x0000000100090da7

@end

