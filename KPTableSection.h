//
//  KPTableSection.h
//  CoreDataPlayground
//
//  Created by Konstantin Pavlikhin on 05.09.14.
//  Copyright (c) 2014 Konstantin Pavlikhin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NSManagedObject;

@interface KPTableSection : NSObject

- (instancetype) initWithSectionName: (id<NSObject>) sectionName nestedObjects: (NSArray*) nestedObjects;

@property(readwrite, strong, nonatomic) id<NSObject> sectionName;

// Collection KVO-compatible property.
@property(readonly) NSArray* nestedObjects;

- (void) insertObject: (NSManagedObject*) object inSectionsAtIndex: (NSUInteger) index;

@end