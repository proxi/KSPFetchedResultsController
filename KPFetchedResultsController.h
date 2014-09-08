//
//  KPFetchedResultsController.h
//  CoreDataPlayground
//
//  Created by Konstantin Pavlikhin on 04.09.14.
//  Copyright (c) 2014 Konstantin Pavlikhin. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class NSFetchRequest, NSManagedObjectContext;

@protocol KPFetchedResultsControllerDelegate;

// Этот класс делался с прицелом на использование в качестве датасурса NSTableView.
@interface KPFetchedResultsController : NSObject

- (instancetype) initWithFetchRequest: (NSFetchRequest*) fetchRequest managedObjectContext: (NSManagedObjectContext*) context /* NS_DESIGNATED_INITIALIZER */;

- (BOOL) performFetch: (NSError* __autoreleasing*) error;

@property(readonly, nonatomic) NSFetchRequest* fetchRequest;

@property(readonly, nonatomic) NSManagedObjectContext* managedObjectContext;

@property(readwrite, weak, nonatomic) id<KPFetchedResultsControllerDelegate> delegate;

// Collection KVO-compatible property.
@property(readonly, nonatomic) NSArray* fetchedObjects;

@end
