/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIControl.h"

@class UIImageView;

@interface SBBulletinClearButton : UIControl
{
    BOOL _showingClear;
    UIImageView *_backgroundView;
    UIImageView *_xImageView;
    UIImageView *_clearImageView;
    float _widthWhenShowingX;
    float _widthWhenShowingClear;
    id _clearShownAction;
    id _clearPressedAction;
    id <SBBulletinClearButtonDelegate> _delegate;
}

+ (void)initialize;
+ (void)_removeCachedClearImage;
@property(nonatomic) id <SBBulletinClearButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) id clearPressedAction; // @synthesize clearPressedAction=_clearPressedAction;
@property(copy, nonatomic) id clearShownAction; // @synthesize clearShownAction=_clearShownAction;
- (id)_precompositedXImage;
- (id)_background;
- (id)_xImage;
- (id)_clearImage;
- (void)_setShowsClear:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_switchToUsingSubviews;
- (struct CGRect)_clearImageFrame;
- (struct CGRect)_xImageFrame;
- (struct CGRect)_xImageFrameInBounds:(struct CGRect)arg1;
- (void)_pressAction;
- (void)setHighlighted:(BOOL)arg1;
- (void)resetAnimated:(BOOL)arg1;
- (BOOL)showingClear;
- (void)dealloc;
- (id)init;

@end
