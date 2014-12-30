//
//  Card.h
//  Matchismo
//
//  Created by Tim Asquith on 30/12/2014.
//  Copyright (c) 2014 Red Ronin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject
@property (strong, nonatomic) NSString *contents;
@property (nonatomic) NSString *title;
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
