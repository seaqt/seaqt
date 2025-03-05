#pragma once
#ifndef SEAQT_QTGUI_GEN_QRGBA64_H
#define SEAQT_QTGUI_GEN_QRGBA64_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRgba64;
#else
typedef struct QRgba64 QRgba64;
#endif

QRgba64* QRgba64_new();
QRgba64* QRgba64_new2(QRgba64* param1);
QRgba64* QRgba64_fromRgba64(unsigned long long c);
QRgba64* QRgba64_fromRgba642(uint16_t red, uint16_t green, uint16_t blue, uint16_t alpha);
QRgba64* QRgba64_fromRgba(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
QRgba64* QRgba64_fromArgb32(unsigned int rgb);
bool QRgba64_isOpaque(const QRgba64* self);
bool QRgba64_isTransparent(const QRgba64* self);
uint16_t QRgba64_red(const QRgba64* self);
uint16_t QRgba64_green(const QRgba64* self);
uint16_t QRgba64_blue(const QRgba64* self);
uint16_t QRgba64_alpha(const QRgba64* self);
void QRgba64_setRed(QRgba64* self, uint16_t _red);
void QRgba64_setGreen(QRgba64* self, uint16_t _green);
void QRgba64_setBlue(QRgba64* self, uint16_t _blue);
void QRgba64_setAlpha(QRgba64* self, uint16_t _alpha);
unsigned char QRgba64_red8(const QRgba64* self);
unsigned char QRgba64_green8(const QRgba64* self);
unsigned char QRgba64_blue8(const QRgba64* self);
unsigned char QRgba64_alpha8(const QRgba64* self);
unsigned int QRgba64_toArgb32(const QRgba64* self);
uint16_t QRgba64_toRgb16(const QRgba64* self);
QRgba64* QRgba64_premultiplied(const QRgba64* self);
QRgba64* QRgba64_unpremultiplied(const QRgba64* self);
unsigned long long QRgba64_ToUnsignedLongLong(const QRgba64* self);
void QRgba64_operatorAssign(QRgba64* self, unsigned long long _rgba);
void QRgba64_delete(QRgba64* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
