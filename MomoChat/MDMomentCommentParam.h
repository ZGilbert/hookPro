//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MDMomentCommentParam : NSObject
{
    NSString *_momentId;
    NSString *_content;
    unsigned long long _commentType;
    NSString *_srcId;
    NSString *_from;
    NSDictionary *_userInfoDic;
}

@property(retain, nonatomic) NSDictionary *userInfoDic; // @synthesize userInfoDic=_userInfoDic;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *srcId; // @synthesize srcId=_srcId;
@property(nonatomic) unsigned long long commentType; // @synthesize commentType=_commentType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *momentId; // @synthesize momentId=_momentId;
- (void).cxx_destruct;
- (id)dictionaryWithModel:(id)arg1;

@end
