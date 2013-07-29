//
//  ViewController.m
//  Browser
//
//  Created by emanuele on 29/07/13.
//  Copyright (c) 2013 emanuele. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize webView;
@synthesize textField;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)textFieldDidEndEditing:(id)sender {
    NSString *userString = self.textField.text;
    [webView loadRequest:[NSURLRequest requestWithURL: [NSURL URLWithString:userString]]];
}
@end
