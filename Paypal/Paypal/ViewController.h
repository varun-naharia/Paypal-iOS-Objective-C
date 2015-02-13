//
//  ViewController.h
//  Paypal
//
//  Created by Varun Naharia on 07/02/15.
//  Copyright (c) 2015 tech3i. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"


@interface ViewController : UIViewController<PayPalPaymentDelegate, UIPopoverControllerDelegate>
@property(nonatomic, strong, readwrite) NSString *resultText;


@end

