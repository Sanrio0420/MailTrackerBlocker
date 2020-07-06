//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSTask.h>

#import <MailFW/MCBodyTracker-Protocol.h>
#import <MailFW/MFEWSBodyFetchOperationDelegate-Protocol.h>
#import <MailFW/MFEWSBodyPersistOperationDelegate-Protocol.h>

@class MFEWSBodyFetchOperation, MFEWSBodyPersistOperation, NSMutableDictionary, NSMutableSet, NSString;

@interface MFEWSVisibleBodyFetchTask : MFEWSTask <MFEWSBodyFetchOperationDelegate, MFEWSBodyPersistOperationDelegate, MCBodyTracker>
{
    MFEWSBodyFetchOperation *_fetchOperation;	// 8 = 0x8
    MFEWSBodyPersistOperation *_persistOperation;	// 16 = 0x10
    NSMutableSet *_messagesToFetch;	// 24 = 0x18
    NSMutableDictionary *_fetchedBodiesByMessage;	// 32 = 0x20
    NSMutableDictionary *_fetchedCalendarEventsByMessage;	// 40 = 0x28
}

// - (void).cxx_destruct;	// IMP=0x00000000000ab447
- (void)bodyTracker:(id)arg1 didCacheBodiesForMessages:(id)arg2;	// IMP=0x00000000000ab18c
- (void)bodyPersistOperation:(id)arg1 didPersistBodyForMessages:(id)arg2;	// IMP=0x00000000000aaea6
- (void)bodyFetchOperation:(id)arg1 didFetchBodiesByMessage:(id)arg2 calendarEventsByMessage:(id)arg3 missedMessages:(id)arg4;	// IMP=0x00000000000aaab6
- (void)operationFinished:(id)arg1;	// IMP=0x00000000000aa9e8
- (id)nextPersistenceOperation;	// IMP=0x00000000000aa920
- (id)nextNetworkOperation;	// IMP=0x00000000000aa840
- (void)recalculatePriorities;	// IMP=0x00000000000aa73d
- (void)cacheVisibleMessages:(id)arg1;	// IMP=0x00000000000aa5fb
@property(retain, nonatomic) MFEWSBodyPersistOperation *persistOperation;
@property(retain, nonatomic) MFEWSBodyFetchOperation *fetchOperation;
- (id)initWithAccountName:(id)arg1;	// IMP=0x00000000000aa3cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
