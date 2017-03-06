//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBIMGroupServiceDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HUDActivityView, NSString, UITableView;
@protocol TBIMGroupAdapter, TBIMGroupServiceAdapter;

@interface TBChatRoomInfoViewController : TBViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, TBIMGroupServiceDelegate>
{
    UITableView *_chatRoomInfoTableView;	// 16 = 0x10
    HUDActivityView *_hudActivityView;	// 24 = 0x18
    NSString *_groupId;	// 32 = 0x20
    id <TBIMGroupAdapter> _groupInfo;	// 40 = 0x28
    id <TBIMGroupServiceAdapter> _groupService;	// 48 = 0x30
}

@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupService; // @synthesize groupService=_groupService;
@property(retain, nonatomic) id <TBIMGroupAdapter> groupInfo; // @synthesize groupInfo=_groupInfo;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) HUDActivityView *hudActivityView; // @synthesize hudActivityView=_hudActivityView;
@property(retain, nonatomic) UITableView *chatRoomInfoTableView; // @synthesize chatRoomInfoTableView=_chatRoomInfoTableView;
- (void).cxx_destruct;
- (id)initWithGroupId:(id)arg1;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)groupInfoDeleted:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)retreatChatRoom;
- (void)retreatChatRoomShowActionSheet:(id)arg1;
- (void)clearMessageForGroup;
- (void)clearMessageForGroupShowActionSheet;
- (void)selectedGroupMembers;
- (void)initChatRoomInfoData;
- (void)initHUDActivityView;
- (void)initChatRoomInfoTableView;
- (void)initNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
