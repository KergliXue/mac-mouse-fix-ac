//
// --------------------------------------------------------------------------
// LocalizationUtility.h
// Created for Mac Mouse Fix (https://github.com/noah-kergli/mac-mouse-fix)
// Created by Noah kergli in 2023
// Licensed under Licensed under the MMF License (https://github.com/noah-kergli/mac-mouse-fix/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LocalizationUtility : NSObject

+ (NSString *_Nullable) currentLanguageCode;
+ (double) informationDensityOfCurrentLanguage;

@end

NS_ASSUME_NONNULL_END
