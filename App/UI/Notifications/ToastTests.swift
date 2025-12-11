//
// --------------------------------------------------------------------------
// NotificationTests.swift
// Created for Mac Mouse Fix (https://github.com/noah-kergli/mac-mouse-fix)
// Created by Noah kergli in 2024
// Licensed under Licensed under the MMF License (https://github.com/noah-kergli/mac-mouse-fix/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation

@objc class NotificationTests: NSObject {
    
    let testList = Toasts.simpleToastMap + [
        { Toasts.showReviveToast(showButtons: true, showScroll: false) },
        { Toasts.showReviveToast(showButtons: false, showScroll: true) },
    ]
}
