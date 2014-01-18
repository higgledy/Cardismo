//
//  Deck.m
//  Cardismo
//
//  Created by Philip Palmer on 1/17/14.
//  Copyright (c) 2014 Philip Palmer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (nonatomic, strong) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
