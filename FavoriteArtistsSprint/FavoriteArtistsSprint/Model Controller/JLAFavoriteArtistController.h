//
//  JLAFavoriteArtistController.h
//  FavoriteArtistsSprint
//
//  Created by Jorge Alvarez on 3/20/20.
//  Copyright © 2020 Jorge Alvarez. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JLAFavoriteArtist;

NS_ASSUME_NONNULL_BEGIN

@interface JLAFavoriteArtistController : NSObject

@property (nonatomic, readonly) NSArray *favoriteArtists;

- (void)fetchFavoriteArtistByName:(NSString *)strArtist completion:(void(^)(JLAFavoriteArtist *, NSError *error))completion;

- (void)addArtistWithArtist:(NSString *)artist
                       year:(int)year
                        bio:(NSString *)bio;

- (NSURL *)applicationDocumentsDirectory;

@end

NS_ASSUME_NONNULL_END
