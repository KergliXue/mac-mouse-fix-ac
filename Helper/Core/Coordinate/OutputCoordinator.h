//
// --------------------------------------------------------------------------
// OutputCoordinator.h
// Created for Mac Mouse Fix (https://github.com/noah-kergli/mac-mouse-fix)
// Created by Noah kergli in 2022
// Licensed under the MMF License (https://github.com/noah-kergli/mac-mouse-fix/blob/master/License)
// --------------------------------------------------------------------------
//

#ifndef OutputCoordinator_h
#define OutputCoordinator_h

typedef enum {
    kTouchDriverScroll,
    kTouchDriverModifiedDrag,
    kTouchDriverGestureScrollSimulator
} TouchDriver;

typedef void(^DriverUnsuspender)(void);

#endif /* OutputCoordinator_h */
