#line 1 "/Users/bobsmith/Downloads/Game/GameDylib/Logos/GameDylib.xm"


#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <Foundation/Foundation.h>

#define kTweakName @"Zhangbo"

#ifdef DEBUG
#define NSLog(FORMAT, ...) NSLog(@"[%@: %s - %i] %@", kTweakName, __FILE__, __LINE__, [NSString stringWithFormat:FORMAT, ##__VA_ARGS__])
#else
#define NSLog(FORMAT, ...) do {} while(0)
#endif

@interface ShowAchievements : UIViewController
- (void)showRemoveAdTip;
- (void)show2048Ad;
@end


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class IAP; @class SKPaymentTransaction; @class ShowAchievements; 
static void (*_logos_orig$_ungrouped$IAP$paymentQueue$updatedTransactions$)(_LOGOS_SELF_TYPE_NORMAL IAP* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$IAP$paymentQueue$updatedTransactions$(_LOGOS_SELF_TYPE_NORMAL IAP* _LOGOS_SELF_CONST, SEL, id, id); static void (*_logos_orig$_ungrouped$IAP$verifyPurchaseWithPaymentTransaction)(_LOGOS_SELF_TYPE_NORMAL IAP* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$IAP$verifyPurchaseWithPaymentTransaction(_LOGOS_SELF_TYPE_NORMAL IAP* _LOGOS_SELF_CONST, SEL); 

#line 20 "/Users/bobsmith/Downloads/Game/GameDylib/Logos/GameDylib.xm"















@interface SKPaymentTransaction : NSObject
{
    long long _transactionState;
}
@property (nonatomic, readonly) long long transactionState;

- (long long)transactionState;
- (void)_setTransactionState:(long long)arg1;

@end





@interface IAP : NSObject
- (void)save;
- (void)removeWaiting;
- (void)failedTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)restoreTransaction:(id)arg1;
- (void)verifyPurchaseWithPaymentTransaction;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
@end




static void _logos_method$_ungrouped$IAP$paymentQueue$updatedTransactions$(_LOGOS_SELF_TYPE_NORMAL IAP* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {

    SKPaymentTransaction *skPaymentTransaction = [arg2 objectAtIndex:0];
    long long state = skPaymentTransaction.transactionState;
    if (state == 2)
    {






        [skPaymentTransaction _setTransactionState:1];
        [self save];
    }
    _logos_orig$_ungrouped$IAP$paymentQueue$updatedTransactions$(self, _cmd, arg1, arg2);
}


static void _logos_method$_ungrouped$IAP$verifyPurchaseWithPaymentTransaction(_LOGOS_SELF_TYPE_NORMAL IAP* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    [self removeWaiting];
    return;
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$IAP = objc_getClass("IAP"); MSHookMessageEx(_logos_class$_ungrouped$IAP, @selector(paymentQueue:updatedTransactions:), (IMP)&_logos_method$_ungrouped$IAP$paymentQueue$updatedTransactions$, (IMP*)&_logos_orig$_ungrouped$IAP$paymentQueue$updatedTransactions$);MSHookMessageEx(_logos_class$_ungrouped$IAP, @selector(verifyPurchaseWithPaymentTransaction), (IMP)&_logos_method$_ungrouped$IAP$verifyPurchaseWithPaymentTransaction, (IMP*)&_logos_orig$_ungrouped$IAP$verifyPurchaseWithPaymentTransaction);} }
#line 88 "/Users/bobsmith/Downloads/Game/GameDylib/Logos/GameDylib.xm"
