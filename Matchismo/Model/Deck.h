//
//  Deck.h
//  Matchismo
//
//  Created by Tim Asquith on 31/12/2014.
//  Copyright (c) 2014 Red Ronin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;
- (BOOL)hasCards;
@end
