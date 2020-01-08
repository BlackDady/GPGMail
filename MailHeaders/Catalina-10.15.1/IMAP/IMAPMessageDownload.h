//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPCompoundDownload.h>

@class MCMessage, MCMimePart;
@protocol IMAPMessage;

@interface IMAPMessageDownload : IMAPCompoundDownload
{
    MCMessage<IMAPMessage> *_message;	// 8 = 0x8
    unsigned int _usingPartialDownloads:1;	// 16 = 0x10
    unsigned int _startedFetch:1;	// 16 = 0x10
    unsigned int _fetchingBodyText:1;	// 16 = 0x10
    unsigned int _doneAddingSubdownloads:1;	// 16 = 0x10
    BOOL _allowsPartialDownloads;	// 17 = 0x11
    BOOL _writesCacheFile;	// 18 = 0x12
    BOOL _dataWritten;	// 19 = 0x13
    MCMimePart *_topLevelPart;	// 24 = 0x18
}

@property BOOL dataWritten; // @synthesize dataWritten=_dataWritten;
@property BOOL writesCacheFile; // @synthesize writesCacheFile=_writesCacheFile;
@property BOOL allowsPartialDownloads; // @synthesize allowsPartialDownloads=_allowsPartialDownloads;
@property(retain) MCMimePart *topLevelPart; // @synthesize topLevelPart=_topLevelPart;
- (void).cxx_destruct;	// IMP=0x00000000000144b2
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;	// IMP=0x000000000001027d
- (void)_addMimeSubdownloadsToPipeline:(id)arg1 withCache:(id)arg2;	// IMP=0x0000000000014569
- (void)processResults;	// IMP=0x0000000000012e00
- (BOOL)handleFetchResult:(id)arg1;	// IMP=0x0000000000011d4f
- (BOOL)isComplete;	// IMP=0x0000000000013dae
@property(readonly, nonatomic) BOOL isPartial;
- (id)collectDataAndWriteToDisk:(BOOL)arg1;	// IMP=0x00000000000444c7
- (id)data;	// IMP=0x00000000000141f7
@property(retain) MCMessage<IMAPMessage> *message;
- (id)createCopy;	// IMP=0x000000000004436d
- (id)initWithMessage:(id)arg1;	// IMP=0x00000000000100ce
- (void)dealloc;	// IMP=0x0000000000014442

@end

