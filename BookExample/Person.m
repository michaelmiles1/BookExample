//
//  Person.m
//  BookExample
//
//  Created by Michael Miles on 8/13/19.
//  Copyright © 2019 Michael Miles. All rights reserved.
//

#import "Person.h"

@implementation Person

-(instancetype)initWithName:(NSString*)name birthday:(NSDate*)birthday {
    self = [super init];
    
    if (self) {
        _name = name;
        _birthday = birthday;
    }
    return self;
}

@end
