//
// --------------------------------------------------------------------------
// EventTapQueue.h
// Created for Mac Mouse Fix (https://github.com/noah-kergli/mac-mouse-fix)
// Created by Noah kergli in 2022
// Licensed under the MMF License (https://github.com/noah-kergli/mac-mouse-fix/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface GlobalEventTapThread : NSObject

+ (CFRunLoopRef)runLoop;

@end

NS_ASSUME_NONNULL_END
