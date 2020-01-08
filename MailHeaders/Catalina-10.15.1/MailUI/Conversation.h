//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class MFCriterion, NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface Conversation : NSObject <NSCopying>
{
    NSMutableArray *_primitiveOrderedConversationMembers;	// 8 = 0x8
    NSArray *_orderedConversationMembers;	// 16 = 0x10
    NSMutableDictionary *_conversationMemberByMessage;	// 24 = 0x18
    NSMutableDictionary *_conversationMemberByMessageID;	// 32 = 0x20
    NSMutableArray *_asyncLoadConversationMembersCompletionHandlers;	// 40 = 0x28
    BOOL _conversationMembersLoaded;	// 48 = 0x30
    BOOL _isRegisteredForConversationUpdates;	// 49 = 0x31
    long long _conversationID;	// 56 = 0x38
    unsigned long long _conversationFlags;	// 64 = 0x40
    MFCriterion *_mailboxCriterion;	// 72 = 0x48
    unsigned long long _initialReadingMemberIndex;	// 80 = 0x50
    NSString *_subject;	// 88 = 0x58
    long long _loadBehavior;	// 96 = 0x60
    NSArray *_initialMessages;	// 104 = 0x68
    NSSet *_initialPrimaryMessages;	// 112 = 0x70
}

+ (BOOL)automaticallyNotifiesObserversOfOrderedConversationMembers;	// IMP=0x00000001000354c9
+ (id)keyPathsForValuesAffectingMessages;	// IMP=0x000000010010df58
+ (id)log;	// IMP=0x000000010010dd4c
@property(nonatomic) BOOL isRegisteredForConversationUpdates; // @synthesize isRegisteredForConversationUpdates=_isRegisteredForConversationUpdates;
@property(nonatomic) BOOL conversationMembersLoaded; // @synthesize conversationMembersLoaded=_conversationMembersLoaded;
@property(copy, nonatomic) NSSet *initialPrimaryMessages; // @synthesize initialPrimaryMessages=_initialPrimaryMessages;
@property(copy, nonatomic) NSArray *initialMessages; // @synthesize initialMessages=_initialMessages;
@property(nonatomic) long long loadBehavior; // @synthesize loadBehavior=_loadBehavior;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) unsigned long long initialReadingMemberIndex; // @synthesize initialReadingMemberIndex=_initialReadingMemberIndex;
@property(readonly, nonatomic) MFCriterion *mailboxCriterion; // @synthesize mailboxCriterion=_mailboxCriterion;
@property(nonatomic) unsigned long long conversationFlags; // @synthesize conversationFlags=_conversationFlags;
@property(nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
// - (void).cxx_destruct;	// IMP=0x000000010010f26f
- (void)unhideMessages:(id)arg1;	// IMP=0x000000010010ef8f
- (void)hideMessages:(id)arg1;	// IMP=0x000000010010ed1a
- (void)markConversationMembersAsRead:(id)arg1;	// IMP=0x0000000100034af7
- (void)_blockedSendersDidChange:(id)arg1;	// IMP=0x000000010010eabb
- (void)_conversationFlagsChanged:(id)arg1;	// IMP=0x000000010010e78c
- (void)_conversationMessagesFlagsChanged:(id)arg1;	// IMP=0x0000000100069aa9
- (void)_conversationMessagesCompacted:(id)arg1;	// IMP=0x0000000100069ff9
- (void)_conversationMessagesUpdated:(id)arg1;	// IMP=0x0000000100066bb5
- (void)_conversationsUpdated:(id)arg1;	// IMP=0x0000000100067b54
- (void)_conversationMessagesLoaded:(id)arg1;	// IMP=0x000000010003f870
- (void)_updateConversationMembersWithAddedMessages:(id)arg1 primaryMessages:(id)arg2;	// IMP=0x0000000100032f1f
- (void)_removeMessage:(id)arg1 fromConversationMember:(id)arg2;	// IMP=0x000000010006a3c7
- (void)_addMessage:(id)arg1 isPrimary:(BOOL)arg2 toConversationMember:(id)arg3;	// IMP=0x0000000100049403
- (void)_removeConversationMember:(id)arg1;	// IMP=0x000000010010e4b4
- (void)_addNewConversationMember:(id)arg1;	// IMP=0x00000001000341ad
- (void)_updateInitialReadingMemberIndex;	// IMP=0x000000010010e2ed
- (void)_updateOrderedConversationMembers;	// IMP=0x000000010003470f
- (void)_quickFetchTimeout;	// IMP=0x000000010010e167
- (void)loadConversationMembersForDisplay;	// IMP=0x000000010010e037
- (void)asyncLoadConversationMembers:(id)arg1;	// IMP=0x00000001000329cf
- (id)_subjectConversationMember;	// IMP=0x000000010010dfe7
- (void)_updateSubject;	// IMP=0x000000010010df78
@property(copy, nonatomic) NSArray *orderedConversationMembers;
@property(readonly, copy, nonatomic) NSSet *messages;
- (id)_orderingComparator;	// IMP=0x0000000100034499
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000696aa
- (id)description;	// IMP=0x000000010010de92
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100076288
- (unsigned long long)hash;	// IMP=0x0000000100076276
- (BOOL)isEqual:(id)arg1;	// IMP=0x00000001000352b8
- (void)dealloc;	// IMP=0x0000000100048c76
- (id)initWithConversationID:(long long)arg1 mailboxCriterion:(id)arg2 initialMessages:(id)arg3 initialPrimaryMessages:(id)arg4 loadBehavior:(long long)arg5;	// IMP=0x00000001000314b3
- (id)init;	// IMP=0x000000010010ddc3

@end

