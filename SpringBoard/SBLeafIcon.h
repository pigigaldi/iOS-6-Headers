/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBIcon.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SBLeafIcon : SBIcon <NSCopying>
{
    NSString *_leafIdentifier;
}

- (id)nodeIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)representation;
- (id)leafIdentifier;
- (void)dealloc;
- (id)initWithLeafIdentifier:(id)arg1;

@end

