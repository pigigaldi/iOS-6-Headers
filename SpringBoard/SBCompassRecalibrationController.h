/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SBCompassRecalibrationController : NSObject
{
    NSMutableArray *_assertionPorts;
}

+ (id)sharedInstance;
- (void)_clientInvalidated:(struct __CFMachPort *)arg1;
- (void)clientRequestedCompassHUD:(unsigned int)arg1;
- (void)removeHUD;
- (void)showHUD;
- (BOOL)isCompassCalibrationHUDVisible;
- (void)dealloc;

@end
