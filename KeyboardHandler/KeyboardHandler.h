//
//  KeyboardHandler.h
//  ForEverFreeApps
//
//  Created by IBCMobile on 25/04/13.
//  Copyright (c) 2013 IBCMobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyboardHandler : NSObject <UIGestureRecognizerDelegate>

@property (nonatomic,strong) NSArray *inputItems;
@property (nonatomic,strong) UIScrollView *hostingSCVW;
@end
