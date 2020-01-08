//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class BannerBackgroundView, BannerContainerViewController, ConversationMember, MUIWebDocument, MessageWebDocumentView, NSColor, NSLayoutConstraint, NSLayoutGuide, NSView;

@interface BannerViewController : NSViewController
{
    NSLayoutGuide *_leadingMarginGuide;	// 16 = 0x10
    BOOL _loaded;	// 24 = 0x18
    BOOL _wantsDisplay;	// 25 = 0x19
    BOOL _viewIsLoaded;	// 26 = 0x1a
    BannerContainerViewController *_container;	// 32 = 0x20
    NSColor *_backgroundColor;	// 40 = 0x28
    NSView *_leadingView;	// 48 = 0x30
    NSLayoutConstraint *_leadingConstraint;	// 56 = 0x38
}

+ (id)keyPathsForValuesAffectingWebDocument;	// IMP=0x00000001000c5a5d
+ (id)keyPathsForValuesAffectingWebDocumentView;	// IMP=0x00000001000c59ed
@property(nonatomic) __weak NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(nonatomic) __weak NSView *leadingView; // @synthesize leadingView=_leadingView;
@property(nonatomic) BOOL viewIsLoaded; // @synthesize viewIsLoaded=_viewIsLoaded;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BannerContainerViewController *container; // @synthesize container=_container;
// - (void).cxx_destruct;	// IMP=0x00000001000c5cfd
- (void)updateViewConstraints;	// IMP=0x00000001000c5b35
@property(nonatomic) __weak NSLayoutGuide *leadingMarginGuide;
- (void)updateWantsDisplay;	// IMP=0x00000001000c5a83
- (void)updateBannerContents;	// IMP=0x00000001000c5a7d
@property(nonatomic) BOOL wantsDisplay;
@property(nonatomic) BOOL loaded;
@property(readonly, nonatomic) MUIWebDocument *webDocument;
@property(readonly, nonatomic) __weak MessageWebDocumentView *webDocumentView;
@property(retain) ConversationMember *representedObject;
@property(retain) BannerBackgroundView *view;
@property(readonly, nonatomic) double bannerHeight;
- (void)_bannerViewControllerCommonInit;	// IMP=0x00000001000c598d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000c5946
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000c58d5

@end

