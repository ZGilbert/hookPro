//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBBuyQueryKey : NSObject
{
    NSString *_domain;	// 8 = 0x8
    NSString *_buildOrderApiName;	// 16 = 0x10
    NSString *_buildOrderVersion;	// 24 = 0x18
    NSString *_adjustOrderApiName;	// 32 = 0x20
    NSString *_adjustOrderVersion;	// 40 = 0x28
    NSString *_createOrderApiName;	// 48 = 0x30
    NSString *_createOrderVersion;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *createOrderVersion; // @synthesize createOrderVersion=_createOrderVersion;
@property(retain, nonatomic) NSString *createOrderApiName; // @synthesize createOrderApiName=_createOrderApiName;
@property(retain, nonatomic) NSString *adjustOrderVersion; // @synthesize adjustOrderVersion=_adjustOrderVersion;
@property(retain, nonatomic) NSString *adjustOrderApiName; // @synthesize adjustOrderApiName=_adjustOrderApiName;
@property(retain, nonatomic) NSString *buildOrderVersion; // @synthesize buildOrderVersion=_buildOrderVersion;
@property(retain, nonatomic) NSString *buildOrderApiName; // @synthesize buildOrderApiName=_buildOrderApiName;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end
