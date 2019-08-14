//
//  Book.h
//  BookExample
//
//  Created by Michael Miles on 8/13/19.
//  Copyright © 2019 Michael Miles. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

@interface Book : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) Person *author;
@property (nonatomic) int yearPublished;

-(instancetype)initWithTitle:(NSString*)title author:(Person*)author year:(int)year;

@end
