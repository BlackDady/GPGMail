//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailUIFW/NSObject-Protocol.h>

@class CNAutocompleteResult, CNAutocompleteResultWindow, NSImage, NSString, NSView;

@protocol CNAutocompleteResultWindowDelegate <NSObject>

@optional
- (NSImage *)iconTypeForResult:(CNAutocompleteResult *)arg1 selected:(BOOL)arg2;
- (NSString *)addressStringForResult:(CNAutocompleteResult *)arg1;
- (NSString *)accountStringForResult:(CNAutocompleteResult *)arg1;
- (void)didSelectResult:(CNAutocompleteResult *)arg1;
- (NSString *)headerForNilPrefixResults;
- (NSString *)currentPrefix;
- (NSView *)viewForResult:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (void)selectedResult:(id)arg1;
- (void)autocompleteResultWindow:(CNAutocompleteResultWindow *)arg1 didSelectResult:(CNAutocompleteResult *)arg2;
@end
