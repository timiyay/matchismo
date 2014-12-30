//
//  Card.m
//  Matchismo
//
//  Created by Tim Asquith on 30/12/2014.
//  Copyright (c) 2014 Red Ronin. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }

    return score;
}

@end
