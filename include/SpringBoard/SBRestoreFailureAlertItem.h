/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"


@interface SBRestoreFailureAlertItem : SBUnknownSuperclass {
	BOOL _runningModal;	// 15 = 0xf
}
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0xa4f99
- (void)didPresentAlertView:(id)view;	// 0xa50ed
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0xa5131
- (double)autoDismissInterval;	// 0xa4f7d
- (void)_rebootNow;	// 0xa51f5
- (void)restartSystemEvent;	// 0xa5169
- (void)performUnlockAction;	// 0xa519d
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0xa51c9
- (BOOL)allowMenuButtonDismissal;	// 0xa4f89
- (BOOL)shouldShowInLockScreen;	// 0xa4f8d
- (BOOL)forcesModalAlertAppearance;	// 0xa4f91
- (BOOL)allowInSetup;	// 0xa4f95
@end
