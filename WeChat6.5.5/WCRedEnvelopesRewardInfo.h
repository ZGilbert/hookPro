//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WCRedEnvelopesRewardInfo : NSObject <NSCoding>
{
    NSMutableArray *arrRewardItem;
    unsigned int resoureId;
    unsigned int reportId;
    unsigned int reportKey;
}

@property(nonatomic) unsigned int reportKey; // @synthesize reportKey;
@property(nonatomic) unsigned int reportId; // @synthesize reportId;
@property(nonatomic) unsigned int resoureId; // @synthesize resoureId;
@property(retain, nonatomic) NSMutableArray *arrRewardItem; // @synthesize arrRewardItem;
- (void).cxx_destruct;
- (_Bool)hasRewardForMe;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
