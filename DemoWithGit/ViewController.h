//
//  ViewController.h
//  DemoWithGit
//
//  Created by Ray on 3/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    UISwitch *mySwitch;
    UILabel *switchStatus;
}

@property (retain, nonatomic) IBOutlet UISwitch *mySwitch;
@property (retain, nonatomic) IBOutlet UILabel *switchStatus;

- (void)changeMySwitch:(id)sender;

@end
