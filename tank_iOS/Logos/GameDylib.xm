// See http://iphonedevwiki.net/index.php/Logos

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

%hook ShowAchievements
/*
- (void)showRemoveAdTip
{
    return;
}

- (void)show2048Ad
{
    %log((NSString *)@"zhangbo - show2048Ad");
    return;
}
*/
%end

@interface SKPaymentTransaction : NSObject
{
    long long _transactionState;
}
@property (nonatomic, readonly) long long transactionState;

- (long long)transactionState;
- (void)_setTransactionState:(long long)arg1;

@end

%hook SKPaymentTransaction

%end

@interface IAP : NSObject
- (void)save;
- (void)removeWaiting;
- (void)failedTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (void)restoreTransaction:(id)arg1;
- (void)verifyPurchaseWithPaymentTransaction;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
@end

%hook IAP

- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2
{

    SKPaymentTransaction *skPaymentTransaction = [arg2 objectAtIndex:0];
    long long state = skPaymentTransaction.transactionState;
    if (state == 2)
    {
/*
        [self completeTransaction:skPaymentTransaction];
        [self verifyPurchaseWithPaymentTransaction];
        [self removeWaiting];
        [self restoreTransaction:skPaymentTransaction];
*/
        [skPaymentTransaction _setTransactionState:1];
        [self save];
    }
    %orig;
}

- (void)verifyPurchaseWithPaymentTransaction
{
    [self removeWaiting];
    return;
}

%end
