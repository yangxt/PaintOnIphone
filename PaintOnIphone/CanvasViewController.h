//
//  MainViewController.h
//  PaintOnIphone
//
//  Created by Vikash Soni on 15/11/13.
//  Copyright (c) 2013 Vikash Soni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingViewController.h"

@interface CanvasViewController : UIViewController<SettingsViewControllerDelegate>
{
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
}
@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;

- (IBAction)pencilPressed:(id)sender;
- (IBAction)erasePressed:(id)sender;
- (IBAction)savePressed:(id)sender;
- (IBAction)resetPressed:(id)sender;

@end
