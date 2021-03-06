/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

#import "SBBulletinFadeOverlayOwner-Protocol.h"

@class SBWeeApp, UIViewController<BBWeeAppPresentationController>;

@interface SBWeeAppPresentationView : UIView <SBBulletinFadeOverlayOwner>
{
    BOOL _isDismissing;
    UIViewController<BBWeeAppPresentationController> *_viewController;
    SBWeeApp *_weeApp;
}

@property(retain, nonatomic) UIViewController<BBWeeAppPresentationController> *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SBWeeApp *weeApp; // @synthesize weeApp=_weeApp;
- (void)setLinenGradientAlpha:(float)arg1;
- (void)setRasterizesFadeOverlay:(BOOL)arg1;
- (void)dismissWithCompletion:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithWeeApp:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

