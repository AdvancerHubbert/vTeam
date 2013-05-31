//
//  IVTUIViewController.h
//  vTeam
//
//  Created by zhang hailong on 13-4-24.
//  Copyright (c) 2013年 hailong.org. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <vTeam/VTStyleOutletContainer.h>
#import <vTeam/VTDataOutletContainer.h>
#import <vTeam/IVTUIContext.h>
#import <vTeam/VTLayout.h>
#import <vTeam/VTLayoutContainer.h>

@protocol IVTUIViewController <NSObject>

@property(nonatomic,assign) id<IVTUIContext> context;
@property(nonatomic,assign) id parentController;
@property(nonatomic,readonly) BOOL isDisplaced;
@property(nonatomic,retain) id config;
@property(nonatomic,retain) NSString * alias;
@property(nonatomic,retain) NSString * basePath;
@property(nonatomic,retain) NSURL * url;
@property(nonatomic,retain) IBOutlet VTStyleOutletContainer * styleContainer;
@property(nonatomic,retain) IBOutlet VTDataOutletContainer * dataOutletContainer;
@property(nonatomic,retain) IBOutlet VTLayoutContainer * layoutContainer;

-(void) receiveUrl:(NSURL *) url source:(id) source;

-(BOOL) canOpenUrl:(NSURL *) url;

-(BOOL) openUrl:(NSURL *) url animated:(BOOL) animated;

-(void) reloadURL;

@end