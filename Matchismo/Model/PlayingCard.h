//
//  PlayingCard.h
//  Matchismo
//
//  Created by Tim Asquith on 30/12/2014.
//  Copyright (c) 2014 Red Ronin. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSString *title;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
