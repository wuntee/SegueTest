//
//  SecondViewController.h
//  SegueTest
//
//  Created by Mathew Rowley on 4/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SecondViewController;
@protocol SecondViewControllerDelegate
- (void) buttonPressed;
@end

@interface SecondViewController : UIViewController
@property (nonatomic, weak) id delegate;
@end
