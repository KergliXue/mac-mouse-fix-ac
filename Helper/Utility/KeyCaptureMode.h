//
// --------------------------------------------------------------------------
// KeyCaptureMode.h
// Created for Mac Mouse Fix (https://github.com/noah-kergli/mac-mouse-fix)
// Created by Noah kergli in 2022
// Licensed under the MMF License (https://github.com/noah-kergli/mac-mouse-fix/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KeyCaptureMode : NSObject

+ (void)enable;
+ (void)disable;

@end

NS_ASSUME_NONNULL_END
