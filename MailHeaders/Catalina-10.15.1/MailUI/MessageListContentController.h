//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMessageDataSource-Protocol.h"
#import "MessageListContentProviderDelegate-Protocol.h"

@class MFLibraryStore, MessageListContentProvider, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSPredicate, NSString, NSTimer;
@protocol MCMailAccount, MCMailbox, MessageListContentControllerDelegate;

@interface MessageListContentController : NSObject <MessageListContentProviderDelegate, MCMessageDataSource>
{
    BOOL _isInThreadedMode;	// 8 = 0x8
    BOOL _useLibraryIDNumbering;	// 9 = 0x9
    NSArray *_selectedMailboxes;	// 16 = 0x10
    NSArray *_expandedSelectedMailboxes;	// 24 = 0x18
    NSDictionary *_originalMessageByMessageID;	// 32 = 0x20
    NSDictionary *_messageCopiesByMessageID;	// 40 = 0x28
    BOOL _allMessagesLoaded;	// 48 = 0x30
    BOOL _inSearchMode;	// 49 = 0x31
    BOOL _isSortedAscending;	// 50 = 0x32
    BOOL _displayingToColumn;	// 51 = 0x33
    BOOL _wasPreviouslyOrderedAscending;	// 52 = 0x34
    BOOL _wasPreviouslyInThreadedMode;	// 53 = 0x35
    BOOL _wasPreviouslyIncludingDeleted;	// 54 = 0x36
    BOOL _messageListItemsCanIncludeSortView;	// 55 = 0x37
    BOOL _messageListItemsCanIncludeTopHits;	// 56 = 0x38
    BOOL _messageListHasSearchProgressView;	// 57 = 0x39
    BOOL _forceSearchProgressDisplayVisible;	// 58 = 0x3a
    BOOL _toggleSearchProgressDisplayVisible;	// 59 = 0x3b
    BOOL _toggleSearchProgressDisplayState;	// 60 = 0x3c
    BOOL _searchProgressDisplayDidDeferFinishTaskWithInfo;	// 61 = 0x3d
    BOOL _searchProgressDisplayDidDeferProviderCompletion;	// 62 = 0x3e
    id <MessageListContentControllerDelegate> _delegate;	// 64 = 0x40
    unsigned long long _totalMessageCount;	// 72 = 0x48
    NSArray *_messageListItems;	// 80 = 0x50
    NSString *_sortOrder;	// 88 = 0x58
    long long _activeSearchField;	// 96 = 0x60
    long long _activeSearchTarget;	// 104 = 0x68
    NSString *_messageListType;	// 112 = 0x70
    NSMutableDictionary *_currentProviders;	// 120 = 0x78
    NSMutableDictionary *_bufferedProviders;	// 128 = 0x80
    NSMutableDictionary *_pendingProviders;	// 136 = 0x88
    NSMutableArray *_deferredTopHitsActions;	// 144 = 0x90
    NSString *_lastQueryStringFragment;	// 152 = 0x98
    NSString *_previousSortOrder;	// 160 = 0xa0
    NSPredicate *_previousFilterPredicate;	// 168 = 0xa8
    MFLibraryStore *_searchStore;	// 176 = 0xb0
    MFLibraryStore *_topHitsSearchStore;	// 184 = 0xb8
    NSString *_secondarySortOrder;	// 192 = 0xc0
    NSPredicate *_primitiveFilterPredicate;	// 200 = 0xc8
    NSMutableDictionary *_pendingMessageListItemsByProviderType;	// 208 = 0xd0
    NSMutableDictionary *_messageListItemsByProviderType;	// 216 = 0xd8
    NSTimer *_searchProgressDisplayTimer;	// 224 = 0xe0
}

+ (id)expandedMailboxes:(id)arg1;	// IMP=0x00000001001dc7b4
+ (void)initialize;	// IMP=0x00000001001dc301
+ (id)log;	// IMP=0x00000001001dc2a4
@property(nonatomic) BOOL searchProgressDisplayDidDeferProviderCompletion; // @synthesize searchProgressDisplayDidDeferProviderCompletion=_searchProgressDisplayDidDeferProviderCompletion;
@property(nonatomic) BOOL searchProgressDisplayDidDeferFinishTaskWithInfo; // @synthesize searchProgressDisplayDidDeferFinishTaskWithInfo=_searchProgressDisplayDidDeferFinishTaskWithInfo;
@property(nonatomic) BOOL toggleSearchProgressDisplayState; // @synthesize toggleSearchProgressDisplayState=_toggleSearchProgressDisplayState;
@property(nonatomic) BOOL toggleSearchProgressDisplayVisible; // @synthesize toggleSearchProgressDisplayVisible=_toggleSearchProgressDisplayVisible;
@property(nonatomic) BOOL forceSearchProgressDisplayVisible; // @synthesize forceSearchProgressDisplayVisible=_forceSearchProgressDisplayVisible;
@property(retain, nonatomic) NSTimer *searchProgressDisplayTimer; // @synthesize searchProgressDisplayTimer=_searchProgressDisplayTimer;
@property(nonatomic) BOOL messageListHasSearchProgressView; // @synthesize messageListHasSearchProgressView=_messageListHasSearchProgressView;
@property(nonatomic) BOOL messageListItemsCanIncludeTopHits; // @synthesize messageListItemsCanIncludeTopHits=_messageListItemsCanIncludeTopHits;
@property(nonatomic) BOOL messageListItemsCanIncludeSortView; // @synthesize messageListItemsCanIncludeSortView=_messageListItemsCanIncludeSortView;
@property(retain, nonatomic) NSMutableDictionary *messageListItemsByProviderType; // @synthesize messageListItemsByProviderType=_messageListItemsByProviderType;
@property(retain, nonatomic) NSMutableDictionary *pendingMessageListItemsByProviderType; // @synthesize pendingMessageListItemsByProviderType=_pendingMessageListItemsByProviderType;
@property(retain, nonatomic) NSPredicate *primitiveFilterPredicate; // @synthesize primitiveFilterPredicate=_primitiveFilterPredicate;
@property(copy, nonatomic) NSString *secondarySortOrder; // @synthesize secondarySortOrder=_secondarySortOrder;
@property(retain, nonatomic) MFLibraryStore *topHitsSearchStore; // @synthesize topHitsSearchStore=_topHitsSearchStore;
@property(retain, nonatomic) MFLibraryStore *searchStore; // @synthesize searchStore=_searchStore;
@property(nonatomic) BOOL wasPreviouslyIncludingDeleted; // @synthesize wasPreviouslyIncludingDeleted=_wasPreviouslyIncludingDeleted;
@property(nonatomic) BOOL wasPreviouslyInThreadedMode; // @synthesize wasPreviouslyInThreadedMode=_wasPreviouslyInThreadedMode;
@property(nonatomic) BOOL wasPreviouslyOrderedAscending; // @synthesize wasPreviouslyOrderedAscending=_wasPreviouslyOrderedAscending;
@property(retain, nonatomic) NSPredicate *previousFilterPredicate; // @synthesize previousFilterPredicate=_previousFilterPredicate;
@property(copy, nonatomic) NSString *previousSortOrder; // @synthesize previousSortOrder=_previousSortOrder;
@property(copy, nonatomic) NSString *lastQueryStringFragment; // @synthesize lastQueryStringFragment=_lastQueryStringFragment;
@property(retain, nonatomic) NSMutableArray *deferredTopHitsActions; // @synthesize deferredTopHitsActions=_deferredTopHitsActions;
@property(retain, nonatomic) NSMutableDictionary *pendingProviders; // @synthesize pendingProviders=_pendingProviders;
@property(retain, nonatomic) NSMutableDictionary *bufferedProviders; // @synthesize bufferedProviders=_bufferedProviders;
@property(retain, nonatomic) NSMutableDictionary *currentProviders; // @synthesize currentProviders=_currentProviders;
@property(retain, nonatomic) NSString *messageListType; // @synthesize messageListType=_messageListType;
@property(nonatomic) BOOL displayingToColumn; // @synthesize displayingToColumn=_displayingToColumn;
@property(nonatomic) long long activeSearchTarget; // @synthesize activeSearchTarget=_activeSearchTarget;
@property(nonatomic) long long activeSearchField; // @synthesize activeSearchField=_activeSearchField;
@property(nonatomic) BOOL isSortedAscending; // @synthesize isSortedAscending=_isSortedAscending;
@property(copy, nonatomic) NSString *sortOrder; // @synthesize sortOrder=_sortOrder;
@property(copy, nonatomic) NSArray *messageListItems; // @synthesize messageListItems=_messageListItems;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(nonatomic) BOOL inSearchMode; // @synthesize inSearchMode=_inSearchMode;
@property(nonatomic) BOOL allMessagesLoaded; // @synthesize allMessagesLoaded=_allMessagesLoaded;
@property(nonatomic) __weak id <MessageListContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x00000001001e677e
- (void)_logSearchIntervalFinishedForPendingProviders;	// IMP=0x00000001001e60b8
- (void)_logSignpostForSearchDidFinishUsingProvider:(id)arg1 type:(long long)arg2 itemCount:(unsigned long long)arg3 cancelled:(BOOL)arg4;	// IMP=0x00000001001e5d9c
- (void)_logSignpostForSearchDidReceiveFirstResultsFromProvider:(id)arg1 type:(long long)arg2 itemCount:(unsigned long long)arg3;	// IMP=0x00000001001e5b40
- (void)_logSignpostForSearchDidStartUsingProvider:(id)arg1 type:(long long)arg2 searchPhrase:(id)arg3;	// IMP=0x00000001001e589d
- (unsigned long long)sizeForMessage:(id)arg1;	// IMP=0x00000001001e5879
- (long long)messageFlagsForMessage:(id)arg1 size:(unsigned long long *)arg2 appliedFlagColors:(id *)arg3 conversationFlags:(unsigned long long *)arg4;	// IMP=0x00000001001e5852
- (id)originalOfMessage:(id)arg1;	// IMP=0x00000001001e57ef
- (id)messagesIncludingHiddenCopies:(id)arg1;	// IMP=0x00000001001e57cb
- (id)threadForMessage:(id)arg1;	// IMP=0x00000001001e57c3
- (BOOL)messageIsPartOfAThread:(id)arg1;	// IMP=0x00000001001e57bb
- (id)parentOfMessage:(id)arg1;	// IMP=0x00000001001e57b3
- (id)repliesToMessage:(id)arg1;	// IMP=0x00000001001e57ab
- (void)_deferOrExecuteAction:(id)arg1 forProvider:(id)arg2;	// IMP=0x00000001001e568f
- (void)messageListContentProviderConversationsUpdated:(id)arg1;	// IMP=0x00000001001e559e
- (void)messageListContentProviderDidFinishLoading:(id)arg1;	// IMP=0x00000001001e536f
- (void)_handleMessageListContentProviderDidFinishLoading:(id)arg1;	// IMP=0x00000001001e50f3
- (void)_handleMessageListContentProvider:(id)arg1 didFinishTaskWithInfo:(id)arg2 taskID:(id)arg3;	// IMP=0x00000001001e47e7
- (void)messageListContentProvider:(id)arg1 didFinishTaskWithInfo:(id)arg2 taskID:(id)arg3;	// IMP=0x00000001001e429f
- (void)_adjustContentChangeIndexesForTaskInfo:(id)arg1 providerType:(long long)arg2;	// IMP=0x00000001001e4102
- (BOOL)_requiresReloadAfterUpdateToTaskInfo:(id)arg1 providerType:(long long)arg2 performIncrementalUpdate:(BOOL)arg3;	// IMP=0x00000001001e3fe7
- (unsigned long long)_indexAdjustmentDeltaForContentProviderType:(long long)arg1;	// IMP=0x00000001001e3f72
- (unsigned long long)_indexAdjustmentDeltaForTopHitsContentProviderIncludingMessageCount:(BOOL)arg1;	// IMP=0x00000001001e3f27
- (void)getIndexesOfMessages:(id)arg1 options:(unsigned long long)arg2 completionBlock:(id)arg3;	// IMP=0x00000001001e3e97
- (void)closeAllThreads;	// IMP=0x00000001001e3e08
- (void)openAllThreads;	// IMP=0x00000001001e3d79
- (void)closeThread:(id)arg1 atIndex:(unsigned long long)arg2 selectThread:(BOOL)arg3;	// IMP=0x00000001001e3c9b
- (void)openThread:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000001001e3bca
- (BOOL)needTo;	// IMP=0x00000001001e3b63
- (void)toggleThreadedMode;	// IMP=0x00000001001e3aa7
@property(nonatomic) BOOL isInThreadedMode;
@property(readonly, nonatomic) BOOL isInThreadedModeExcludingSearch;
@property(readonly, nonatomic) BOOL isStillSearching;
- (id)uniquedString:(id)arg1;	// IMP=0x00000001001e38f2
- (void)flushAllCaches;	// IMP=0x00000001001e37e6
- (void)invalidateMessage:(id)arg1;	// IMP=0x00000001001e36da
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(id)arg3;	// IMP=0x00000001001e35ce
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;	// IMP=0x00000001001e34c7
- (void)doCompact;	// IMP=0x00000001001e33bb
- (id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3;	// IMP=0x00000001001e32b4
- (BOOL)undeleteMessages:(id)arg1;	// IMP=0x00000001001e31ad
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;	// IMP=0x00000001001e30a1
- (void)saveSnippetsForMessages:(id)arg1;	// IMP=0x00000001001e2f95
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;	// IMP=0x00000001001e2e89
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;	// IMP=0x00000001001e2d82
- (id)attachmentsDirectoryForMessage:(id)arg1;	// IMP=0x00000001001e2c7b
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x00000001001e2b6f
- (id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;	// IMP=0x00000001001e2a68
- (id)setPersistenceConversationFlags:(unsigned long long)arg1 forMessages:(id)arg2;	// IMP=0x00000001001e2955
- (void)unmuteConversationForMessages:(id)arg1;	// IMP=0x00000001001e2849
- (void)muteConversationForMessages:(id)arg1;	// IMP=0x00000001001e273d
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;	// IMP=0x00000001001e2631
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x00000001001e2525
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;	// IMP=0x00000001001e2419
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000001001e2312
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x00000001001e2206
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;	// IMP=0x00000001001e20ff
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x00000001001e1ff8
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;	// IMP=0x00000001001e1ef1
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7 skipSignatureVerification:(BOOL)arg8;	// IMP=0x00000001001e1de5
- (id)messageForMessageID:(id)arg1;	// IMP=0x00000001001e1cde
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly, nonatomic) id <MCMailAccount> account;
@property(readonly) BOOL isReadOnly;
@property(readonly, copy, nonatomic) NSArray *expandedSelectedMailboxesAllowingSearch;
@property(readonly, copy, nonatomic) NSArray *expandedSelectedMailboxes;
@property(readonly, copy, nonatomic) NSArray *selectedMailboxes;
@property(readonly, copy, nonatomic) NSArray *allMailboxes;
@property(readonly, nonatomic) NSArray *searchStores;
- (id)_searchStoreWithName:(id)arg1 isTopHits:(BOOL)arg2;	// IMP=0x00000001001e1607
@property(readonly, copy, nonatomic) NSArray *stores;
- (id)_storesToRebuild;	// IMP=0x00000001001e12e4
- (void)rebuildTableOfContentsAsynchronously;	// IMP=0x00000001001e11bc
@property(readonly, nonatomic) BOOL canRebuild;
@property(readonly, nonatomic) BOOL canCompact;
- (void)unhideMessages:(id)arg1;	// IMP=0x00000001001e0ead
- (void)hideMessages:(id)arg1 selectingNextMessage:(id)arg2 withAnimationOptions:(unsigned long long)arg3 completionHandler:(id)arg4;	// IMP=0x00000001001e0da0
@property(readonly, nonatomic) BOOL messageListHasTopHits;
- (id)_searchScopeMailboxesForCriterion:(id)arg1;	// IMP=0x00000001001e0a57
- (BOOL)_messageListShouldShowTopHitsForCriterion:(id)arg1;	// IMP=0x00000001001e06e4
@property(readonly, nonatomic) unsigned long long unreadCount;
- (void)setMailboxes:(id)arg1 sortOrder:(id)arg2 isSortedAscending:(BOOL)arg3 isInThreadedMode:(BOOL)arg4 initialViewingState:(id)arg5 filterPredicate:(id)arg6;	// IMP=0x00000001001e0150
- (id)_messageListTypeFromMailboxes:(id)arg1;	// IMP=0x00000001001dfc6b
@property(retain, nonatomic) NSPredicate *filterPredicate;
- (BOOL)isSortedByDateReceived;	// IMP=0x00000001001dfb6e
- (void)setSortOrder:(id)arg1 ascending:(BOOL)arg2 viewingState:(id)arg3;	// IMP=0x00000001001df982
@property(readonly, nonatomic) BOOL selectionIncludesSmartMailbox;
@property(readonly, copy, nonatomic) NSArray *openThreads;
- (void)refreshMessageListItems;	// IMP=0x00000001001df830
- (void)_updateMessageListItemsForProviderType:(long long)arg1;	// IMP=0x00000001001df384
- (BOOL)_shouldIncludeSearchProgressView;	// IMP=0x00000001001df1b3
- (id)messageListItemsInRange:(struct _NSRange)arg1;	// IMP=0x00000001001df14f
- (id)messageListItemsAtIndexes:(id)arg1;	// IMP=0x00000001001df0d5
- (void)_setMessages:(id)arg1 forProviderType:(long long)arg2;	// IMP=0x00000001001deec5
- (void)_setPendingMessageListItems:(id)arg1 forProviderType:(long long)arg2;	// IMP=0x00000001001dee08
- (unsigned long long)_countOfMessagesForProviderType:(long long)arg1;	// IMP=0x00000001001ded66
- (id)messageThreadAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001ded16
- (id)messageAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001decc6
- (id)messageListItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001dec49
@property(readonly, copy, nonatomic) NSArray *allMessages;
- (BOOL)supportsSearching;	// IMP=0x00000001001debde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001debd3
- (BOOL)shouldShowRecipientForMailboxes:(id)arg1;	// IMP=0x00000001001dea75
- (id)criterionForAttachmentType:(id)arg1;	// IMP=0x00000001001de9e7
- (id)queryStringFragmentFromSuggestions:(id)arg1;	// IMP=0x00000001001de7e5
- (void)searchForSuggestions:(id)arg1 in:(long long)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4 isInThreadedMode:(BOOL)arg5 viewingState:(id)arg6 filterPredicate:(id)arg7;	// IMP=0x00000001001de51f
- (void)clearPreviousQueryString;	// IMP=0x00000001001de50b
- (void)_searchForCriterion:(id)arg1 isInThreadedMode:(BOOL)arg2 viewingState:(id)arg3 filterPredicate:(id)arg4 searchPhrase:(id)arg5;	// IMP=0x00000001001ddefd
- (void)_clearTopHitsState;	// IMP=0x00000001001ddcca
- (void)clearSearchWithViewingState:(id)arg1;	// IMP=0x00000001001ddbd7
- (void)_validateTableViewMessageListItemsCountWithIdentifier:(id)arg1;	// IMP=0x00000001001dd926
- (id)_providerAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001dd85f
- (void)_clearPendingProvider:(id)arg1;	// IMP=0x00000001001dd790
- (long long)_typeForCurrentProvider:(id)arg1;	// IMP=0x00000001001dd62b
- (long long)_typeForBufferedProvider:(id)arg1;	// IMP=0x00000001001dd4c3
- (id)_bufferedProviderForType:(long long)arg1;	// IMP=0x00000001001dd43c
@property(readonly, nonatomic) MessageListContentProvider *topHitsProvider;
@property(readonly, nonatomic) MessageListContentProvider *mainProvider;
- (void)_clearProvidersForType:(long long)arg1;	// IMP=0x00000001001dd24f
- (void)_makeBufferedProviderCurrentForType:(long long)arg1;	// IMP=0x00000001001dd0b8
- (void)_setBufferedProvider:(id)arg1 forType:(long long)arg2;	// IMP=0x00000001001dcfa0
- (void)_doBackgroundReleaseHackForObject:(id)arg1;	// IMP=0x00000001001dcec8
- (void)_updateSearchProgressDisplayVisibility;	// IMP=0x00000001001dcc15
- (void)_searchProgressDisplayTimerDidFire:(id)arg1;	// IMP=0x00000001001dcbaa
- (void)_stopSearchProgressDisplayTimer;	// IMP=0x00000001001dcb20
- (void)_startSearchProgressDisplayTimer;	// IMP=0x00000001001dca40
- (void)unregisterForNotifications;	// IMP=0x00000001001dc65f
- (id)init;	// IMP=0x00000001001dc373

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

