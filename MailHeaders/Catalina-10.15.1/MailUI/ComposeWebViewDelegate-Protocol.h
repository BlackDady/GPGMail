//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AttachmentViewController, ComposeWebView, NSString;

@protocol ComposeWebViewDelegate <NSObject>

@optional
- (void)composeWebView:(ComposeWebView *)arg1 attachment:(AttachmentViewController *)arg2 changedIdentifierTo:(NSString *)arg3;
- (void)composeWebViewDidModifySignature:(ComposeWebView *)arg1;
- (void)composeWebViewDidChange:(ComposeWebView *)arg1;
@end

