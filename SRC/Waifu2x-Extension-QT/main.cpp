﻿/*
    Copyright (C) 2020  Aaron Feng

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    My Github homepage: https://github.com/AaronFeng753
*/

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow;
    w->show();
    return a.exec();
}

/*
Change log:
- 新特性:当启用"删除原文件"时,可选择将原文件移动到回收站
- 新特性:支持选择是否启用自定义视频设置(附加设置,可选,默认禁用)
- 新特性:指定输出目录
- 新特性:扫描子文件夹(附加设置,可选,默认启用)
- 新特性:waifu2x-ncnn-vulkan 引擎新增TTA支持
- 新特性:waifu2x-converter 引擎新增TTA支持
- 新特性:文件列表互动性设置(附加设置)
- 更新waifu2x-ncnn-vulkan(20200223)
- 性能优化
- 完善错误检测
- 修复bug:文本错误
--------------------------------------------------------------------------
To do:
- 利用ffprobe获取视频信息
- 优化计算自定义分辨率所需放大倍数的函数
- 改进剩余时间算法
- 用python写一个视频的特殊字符路径检测(路径输入到python ext 让他看能不能判断exist)
- 放大视频时, 判断磁盘空间够不够, 提取十个帧取平均值然后计算用量
*/

/*
Integrated component(In releases):
- waifu2x-ncnn-vulkan version 20200223
- Anime4K Java v0.9 Beta
- ffmpeg version 4.2.2
- gifsicle version 1.92
- Waifu2x-converter version: v5.3.3
- ImageMagick 7.0.9-22-Q16-x64
*/

/*
Icons made by : Freepik (https://www.flaticon.com/authors/freepik) From Flaticon : https://www.flaticon.com/
*/
