//
//  Team.h
//  TournamentSwiftMaker
//
//  Created by Dan Hoang on 8/16/15.
//  Copyright (c) 2015 Dan Hoang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Team : NSObject

@property (strong,nonatomic) NSString *d_name;

//d_matchesPlayed will contain match ID's, object.
@property (strong,nonatomic) NSMutableArray *d_matchesPlayed;

@end
