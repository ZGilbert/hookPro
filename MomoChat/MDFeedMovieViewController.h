//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDAddFavoriteViewController.h"

@interface MDFeedMovieViewController : MDAddFavoriteViewController
{
    CDUnknownBlockType _movieDidFinishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType movieDidFinishBlock; // @synthesize movieDidFinishBlock=_movieDidFinishBlock;
- (void)choseMovieWithItem:(id)arg1;
- (void)searchFavoriteWithKeyword:(id)arg1 index:(long long)arg2;
- (void)addFavoriteWithItem:(id)arg1;
- (void)setupSearchController;
- (void)didReceiveMemoryWarning;
- (void)gotoBack;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCompeltionBlock:(CDUnknownBlockType)arg1;

@end
