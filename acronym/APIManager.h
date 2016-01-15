//
//  APIManager.h
//  acronym
//
//  Created by Juan Bungay on 12/15/15.
//  Copyright © 2015 ebay. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^APIManagerRequestCompletionBlock)(NSURLResponse *result, NSError *error);

@interface APIManager : NSObject

+ (APIManager*)sharedInstance;

/*
 @brief : Return a acronym search result.
 */
-(void)searchAcronym:(NSString*)acronym completion:(APIManagerRequestCompletionBlock)completion;


@end
