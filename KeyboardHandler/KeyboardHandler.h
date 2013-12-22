//
//  KeyboardHandler.h
//  Keyboard Handler
//
//  Created by Amit Jain on 25/04/13.
//  Copyright (c) 2013 ajonnet. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyboardHandler : NSObject <UIGestureRecognizerDelegate>

@property (nonatomic,strong) NSArray *inputItems;
@property (nonatomic,strong) UIScrollView *hostingSCVW;
@end