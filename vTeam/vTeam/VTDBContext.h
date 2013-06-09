//
//  VTDBContext.h
//  vTeam
//
//  Created by zhang hailong on 13-6-4.
//  Copyright (c) 2013年 hailong.org. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <vTeam/VTDBObject.h>
#import <vTeam/VTSqlite.h>

@interface VTDBContext : NSObject

@property(nonatomic,retain) VTSqlite * db;

-(void) regDBObjectClass:(Class) dbObjectClass;

-(BOOL) insertObject:(VTDBObject *) dbObject;

-(BOOL) deleteObject:(VTDBObject *) dbObject;

-(BOOL) updateObject:(VTDBObject *) dbObject;

-(id<IVTSqliteCursor>) query:(Class) dbObjectClass sql:(NSString *) sql data:(id) data;

@end
