//
//  TF_ConfigHeader.h
//  TFKit-OC
//
//  Created by Twisted Fate on 2019/7/31.
//  Copyright © 2019 TwistedFate. All rights reserved.
//

#ifndef TF_ConfigHeader_h
#define TF_ConfigHeader_h




// UI相关
#define kLightGrayColor [UIColor tf_colorWithHexString:@"f0f0f0"] // 页面背景
#define kLightGrayTextColor [UIColor tf_colorWithHexString:@"aaaaaa"]  // 浅灰色字体
#define kMainTitleTextColor [UIColor tf_colorWithHexString:@"444444"]   // 主标题字色
#define kSubTitleTextColor [UIColor tf_colorWithHexString:@"b0b0b0"]   // 副标题字色
#define kDarkRedColor [UIColor tf_colorWithHexString:@"d0021b"]//警示深红色
#define kLightOrangeColor [UIColor tf_colorWithHexString:@"fe7040"] // 橘黄色

#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height
#define kScreenPoint6HalfScale [UIScreen mainScreen].bounds.size.width / 375.f
#define kNavigationBarColor [UIColor tf_colorWithHexString:@"008CE9"]


#define iPhoneX [UIDevice isiPhoneX]
#define kNavigationBarHeight ((iPhoneX) ? (24.f+64.f) : 64.f)
#define kStatusBarHeight ((iPhoneX) ? (20.f+24.f) : 20.f)
#define kTabbarHeight ((iPhoneX) ? 83.f : 49.f)


#define IsNilOrNull(_ref)   (((_ref) == nil) || ([(_ref) isEqual:[NSNull null]]))
#define IsStrEmpty(_ref)            (IsNilOrNull(_ref) || (![(_ref) isKindOfClass:[NSString class]]) || ([(_ref) isEqualToString:@""]))

#define BLOCK_EXEC(block, ...) if (block) { block(__VA_ARGS__); };
#define WS(weakSelf)    __weak __typeof(&*self)weakSelf = self

#ifdef DEBUG
#define LogInfo( s, ... ) NSLog( @"[LogInfo]<%@:(%d)> %@", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
#else
#define LogInfo( s, ... )
#endif


// Block
typedef void (^BoolBlock)(BOOL flag, NSError *error);
typedef void (^ErrorBlock)(NSError *error);
typedef void (^ArrayBlock)(NSMutableArray *models, NSError *error);

// refresh type
typedef NS_ENUM(NSUInteger, TF_DataLoadingType) {
    TF_DataLoadingTypeRefresh = 1,
    TF_DataLoadingTypeInfinite
};


#endif /* TF_ConfigHeader_h */
