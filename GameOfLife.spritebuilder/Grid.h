//
//  Grid.h
//  GameOfLife
//
//  Created by Nicholas Brooks on 10/30/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;
@end
