//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXImageMsgUrlManager : NSObject
{
}

+ (struct CGSize)getTribeMsgImageSizeFromMessage:(int)arg1 content:(id)arg2;
+ (struct CGSize)getImageSizeWithWWMessage:(id)arg1;
+ (int)getUrlDomainType:(id)arg1;
+ (id)getFileNameWithTribeMsgImageUrl:(id)arg1;
+ (id)getImageUrlFromWWTribeMessage:(int)arg1 content:(id)arg2 downType:(int)arg3 getImageUrlCacheKey:(id *)arg4;
+ (id)getImageUrlFromWWTribeMessage:(id)arg1 downType:(int)arg2 getImageUrlCacheKey:(id *)arg3;
+ (id)getImageUrlFromWWMessage:(id)arg1 downType:(int)arg2 getImageUrlCacheKey:(id *)arg3;
+ (void)initHostStrings;

@end
