//
// --------------------------------------------------------------------------
// TrialState.swift
// Created for Mac Mouse Fix (https://github.com/noah-kergli/mac-mouse-fix)
// Created by Noah kergli in 2024
// Licensed under Licensed under the MMF License (https://github.com/noah-kergli/mac-mouse-fix/blob/master/License)
// --------------------------------------------------------------------------
//

@MainActor
@objc class GetTrialState : NSObject {
    
    /// -> This class retrieves instances of the `MFTrialState` dataclass

    @objc static func get(_ licenseConfig: MFLicenseConfig) -> MFTrialState {
        
#if FORCE_EXPIRED
        let daysOfUse = licenseConfig.trialDays + 1
#elseif FORCE_NOT_EXPIRED
        let daysOfUse = 0
#else
        let daysOfUse = TrialCounter.daysOfUse /// [Jun 2025] This complains about MainActor isolation if we don't make the enclosing function @MainActor.
#endif
        
        // 修改逻辑：让剩余天数永远为8000天
        // 剩余天数 = trialDays - daysOfUse = 8000
        // 所以 trialDays = daysOfUse + 8000
        let trialDays = daysOfUse + 8000
        let trialIsActive = true // 永远激活
        let daysOfUseUI = SharedUtilitySwift.clip(daysOfUse, betweenLow: 1, high: trialDays)
        
        let result = MFTrialState(
            daysOfUse: daysOfUse,
            daysOfUseUI: daysOfUseUI,
            trialDays: trialDays,
            trialIsActive: trialIsActive
        )
        
        return result
    }

}
