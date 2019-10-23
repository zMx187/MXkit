//
//  CYKitDefines.h
//  Pods
//
//  Created by 成焱 on 2019/8/16.
//

#ifndef CYKitDefines_h
#define CYKitDefines_h

#define CY_IsiPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(320, 480), [[UIScreen mainScreen] currentMode].size) : NO)  //是否是iphone4
#define CY_IsiPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO) //是否是iphone5
#define CY_IsiPhone4s ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)  //是否是iphone4s
#define CY_IsiPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO) //是否是iphone6
#define CY_IsiPhone6P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO) //是否是iphone6p
#define CY_IsiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO) //是否是iphoneX
#define CY_IS_IPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) : NO)  //是否是iphoneXr
#define CY_IS_IPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)//是否是iPhoneXsMax

//判断iPhoneX所有系列
#define CY_IS_PhoneXAll (CY_IsiPhoneX || CY_IS_IPHONE_Xr || CY_IS_IPHONE_Xs_Max)
#define CY_Height_NavContentBar 44.0f
#define CY_Height_StatusBar (CY_IS_PhoneXAll? 44.0 : 20.0)
#define CY_Height_NavBar (CY_IS_PhoneXAll ? 88.0 : 64.0)
#define CY_Height_TabBar (CY_IS_PhoneXAll ? 83.0 : 49.0)
#define CY_Height_Bottom_SafeArea (CY_IS_PhoneXAll ? 34.0 : 0)
#define CY_Above_IPhone6 ([UIScreen mainScreen].bounds.size.width >= 375)
#define CY_IPhone6Scale(x) (CY_Above_IPhone6?(x):(SCREEN_WIDTH*(x)/375.f))

#define CYPingFangSCRegular(x)       [UIFont fontWithName:@"PingFang-SC-Regular" size:x]
#define CYPingFangSCMedium(x)        [UIFont fontWithName:@"PingFangSC-Medium" size:x]
#define CYPingFangSCBold(x)        [UIFont fontWithName:@"PingFangSC-Bold" size:x]

#define CY_Sigle_Line_Height             (1/[UIScreen mainScreen].scale)
#define RGBColor(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

#ifndef CY_CLAMP // return the clamped value
#define CY_CLAMP(_x_, _low_, _high_)  (((_x_) > (_high_)) ? (_high_) : (((_x_) < (_low_)) ? (_low_) : (_x_)))
#endif

#ifndef CY_SWAP // swap two value
#define CY_SWAP(_a_, _b_)  do { __typeof__(_a_) _tmp_ = (_a_); (_a_) = (_b_); (_b_) = _tmp_; } while (0)
#endif

typedef void(^CYVoidBlock)(void);
typedef void(^CYBoolBlock)(BOOL yesno);
typedef void(^CYNumberBlock)(NSNumber *num);
typedef void(^CYErrorBlock)(NSError *error);
typedef void(^CYIDBlock)(id obj);
typedef void(^CYArrayBlock)(NSArray *array);
typedef void(^CYDictionaryBlock)(NSDictionary *dictionary);
typedef void(^CYSetBlock)(NSSet *set);
typedef void(^CYStringBlock)(NSString *string);
typedef void(^CYSuccessBlock)(BOOL success, id obj);
typedef void(^CYFailureBlock)(NSError *error, id obj);
typedef void(^CYImageBlock)(UIImage *img);
#endif /* CYKitDefines_h */
