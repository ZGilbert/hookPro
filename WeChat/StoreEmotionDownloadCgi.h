//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class EmoticonStoreItem, EmotionSummary, NSString;

@interface StoreEmotionDownloadCgi : MMObject <PBMessageObserverDelegate, ICdnComMgrExt>
{
    id <StoreEmotionDownloadCgiDelegate> _delegate;
    EmoticonStoreItem *_downloadingItem;
    EmotionSummary *_downloadingInfo;
}

@property(retain, nonatomic) EmotionSummary *downloadingInfo; // @synthesize downloadingInfo=_downloadingInfo;
@property(retain, nonatomic) EmoticonStoreItem *downloadingItem; // @synthesize downloadingItem=_downloadingItem;
@property(nonatomic) __weak id <StoreEmotionDownloadCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callFailedDelegate;
- (void)callOKDelegate;
- (void)installItemPackage:(id)arg1;
- (_Bool)IsCdnEmoticonPackageDownlaodFromClientID:(id)arg1;
- (id)mediaInfoForEmoticonItem:(id)arg1;
- (void)downloadEmotionWithItem:(id)arg1;
- (void)startInternalRequestWithPid:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequestWithPid:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
