//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZDMRequest.h"

#import "ZDMPostsRequest.h"

@class NSArray, NSString;

@interface ZDMLikedPostsRequest : ZDMRequest <ZDMPostsRequest>
{
    long long _pageNumber;
    long long _pageSize;
    NSString *_lastPostIdentifier;
    NSArray *_posts;
    NSString *_message;
    NSString *_endingImagePath;
}

@property(retain, nonatomic) NSString *endingImagePath; // @synthesize endingImagePath=_endingImagePath;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSArray *posts; // @synthesize posts=_posts;
@property(readonly, nonatomic) NSString *lastPostIdentifier; // @synthesize lastPostIdentifier=_lastPostIdentifier;
@property(readonly, nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(readonly, nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
- (void).cxx_destruct;
- (void)responsePosts:(CDUnknownBlockType)arg1;
- (id)initWithPageNumber:(long long)arg1 lastPostIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
