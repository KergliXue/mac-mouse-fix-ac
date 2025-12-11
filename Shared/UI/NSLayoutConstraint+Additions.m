//
// --------------------------------------------------------------------------
// NSLayoutConstraint+Additions.m
// Created for Mac Mouse Fix (https://github.com/noah-kergli/mac-mouse-fix)
// Created by Noah kergli in 2025
// Licensed under Licensed under the MMF License (https://github.com/noah-kergli/mac-mouse-fix/blob/master/License)
// --------------------------------------------------------------------------
//

#import "NSLayoutConstraint+Additions.h"

@implementation NSLayoutConstraint (Additions)

    - (NSLayoutConstraint *) addingIdentifier: (NSString *)identifier {
        self.identifier = identifier;
        return self;
    }

@end
