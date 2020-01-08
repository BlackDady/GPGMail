//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailUIFW/NSCopying-Protocol.h>
#import <MailUIFW/NSSecureCoding-Protocol.h>

@class MUIRemoteImageCollector, NSArray, NSDictionary, NSError, NSMutableDictionary, NSString, NSURL;

@interface MUIWebDocument : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_html;	// 8 = 0x8
    NSMutableDictionary *_jsDocumentContext;	// 16 = 0x10
    BOOL _isEncrypted;	// 24 = 0x18
    BOOL _hasEncryptedDescendantPart;	// 25 = 0x19
    BOOL _isSigned;	// 26 = 0x1a
    BOOL _hasBlockedMessageContent;	// 27 = 0x1b
    NSArray *_attachments;	// 32 = 0x20
    long long _imageScale;	// 40 = 0x28
    Class _webAttachmentClass;	// 48 = 0x30
    NSArray *_signers;	// 56 = 0x38
    NSArray *_signerNames;	// 64 = 0x40
    id _URLClickObserver;	// 72 = 0x48
    NSURL *_baseURL;	// 80 = 0x50
    NSDictionary *_dataDetectorsContext;	// 88 = 0x58
    NSError *_smimeError;	// 96 = 0x60
    long long _messageContentTypeToBlock;	// 104 = 0x68
    MUIRemoteImageCollector *_remoteImageCollector;	// 112 = 0x70
    unsigned long long _originalEncoding;	// 120 = 0x78
}

+ (BOOL)supportsSecureCoding;	// IMP=0x0000000000026146
@property(nonatomic) unsigned long long originalEncoding; // @synthesize originalEncoding=_originalEncoding;
@property(retain, nonatomic) MUIRemoteImageCollector *remoteImageCollector; // @synthesize remoteImageCollector=_remoteImageCollector;
@property(nonatomic) long long messageContentTypeToBlock; // @synthesize messageContentTypeToBlock=_messageContentTypeToBlock;
@property(nonatomic) BOOL hasBlockedMessageContent; // @synthesize hasBlockedMessageContent=_hasBlockedMessageContent;
@property(retain, nonatomic) NSError *smimeError; // @synthesize smimeError=_smimeError;
@property(copy, nonatomic) NSDictionary *dataDetectorsContext; // @synthesize dataDetectorsContext=_dataDetectorsContext;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) id URLClickObserver; // @synthesize URLClickObserver=_URLClickObserver;
@property(nonatomic) BOOL isSigned; // @synthesize isSigned=_isSigned;
@property(nonatomic) BOOL hasEncryptedDescendantPart; // @synthesize hasEncryptedDescendantPart=_hasEncryptedDescendantPart;
@property(nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(copy, nonatomic) NSArray *signerNames; // @synthesize signerNames=_signerNames;
@property(copy, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(nonatomic) Class webAttachmentClass; // @synthesize webAttachmentClass=_webAttachmentClass;
@property(nonatomic) long long imageScale; // @synthesize imageScale=_imageScale;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSString *html; // @synthesize html=_html;
// - (void).cxx_destruct;	// IMP=0x00000000000108d1
- (id)attachmentForContentID:(id)arg1;	// IMP=0x0000000000026552
- (id)description;	// IMP=0x00000000000264c5
- (id)_defaultDocumentHTML;	// IMP=0x0000000000002b77
- (void)setValueInJsDocumentContext:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000002e03
@property(readonly, copy, nonatomic) NSDictionary *jsDocumentContext;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000263b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026316
- (void)_muiWebDocumentCommonInit;	// IMP=0x0000000000002b96
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026151
- (id)init;	// IMP=0x0000000000002a9b

@end

