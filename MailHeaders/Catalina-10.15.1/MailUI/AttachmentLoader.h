//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"

@class AttachmentViewController, MCActivityMonitor, MCAttachment, NSString, NSURL, NSWindow;

@interface AttachmentLoader : NSObject <MCActivityTarget>
{
    MCActivityMonitor *_activityMonitor;	// 8 = 0x8
    MCAttachment *_attachment;	// 16 = 0x10
    NSWindow *_window;	// 24 = 0x18
    AttachmentViewController *_attachmentController;	// 32 = 0x20
    unsigned long long _reason;	// 40 = 0x28
    NSString *_attachmentDirectory;	// 48 = 0x30
    NSURL *_applicationURL;	// 56 = 0x38
    NSString *_savePath;	// 64 = 0x40
}

+ (BOOL)loadAttachmentForSavingWithViewController:(id)arg1 window:(id)arg2 path:(id)arg3;	// IMP=0x00000001000af0cc
+ (BOOL)loadAttachmentForViewController:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;	// IMP=0x00000001000aefc1
+ (BOOL)loadAttachment:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;	// IMP=0x00000001000aeed1
@property(readonly, copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(readonly, nonatomic) NSURL *applicationURL; // @synthesize applicationURL=_applicationURL;
@property(readonly, nonatomic) NSString *attachmentDirectory; // @synthesize attachmentDirectory=_attachmentDirectory;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) AttachmentViewController *attachmentController; // @synthesize attachmentController=_attachmentController;
@property(readonly, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) MCAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain) MCActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
// - (void).cxx_destruct;	// IMP=0x00000001000affa6
- (void)_startBackgroundThread;	// IMP=0x00000001000afd89
- (void)_monitorQuit:(id)arg1;	// IMP=0x00000001000afc96
- (void)_loadAttachmentData;	// IMP=0x00000001000af71d
- (void)dealloc;	// IMP=0x00000001000af693
- (void)_attachmentLoaderCommonInitWithAttachment:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00000001000af61c
- (id)_initWithAttachmentController:(id)arg1 window:(id)arg2 savePath:(id)arg3;	// IMP=0x00000001000af53f
- (id)_initWithAttachmentController:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 attachmentDirectory:(id)arg4 application:(id)arg5;	// IMP=0x00000001000af366
- (id)_initWithAttachment:(id)arg1 window:(id)arg2 reason:(unsigned long long)arg3 attachmentDirectory:(id)arg4 application:(id)arg5;	// IMP=0x00000001000af1c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

