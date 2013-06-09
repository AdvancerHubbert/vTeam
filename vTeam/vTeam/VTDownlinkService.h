//
//  VTDownlinkService.h
//  vTeam
//
//  Created by zhang hailong on 13-5-2.
//  Copyright (c) 2013年 hailong.org. All rights reserved.
//

#import "VTService.h"

#import <vTeam/IVTDownlinkTask.h>

@interface VTDownlinkService : VTService

@property(nonatomic,retain) NSString * directory;

-(id) cachedFromDownlinkTask:(id<IVTDownlinkTask>) downlinkTask forTaskType:(Protocol *) taskType;

-(void) vtDownlinkTaskDidLoadedFromCache:(id<IVTDownlinkTask>) downlinkTask forTaskType:(Protocol *) taskType;

-(void) vtDownlinkTask:(id<IVTDownlinkTask>) downlinkTask didResponse:(id) data isCache:(BOOL) isCache forTaskType:(Protocol *) taskType;

-(void) vtDownlinkTask:(id<IVTDownlinkTask>) downlinkTask didFitalError:(NSError *) error forTaskType:(Protocol *) taskType;

-(NSString *) cacheValueKey:(id<IVTDownlinkTask>) task forTaskType:(Protocol *) taskType;

@end
