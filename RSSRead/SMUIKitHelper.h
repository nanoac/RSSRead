//
//  SMUIKitHelper.h
//  QM
//
//  Created by cyol 005 on 13-4-9.
//  Copyright (c) 2013年 mars.tsang. All rights reserved.
//

#import <Foundation/Foundation.h>

#define NAVBARHEIGHT 64

#define SCREEN_BOUNDS [[UIScreen mainScreen] bounds]
#define SCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width
#define SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height

#define QM_TABLEVIEW_BACKGROUND_COLOR [UIColor clearColor]
#define QM_TABLEVIEW_SEPARATOR_COLOR [UIColor clearColor]
#define QM_TABLEVIEW_SHOWS_VERTICAL_SCROLL_INDICATOR YES
#define QM_TABLEVIEW_ROWHEIGHT 56

//#define COLOR_BACKGROUND @"#eeede7"
#define COLOR_BACKGROUND @"#FFFFFF"

#define LIST_BIG_FONT 15
#define LIST_SMALL_FONT 10
#define LIST_DARK_COLOR @"#111111"
#define LIST_LIGHT_COLOR @"#999999"
#define LIST_YELLOW_COLOR @"#CD8500"


#define SERVER_URL @"http://starming.sinaapp.com/index.php?v=dateapi&m="

@interface SMUIKitHelper : NSObject
//label
+(UILabel *)labelWithRect:(CGRect)rect text:(NSString *)text textColor:(NSString *)color fontSize:(CGFloat)size;
+(UILabel *)labelShadowWithRect:(CGRect)rect text:(NSString *)text textColor:(NSString *)color fontSize:(CGFloat)size;

//imageView
+(UIImageView *)imageViewWithRect:(CGRect)rect imageName:(NSString *)name;

//tableView
+(UITableView *)tableViewWithRect:(CGRect)rect delegateAndDataSource:(id)sender;
+(UITableView *)tableViewWithRect:(CGRect)rect separatorColor:(UIColor *)spColor backgroundColor:(UIColor *)bgColor showsVerticalScrollIndicator:(BOOL)isShowScroll rowHeight:(CGFloat)rowHeight delegateAndDataSource:(id)sender;

+(UIColor *)colorWithHexString:(NSString *)stringToConvert;
+(UIColor *)colorWithHexString:(NSString *)stringToConvert withAlpha:(CGFloat)alpha;
@end
