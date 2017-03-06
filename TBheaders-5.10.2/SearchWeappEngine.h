//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMWeAppController.h"

#import "TMSearchCustomizeEngine-Protocol.h"

@class NSMapTable, NSString;

@interface SearchWeappEngine : TMWeAppController <TMSearchCustomizeEngine>
{
    NSMapTable *_delegates;	// 8 = 0x8
}

- (void).cxx_destruct;
- (_Bool)supportModule:(id)arg1;
- (void)setDelegate:(id)arg1 forName:(id)arg2;
- (id)getDataPool;
- (_Bool)equalToEngine:(id)arg1;
- (void)setData:(id)arg1 onPath:(id)arg2;
- (void)refreshViewWithData:(id)arg1;
- (void)refreshData;
- (_Bool)adaptiveHeight;
- (id)getProtocolConfigurationByName:(id)arg1;
- (void)getViewWithData:(id)arg1 sizeRestrain:(struct CGSize)arg2 complete:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
