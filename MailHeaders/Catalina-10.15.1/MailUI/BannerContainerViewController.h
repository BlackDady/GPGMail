//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ConversationMember, MessageWebDocumentView, NSArray, NSLayoutConstraint, NSLayoutGuide;

@interface BannerContainerViewController : NSViewController
{
    BOOL _isSingleton;	// 16 = 0x10
    BOOL _loaded;	// 17 = 0x11
    MessageWebDocumentView *_webDocumentView;	// 24 = 0x18
    NSArray *_bannerViewControllers;	// 32 = 0x20
    NSLayoutConstraint *_heightConstraint;	// 40 = 0x28
    NSLayoutGuide *_contentLayoutGuide;	// 48 = 0x30
    NSLayoutConstraint *_leadingMargin;	// 56 = 0x38
}

@property(nonatomic) __weak NSLayoutConstraint *leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) __weak NSLayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) NSArray *bannerViewControllers; // @synthesize bannerViewControllers=_bannerViewControllers;
@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
// - (void).cxx_destruct;	// IMP=0x00000001000c5875
@property(nonatomic) BOOL isSingleton;
- (void)updateBannerDisplay;	// IMP=0x000000010003756e
- (void)addSubviewForBanner:(id)arg1;	// IMP=0x0000000100085cd5
- (void)updateLoaded;	// IMP=0x0000000100036a20
@property(retain) ConversationMember *representedObject;
- (void)viewDidLoad;	// IMP=0x00000001000c5653
- (void)dealloc;	// IMP=0x000000010009098b
- (void)_bannerContainerViewControllerCommonInit;	// IMP=0x00000001000367ad
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100036766
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000c55e2

@end

