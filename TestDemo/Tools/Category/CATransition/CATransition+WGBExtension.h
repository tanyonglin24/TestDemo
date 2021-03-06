//
// CATransition+WGBExtension.h
// TestDemo
//
// Author:  @CoderWGB
// Github:  https://github.com/WangGuibin/TestDemo
// E-mail:  864562082@qq.com
//
// Created by CoderWGB on 2019/12/10
//
/**
Copyright (c) 2019 Wangguibin  

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
    
/**
 使用方法 将`CATransition`动画添加到layer上执行转场
@code
CATransition *transition = [CATransition wgb_createTransitionWithAnimationType:self.animationType subType:subType duration:1.0];
 [self.navigationController.view.layer addAnimation:transition forKey:nil];
 [self.navigationController pushViewController:vc animated:YES];
 
 CATransition *transition = [CATransition wgb_createTransitionWithAnimationType:(WGBTransitionAnimationTypePrivatePageUnCurl) subType:(WGBTransitionAnimationSubTypeFromTop) duration:0.5];
 [self.view.window.layer addAnimation:transition forKey:nil];
 [self dismissViewControllerAnimated:NO completion:^{
     
 }];

@endcode
 */


#import <QuartzCore/QuartzCore.h>
//注意: 有几个特殊效果需要真机才会有效果
typedef NS_ENUM(NSUInteger, WGBTransitionAnimationType) {
    //public api
    WGBTransitionAnimationTypePublicFade = 0, //淡入淡出
    WGBTransitionAnimationTypePublicMoveIn, //移动进入
    WGBTransitionAnimationTypePublicPush,//推入
    WGBTransitionAnimationTypePublicReveal,//揭开
    //private api
    WGBTransitionAnimationTypePrivateCube,//立方体
    WGBTransitionAnimationTypePrivateSuckEffect,//吮吸效果
    WGBTransitionAnimationTypePrivateOglFlip,//镜像翻转
    WGBTransitionAnimationTypePrivateRippleEffect,//水波
    WGBTransitionAnimationTypePrivatePageCurl,//翻页
    WGBTransitionAnimationTypePrivatePageUnCurl,//翻页逆动效
    WGBTransitionAnimationTypePrivateCameraIrisHollowOpen,//打开相机
    WGBTransitionAnimationTypePrivateCameraIrisHollowClose//关闭相机
};

typedef NS_ENUM(NSUInteger, WGBTransitionAnimationSubType) {
    WGBTransitionAnimationSubTypeFromRight,//向右
    WGBTransitionAnimationSubTypeFromLeft,//向左
    WGBTransitionAnimationSubTypeFromTop,//向上
    WGBTransitionAnimationSubTypeFromBottom//向下
};

NS_ASSUME_NONNULL_BEGIN

@interface CATransition (WGBExtension)

/// 创建转场动画对象
/// @param animationType 动画类型
/// @param subType 动画方向类型
/// @param duration 动画时长
+ (CATransition *)wgb_createTransitionWithAnimationType:(WGBTransitionAnimationType)animationType
                                            subType:(WGBTransitionAnimationSubType)subType
                                               duration:(NSTimeInterval)duration;

@end

NS_ASSUME_NONNULL_END
