//
//  Person.h
//  BookExample
//
//  Created by Michael Miles on 8/13/19.
//  Copyright © 2019 Michael Miles. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic) NSDate *birthday;

-(instancetype)initWithName:(NSString*)name birthday:(NSDate*)birthday;

@end
