//
//  ViewController.h
//  PaypalDemo
//
//  Created by Varun Naharia on 05/12/14.
//  Copyright (c) 2014 tech3i. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"

@interface ViewController : UIViewController<PayPalPaymentDelegate, PayPalFuturePaymentDelegate, PayPalProfileSharingDelegate>

@property(nonatomic, strong, readwrite) NSString *environment;
@property(nonatomic, assign, readwrite) BOOL acceptCreditCards;
@property(nonatomic, strong, readwrite) NSString *resultText;

@end
