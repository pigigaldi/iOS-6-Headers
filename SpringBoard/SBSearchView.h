/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class SBNoResultsView, UILabel, UISearchBar, UITableView;

@interface SBSearchView : UIView
{
    UISearchBar *_searchBar;
    UITableView *_tableView;
    UILabel *_noResultsLabel;
    SBNoResultsView *_noResultsView;
    UIView *_rootView;
    UIView *_contentView;
    BOOL _isKeyboardAnimatingRotation;
    BOOL _hidesEmptyTableFooter;
    BOOL _translatedKbForScatter;
    BOOL _deferredFirstResponder;
}

@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)unscatterAnimationDidStop;
- (void)unscatter:(BOOL)arg1 delay:(double)arg2;
- (void)scatter:(BOOL)arg1 delay:(double)arg2;
- (void)cleanupKeyboardForScatterIfNecessary;
- (void)_resetKeyboardTransformForScatter;
- (void)_resetContentViewTransform;
- (void)_setDistantContentViewTransform;
- (void)setShowingNoResultsText:(BOOL)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)finishBecomingFirstResponderIfNecessary;
- (void)setShowsKeyboard:(BOOL)arg1 animated:(BOOL)arg2 shouldDeferResponderStatus:(BOOL)arg3;
- (void)setShowsKeyboard:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isKeyboardVisible;
- (void)__searchFieldDidResignFirstResponder;
- (void)_stopObservingForKeyboardOnScreen;
- (void)_startObservingForKeyboardOnScreen;
- (void)__becomeFirstResponder;
- (BOOL)__isFirstResponder;
- (BOOL)isKeyboardMinimized;
- (id)_keyboard;
- (Class)searchBarClass;
- (Class)tableViewClass;
- (void)_layoutNoResultsView;
- (void)layoutFooterView;
- (float)_footerHeight;
- (void)setHidesEmptyTableFooter:(BOOL)arg1;
- (void)layoutCornerView;
- (void)_resetLastCellInTableView;
- (void)setShowsNoResultsView:(BOOL)arg1;
- (void)scrollViewIsScrollingHorizontally;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)hideAllSubviewsOfTableView;
- (id)initWithFrame:(struct CGRect)arg1 withContent:(id)arg2 onWallpaper:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

