//
//  ViewController.h
//  KeyboardHandlerDemo
//
//  Created by Amit Jain on 21/12/13.
//  Copyright (c) 2013 Amit Jain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *InputItemsArr;
@property (weak, nonatomic) IBOutlet UIScrollView *scvw;
@property (strong, nonatomic) IBOutlet UIView *scvwContentView;
@end
