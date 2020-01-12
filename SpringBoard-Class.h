@protocol OS_dispatch_source;
@class UIWindow, SBUIController, NSTimer, NSMutableSet, NSSet, SBApplication, NSMutableArray, NSNumberFormatter, NSDate, SBAppContextHostManager, NSObject;

@interface SpringBoard : UIApplication <UIApplicationDelegate> {

    SBUIController* _uiController;
    NSTimer* _menuButtonTimer;
    NSTimer* _lockButtonTimer;
    NSTimer* _idleTimer;
    NSTimer* _autoLockTimer;
    double _lastUndimEventTime;
    double _lastTimeIdleCausedDim;
    double _nextLockDurationAfterDim;
    double _headsetButtonDownTime;
    int _headsetClickCount;
    int _ringerSwitchState;
    unsigned _headsetButtonClickCount : 8;
    unsigned _menuButtonClickCount : 8;
    unsigned _screenWasDimOnMenuDown : 1;
    unsigned _waitingForMenuDoubleTapAfterActingOnSingleTap : 1;
    unsigned _screenshotWasTaken : 1;
    unsigned _disableAutoDimming : 1;
    unsigned _dontLockOnNextLockUp : 1;
    unsigned _poweringDown : 1;
    unsigned _headsetDownDelayedActionPerformed : 1;
    unsigned _isSeekingInMedia : 1;
    int _statusBarOrientationOverride;
    unsigned _lockScreenCameraWantsIdleTimerDisabled : 1;
    int _mediaSeekDirection;
    float _currentBacklightLevel;
    unsigned _springBoardRequestsAccelerometerEvents;
    int _activeInterfaceOrientation;
    NSMutableSet* _activeInterfaceOrientationObservers;
    char _wantsOrientationEvents;
    int _notifyDontAnimateREOToken;
    int _notifyDontAllowMediaHUDToken;
    char _expectsFaceContact;
    char _expectsFaceContactInLandscape;
    char _proximityEventsEnabled;
    char _clamshellClosed;
    char _keybagRefetchTransactionIsActive;
    NSSet* _restrictionDisabledApplications;
    SBApplication* _nowPlayingApp;
    SBApplication* _menuButtonInterceptApp;
    char _menuButtonInterceptAppEnabledForever;
    NSMutableArray* _disableNowPlayingHUDAssertionBundleIds;
    NSMutableArray* _appsRegisteredForVolumeEvents;
    NSNumberFormatter* _decimalFormatter;
    NSNumberFormatter* _percentFormatter;
    NSTimer* _midnightTimer;
    NSDate* _midnightFireDate;
    SBAppContextHostManager* _springBoardContextHostManager;
    UIWindow* _springBoardContextHostWindow;
    NSMutableSet* _idleTimerDisabledReasons;
    unsigned _memoryPressureStatus;
    NSMutableArray* _blocksAwaitingAvailableMemory;

}

@property (nonatomic,retain) UIWindow * window;

-(void)_updateRingerState:(int)arg1 withVisuals:(char)arg2 updatePreferenceRegister:(char)arg3 ;
@end
