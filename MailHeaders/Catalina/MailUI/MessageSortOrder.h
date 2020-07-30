//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MessageSortOrder : NSObject <NSCopying>
{
    BOOL _ascending;	// 8 = 0x8
    NSString *_sortOrderString;	// 16 = 0x10
}

@property(readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(readonly, copy, nonatomic) NSString *sortOrderString; // @synthesize sortOrderString=_sortOrderString;
// - (void).cxx_destruct;	// IMP=0x0000000100200bd7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100200bb1
- (id)init;	// IMP=0x0000000100200ae2
- (id)initWithSortOrderString:(id)arg1 ascending:(BOOL)arg2;	// IMP=0x0000000100200a64

@end
