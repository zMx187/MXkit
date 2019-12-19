//
//  UITableView+CYAddition.m
//  CYKit
//
//  Created by 成焱 on 2019/10/23.
//

#import "UITableView+CYAddition.h"
#import "UIScrollView+CYAddition.h"



@implementation UITableView (CYAddition)
- (void) cy_adjustForIOS11
{
    if (@available(iOS 11, *)) {
        self.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
        self.estimatedRowHeight = 0;
        self.estimatedSectionFooterHeight = 0;
        self.estimatedSectionHeaderHeight = 0;
    } else {
    
    }
}

- (void) cy_adjustForIOS13
{
    [self cy_adjustForIOS11];
    if (@available(iOS 13, *)) {
        self.overrideUserInterfaceStyle = UIUserInterfaceStyleLight;
    }
}
@end
