//
//  ViewController.h
//  Browser
//
//  Created by emanuele on 29/07/13.
//  Copyright (c) 2013 emanuele. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)textFieldDidEndEditing:(id)sender;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

@end
