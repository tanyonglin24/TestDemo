//
// WGBFloatViewDemoViewController.m
// TestDemo
//
// Author:  @CoderWGB
// Github:  https://github.com/WangGuibin/TestDemo
// E-mail:  864562082@qq.com
//
// Created by CoderWGB on 2019/12/9
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
    

#import "WGBFloatViewDemoViewController.h"
#import "WGBFloatView.h"

@interface WGBFloatViewDemoViewController ()



@end

@implementation WGBFloatViewDemoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    [self testFloatView];
}

- (void)testFloatView{
    //测UIView利用贝塞尔曲线maskLayer实现圆角边框
    UIView *redView = [[UIView alloc] initWithFrame:CGRectMake(50, 300, 200 , 200)];
    redView.backgroundColor = [UIColor redColor];
    [self.view addSubview: redView];
    [redView wgb_clipCorners:(UIRectCornerTopLeft|UIRectCornerBottomRight) radius:15 border:2.0 borderColor:[UIColor cyanColor]];

    //浮动可移动位置的View
    WGBFloatView *floatView = [[WGBFloatView alloc] initWithFrame:CGRectMake(KWIDTH - 50, 200, 50 , 50)];
    floatView.backgroundColor = [UIColor orangeColor];
    ViewRadius(floatView, 25);
    [self.view addSubview:floatView];
}


@end
