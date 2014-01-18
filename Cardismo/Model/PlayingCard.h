//
//  PlayingCard.h
//  Cardismo
//
//  Created by Philip Palmer on 1/17/14.
//  Copyright (c) 2014 Philip Palmer. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (nonatomic, strong) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
