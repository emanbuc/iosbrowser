//
//  ViewController.h
//  Browser
//
//  Created by emanuele on 29/07/13.
//  Copyright (c) 2013 emanuele. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)textFieldDidEndEditing:(id)sender;

@end
