//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MFAccount, NSMenuItem;

@protocol AccountStatusDataSourceDelegate <NSObject>

@optional
- (void)configureMenuItem:(NSMenuItem *)arg1 forAccount:(MFAccount *)arg2;
- (void)showConnectionDoctor:(id)arg1;
- (void)editServerList:(id)arg1 selectedAccount:(MFAccount *)arg2;
- (void)toggleAccountLock:(id)arg1;
- (void)addServer:(id)arg1;
- (void)setSelectedAccount:(MFAccount *)arg1;
@end
