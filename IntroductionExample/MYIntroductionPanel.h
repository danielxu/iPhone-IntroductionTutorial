//
//  MYIntroductionPanel.h
//  IntroductionExample
//
//  Created by Matthew York on 3/6/13.
//  Copyright (c) 2013 Matthew York. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MYIntroductionPanel : NSObject

@property (nonatomic, retain) UIImage *Image;
@property (nonatomic, retain) NSString *Description;

-(id)initWithimage:(UIImage *)image description:(NSString *)description;

@end
