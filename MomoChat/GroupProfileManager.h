//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDAPICached, MDGroupApi, MDThreadSafeDictionary, NSMutableSet, NSString;

@interface GroupProfileManager : NSObject
{
    NSMutableSet *groupIds;
    MDAPICached *_apiCached;
    MDGroupApi *_groupApi;
    MDThreadSafeDictionary *_cachBlockDic;
    NSString *_blockIdenfierStr;
    NSString *_currentBlockIdentifier;
}

@property(copy, nonatomic) NSString *currentBlockIdentifier; // @synthesize currentBlockIdentifier=_currentBlockIdentifier;
@property(copy, nonatomic) NSString *blockIdenfierStr; // @synthesize blockIdenfierStr=_blockIdenfierStr;
@property(retain, nonatomic) MDThreadSafeDictionary *cachBlockDic; // @synthesize cachBlockDic=_cachBlockDic;
@property(retain, nonatomic) MDGroupApi *groupApi; // @synthesize groupApi=_groupApi;
@property(retain, nonatomic) MDAPICached *apiCached; // @synthesize apiCached=_apiCached;
- (void).cxx_destruct;
- (void)setGroupFeedList:(id)arg1 groupId:(id)arg2;
- (void)setGroupShowMember:(id)arg1 groupId:(id)arg2;
- (id)getGroupFeedList:(id)arg1;
- (id)getGroupShowMember:(id)arg1;
- (id)modelingMemberDicList:(id)arg1;
- (int)groupMessagePushStatus:(id)arg1;
- (void)querySimilarGroupFail:(id)arg1;
- (void)querySimilarGroupError:(id)arg1;
- (void)querySimilarGroupSuccess:(id)arg1;
- (void)fetchSimilarGroup:(id)arg1 onlyShortListTag:(_Bool)arg2;
- (void)queryGroupInfoErrorWithGroupID:(id)arg1 errmsg:(id)arg2 errcode:(int)arg3;
- (void)queryGroupInfoError:(id)arg1;
- (void)queryGroupInfoFail:(id)arg1;
- (void)queryGroupInfoSuccess:(id)arg1;
- (void)queryGroupInfo:(id)arg1;
- (void)removeBlockWithUserInfo:(id)arg1;
- (void)setSiteInfoArray:(id)arg1;
- (void)setSiteProfile:(id)arg1;
- (id)siteProfile:(id)arg1;
- (id)getGradeInGroup:(id)arg1;
- (void)setGroup:(id)arg1 grade:(id)arg2;
- (void)setGroup:(id)arg1 gradeGroupMode:(_Bool)arg2;
- (void)setGroup:(id)arg1 cleanMode:(int)arg2;
- (void)setGroup:(id)arg1 status:(int)arg2;
- (void)setGroup:(id)arg1 relation:(int)arg2;
- (void)setGroupProfileArray:(id)arg1;
- (void)setGroupProfileInNearby:(id)arg1;
- (void)setGroupProfile:(id)arg1;
- (id)groupProfile:(id)arg1;
- (id)localGroupProfile:(id)arg1;
- (void)setGroupInfo:(id)arg1;
- (void)setGroupProfileBlock:(CDUnknownBlockType)arg1;
- (void)fetchGroupProfileWithParamDic:(id)arg1;
- (void)dealloc;
- (id)init;

@end
