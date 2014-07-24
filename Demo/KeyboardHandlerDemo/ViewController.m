//
//  ViewController.m
//  KeyboardHandlerDemo
//
//  Created by Amit Jain on 21/12/13.
//  Copyright (c) 2013 Amit Jain. All rights reserved.
//

#import "ViewController.h"
#import "KeyboardHandler.h"

@interface ViewController ()
{
    KeyboardHandler *keybHandler;
}

@property (weak, nonatomic) IBOutlet UISwitch *accessorySwitch;
@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.

    //Initializing Keyboard handler
    keybHandler = [[KeyboardHandler alloc] init];
    keybHandler.inputItems = self.InputItemsArr;
    keybHandler.hostingSCVW = self.scvw;
    
}

-(void)viewWillAppear:(BOOL)animated
{
    //configuring the scrollView
    self.scvw.contentSize = self.scvwContentView.bounds.size;
    
    keybHandler.showNavigationAccessory = self.accessorySwitch.isOn;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)onAccessoryVSwitchValChanged:(UISwitch *)sender {

    keybHandler.showNavigationAccessory = sender.isOn;
}

@end
