//
//  FFAttributedClickLabel.h
//  FFAttributedClickLabel
//
//  Created by Mr.Yao on 16/5/14.
//  Copyright © 2016年 Mr.Yao. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  模型  可自定义  这里只是举个🌰
 */
@interface FFAttributedClickItem : NSObject

/**
 *  区间 举个例子 （2，6）  这部分会高亮并可点击
 */
@property (assign, nonatomic) NSRange range;

/**
 * 点击后跳转的url
 */
@property (copy, nonatomic) NSString * url;


@end

 /// ---------------------

@class FFAttributedClickLabel;

@protocol FFAttributedClickLabelDelegate <NSObject>

- (void)FFAttrbutedLabel:(FFAttributedClickLabel *)label click:(FFAttributedClickItem *)model;

@end


@interface FFAttributedClickLabel : UILabel


@property (assign, nonatomic) id  <FFAttributedClickLabelDelegate>delegate;

@property (strong, nonatomic) NSMutableArray * linkArray;

@end
