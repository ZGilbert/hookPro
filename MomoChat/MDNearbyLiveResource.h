//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MDNearbyLiveResource : NSObject
{
    NSString *_title;
    NSString *_detailText;
    NSString *_detailTextColor;
    NSString *_actionGogo;
    NSString *_avatar;
    NSArray *_icons;
}

+ (id)dictionaryToNearbyLiveResource:(id)arg1;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *actionGogo; // @synthesize actionGogo=_actionGogo;
@property(retain, nonatomic) NSString *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;

@end

