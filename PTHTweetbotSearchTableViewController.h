//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UISearchBarDelegate.h"

@class PTHSearchBar, UIControl, UITableView, UIView, UIViewController;

@interface PTHTweetbotSearchTableViewController : NSObject <UISearchBarDelegate>
{
    UITableView *_tableView;
    UIViewController *_contentsController;
    struct CGRect _originalSearchContainerFrame;
    UIView *_originalSearchContainerParentView;
    _Bool _hidNavBar;
    UIView *_statusFrameBackgroundView;
    UIControl *_overlayView;
    UITableView *_searchResultsTableView;
    UIView *_searchContainerSeparator;
    _Bool _active;
    id <PTHTweetbotSearchTableViewDelegate> _delegate;
    id <UITableViewDataSource> _searchResultsDataSource;
    id <UITableViewDelegate> _searchResultsDelegate;
    PTHSearchBar *_searchBar;
    UIView *_searchContainer;
}

@property(retain, nonatomic) UIView *searchContainer; // @synthesize searchContainer=_searchContainer;
@property(readonly, nonatomic) PTHSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <UITableViewDelegate> searchResultsDelegate; // @synthesize searchResultsDelegate=_searchResultsDelegate;
@property(nonatomic) __weak id <UITableViewDataSource> searchResultsDataSource; // @synthesize searchResultsDataSource=_searchResultsDataSource;
@property(nonatomic) __weak id <PTHTweetbotSearchTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)reloadSearch;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)_didEndEditing:(id)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UITableView *searchResultsTableView;
- (id)initWithSearchBar:(id)arg1 tableView:(id)arg2 contentsController:(id)arg3;

@end

