//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VipProduct : NSObject
{
    NSString *v_id;
    NSString *v_name;
    NSString *v_price;
    NSString *v_desc;
    NSString *v_icon;
}

@property(retain, nonatomic) NSString *v_icon; // @synthesize v_icon;
@property(retain, nonatomic) NSString *v_desc; // @synthesize v_desc;
@property(retain, nonatomic) NSString *v_price; // @synthesize v_price;
@property(retain, nonatomic) NSString *v_name; // @synthesize v_name;
@property(retain, nonatomic) NSString *v_id; // @synthesize v_id;
- (void)dealloc;
- (id)initWithDic:(id)arg1;

@end

