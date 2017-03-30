//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WALoadPerformanceMgr : MMService <MMService>
{
    unsigned long long _lanchStartTimeStamp;
    unsigned long long _navigateToStartTimeStamp;
    unsigned long long _redirectToStartTimeStamp;
    unsigned long long _lastWebviewID;
    long long _lastActionType;
    NSString *_currentAppID;
    unsigned int _currentVersion;
}

- (void).cxx_destruct;
- (void)reportLoadPerformanceInfo:(unsigned int)arg1 reportType:(unsigned long long)arg2;
- (void)logAppRouteActionType:(long long)arg1 webviewID:(unsigned long long)arg2;
- (void)logLaunchAppWithAppID:(id)arg1 version:(unsigned int)arg2;
- (void)logFromJSWithAppID:(id)arg1 message:(id)arg2;
- (void)logPerformancePreloadCostTime:(unsigned long long)arg1 withAppID:(id)arg2 isPreload:(_Bool)arg3;
- (void)logPerformanceWithType:(long long)arg1 costTime:(unsigned long long)arg2 withAppID:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
