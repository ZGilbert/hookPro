//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageAttachment.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WWKMessageTextAttachment : WWKMessageAttachment
{
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end
