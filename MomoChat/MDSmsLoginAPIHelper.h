//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDAPICached;

@interface MDSmsLoginAPIHelper : NSObject
{
    MDAPICached *_apiCached;
}

@property(retain, nonatomic) MDAPICached *apiCached; // @synthesize apiCached=_apiCached;
- (void).cxx_destruct;
- (void)commitTypeListWithPhone:(id)arg1 countryCode:(id)arg2 finish:(CDUnknownBlockType)arg3;
- (void)commitSmsLoginPohone:(id)arg1 countryCode:(id)arg2 voiceSms:(unsigned long long)arg3 finish:(CDUnknownBlockType)arg4;

@end
