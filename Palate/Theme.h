//
//  Theme.h
//  Palate
//
//  Created by Spencer Congero on 11/2/13.
//  Copyright (c) 2013 Spencer Congero. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Movie, ThemeTaste;

@interface Theme : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * weight;
@property (nonatomic, retain) ThemeTaste *themeTaste;
@property (nonatomic, retain) NSSet *whichMovies;
@end

@interface Theme (CoreDataGeneratedAccessors)

- (void)addWhichMoviesObject:(Movie *)value;
- (void)removeWhichMoviesObject:(Movie *)value;
- (void)addWhichMovies:(NSSet *)values;
- (void)removeWhichMovies:(NSSet *)values;

@end
