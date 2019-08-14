//
//  Book.m
//  BookExample
//
//  Created by Michael Miles on 8/13/19.
//  Copyright © 2019 Michael Miles. All rights reserved.
//

#import "Book.h"

@implementation Book

-(instancetype)initWithTitle:(NSString*)title author:(Person*)author year:(int)year {
    self = [super init];
    
    if (self) {
        _title = title;
        _author = author;
        _yearPublished = year;
    }
    return self;
}

@end
