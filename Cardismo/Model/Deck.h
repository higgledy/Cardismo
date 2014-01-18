//
//  Deck.h
//  Cardismo
//
//  Created by Philip Palmer on 1/17/14.
//  Copyright (c) 2014 Philip Palmer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end

