/// ********************************************************************************************************************
/// @copyright Tianchi C++ source library for Qt5 (天池共享源码库)\n
/// 天池共享源码库开发组(www.qtcn.org)\n
/// @license 授权协议：请阅读天池共享源码库附带的授权协议(LICENSE.LGPLv2.1)\n
/// ********************************************************************************************************************
/// @file tcQrencode.h
/// @brief 生成二维码
/// @version 1.0
/// @date 2014.12.30
/// @author 圣域天子(Jonix@qtcn.org)
///
/// ====================================================================================================================

#pragma once
#ifndef TIANCHI_TCQRENCODE_H
#define TIANCHI_TCQRENCODE_H

#ifndef TIANCHI_API
    #define TIANCHI_API
#endif

#include <QImage>
#include <QString>

class TIANCHI_API TcQrencode
{
public:
    static QImage encodeImage(const QString& s, int bulk=8);
};

#endif // TIANCHI_TCQRENCODE_H

