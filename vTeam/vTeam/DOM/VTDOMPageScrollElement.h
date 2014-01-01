//
//  VTDOMPageScrollElement.h
//  vTeam
//
//  Created by zhang hailong on 14-1-1.
//  Copyright (c) 2014年 hailong.org. All rights reserved.
//

#import <vTeam/VTDOMViewElement.h>

@interface VTDOMPageScrollElement : VTDOMViewElement<UIScrollViewDelegate>

@property(nonatomic,readonly) UIScrollView * contentView;

-(void) reloadData;

@end
