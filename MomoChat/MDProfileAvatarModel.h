//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDProfileAvatarModel : NSObject
{
    _Bool _isLive;
    NSString *_avatarUrl;
    NSString *_title;
    NSString *_subtitle;
    NSString *_gotoString;
}

@property(copy, nonatomic) NSString *gotoString; // @synthesize gotoString=_gotoString;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void).cxx_destruct;

@end
