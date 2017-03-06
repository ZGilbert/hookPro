//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDGroupProfileHelperDelegate.h"

@class GroupProfileManager, MDGroupChatSettingModel, MDGroupProfileHelper, MomoGroupProfileInfo, NSMutableArray, NSString;

@interface MDGroupChatSettingDataHelper : NSObject <MDGroupProfileHelperDelegate>
{
    GroupProfileManager *_groupProfileManager;
    MomoGroupProfileInfo *_gpi;
    id <MDGroupChatSettingDataHelperDelegate> _delegate;
    NSMutableArray *_dataArray;
    MDGroupProfileHelper *_groupProfileHelper;
    MDGroupChatSettingModel *_messagePushModel;
    MDGroupChatSettingModel *_swtichChatTopModel;
    NSString *_groupId;
}

@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) MDGroupChatSettingModel *swtichChatTopModel; // @synthesize swtichChatTopModel=_swtichChatTopModel;
@property(retain, nonatomic) MDGroupChatSettingModel *messagePushModel; // @synthesize messagePushModel=_messagePushModel;
@property(retain, nonatomic) MDGroupProfileHelper *groupProfileHelper; // @synthesize groupProfileHelper=_groupProfileHelper;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <MDGroupChatSettingDataHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MomoGroupProfileInfo *gpi; // @synthesize gpi=_gpi;
@property(retain, nonatomic) GroupProfileManager *groupProfileManager; // @synthesize groupProfileManager=_groupProfileManager;
- (void).cxx_destruct;
- (void)groupHelper:(id)arg1 fetchGroupProfile:(int)arg2 errorCode:(unsigned long long)arg3 errorMsg:(id)arg4;
- (void)setupCellModel:(id)arg1;
- (void)setupCellModels;
- (void)updateModel;
- (void)fectchProfileGroupData;
- (void)dealloc;
- (id)initWithGroupId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
