//
//  CardGameViewController.m
//  Cardismo
//
//  Created by Philip Palmer on 1/11/14.
//  Copyright (c) 2014 Philip Palmer. All rights reserved.
//

#import "CardGameViewController.h"

@interface CardGameViewController ()
@property (weak, nonatomic) IBOutlet UILabel *flipsLabel;
@property (nonatomic) int flipCount;

@end

@implementation CardGameViewController

- (void) setFlipCount:(int)flipCount {
    _flipCount = flipCount;
    self.flipsLabel.text = [NSString stringWithFormat:@"Flips: %d", self.flipCount];
    NSLog(@"flipCount = %d", self.flipCount);
}

- (IBAction)touchCardButton:(UIButton *)sender {
    
    if([sender.currentTitle length]) {
        [sender setBackgroundImage:[UIImage imageNamed:@"card-back"]
                          forState:UIControlStateNormal];
        [sender setTitle:@"" forState:UIControlStateNormal];
    }
    else {
        
        [sender setBackgroundImage:[UIImage imageNamed:@"card-front"]
                          forState:UIControlStateNormal];
        [sender setTitle:@" " forState:UIControlStateNormal];
    }
    self.flipCount++;
}


@end
