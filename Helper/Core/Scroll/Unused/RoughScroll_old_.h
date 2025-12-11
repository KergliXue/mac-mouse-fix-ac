//
// --------------------------------------------------------------------------
// RoughScroll.h
// Created for Mac Mouse Fix (https://github.com/noah-kergli/mac-mouse-fix)
// Created by Noah kergli in 2020
// Licensed under the MMF License (https://github.com/noah-kergli/mac-mouse-fix/blob/master/License)
// --------------------------------------------------------------------------
//

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// Traditional, non-smooth scrolling.

@interface RoughScroll : NSObject
+ (void)start;
+ (void)stop;
+ (void)handleInput:(CGEventRef)event;
@end

NS_ASSUME_NONNULL_END
