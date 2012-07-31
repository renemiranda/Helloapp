//
//  ViewController.h
//  Helloapp
//
//  Created by RENE MIRANDA on 7/31/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (IBAction)helloButtonPressed:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UITextField *hellotextfield;
@property (weak, nonatomic) IBOutlet UILabel *hellolabel;

@end
