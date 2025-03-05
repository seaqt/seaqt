#pragma once
#ifndef SEAQT_QTGUI_GEN_QICONENGINE_H
#define SEAQT_QTGUI_GEN_QICONENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDataStream;
class QIconEngine;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__ScaledPixmapArgument)
typedef QIconEngine::ScaledPixmapArgument QIconEngine__ScaledPixmapArgument;
#else
class QIconEngine__ScaledPixmapArgument;
#endif
class QPainter;
class QPixmap;
class QRect;
class QSize;
#else
typedef struct QDataStream QDataStream;
typedef struct QIconEngine QIconEngine;
typedef struct QIconEngine__ScaledPixmapArgument QIconEngine__ScaledPixmapArgument;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QRect QRect;
typedef struct QSize QSize;
#endif

QIconEngine* QIconEngine_new();
void QIconEngine_paint(QIconEngine* self, QPainter* painter, QRect* rect, int mode, int state);
QSize* QIconEngine_actualSize(QIconEngine* self, QSize* size, int mode, int state);
QPixmap* QIconEngine_pixmap(QIconEngine* self, QSize* size, int mode, int state);
void QIconEngine_addPixmap(QIconEngine* self, QPixmap* pixmap, int mode, int state);
void QIconEngine_addFile(QIconEngine* self, struct miqt_string fileName, QSize* size, int mode, int state);
struct miqt_string QIconEngine_key(const QIconEngine* self);
QIconEngine* QIconEngine_clone(const QIconEngine* self);
bool QIconEngine_read(QIconEngine* self, QDataStream* in);
bool QIconEngine_write(const QIconEngine* self, QDataStream* out);
struct miqt_array /* of QSize* */  QIconEngine_availableSizes(QIconEngine* self, int mode, int state);
struct miqt_string QIconEngine_iconName(QIconEngine* self);
bool QIconEngine_isNull(QIconEngine* self);
QPixmap* QIconEngine_scaledPixmap(QIconEngine* self, QSize* size, int mode, int state, double scale);
void QIconEngine_virtualHook(QIconEngine* self, int id, void* data);
bool QIconEngine_override_virtual_paint(void* self, intptr_t slot);
void QIconEngine_virtualbase_paint(void* self, QPainter* painter, QRect* rect, int mode, int state);
bool QIconEngine_override_virtual_actualSize(void* self, intptr_t slot);
QSize* QIconEngine_virtualbase_actualSize(void* self, QSize* size, int mode, int state);
bool QIconEngine_override_virtual_pixmap(void* self, intptr_t slot);
QPixmap* QIconEngine_virtualbase_pixmap(void* self, QSize* size, int mode, int state);
bool QIconEngine_override_virtual_addPixmap(void* self, intptr_t slot);
void QIconEngine_virtualbase_addPixmap(void* self, QPixmap* pixmap, int mode, int state);
bool QIconEngine_override_virtual_addFile(void* self, intptr_t slot);
void QIconEngine_virtualbase_addFile(void* self, struct miqt_string fileName, QSize* size, int mode, int state);
bool QIconEngine_override_virtual_key(void* self, intptr_t slot);
struct miqt_string QIconEngine_virtualbase_key(const void* self);
bool QIconEngine_override_virtual_clone(void* self, intptr_t slot);
QIconEngine* QIconEngine_virtualbase_clone(const void* self);
bool QIconEngine_override_virtual_read(void* self, intptr_t slot);
bool QIconEngine_virtualbase_read(void* self, QDataStream* in);
bool QIconEngine_override_virtual_write(void* self, intptr_t slot);
bool QIconEngine_virtualbase_write(const void* self, QDataStream* out);
bool QIconEngine_override_virtual_availableSizes(void* self, intptr_t slot);
struct miqt_array /* of QSize* */  QIconEngine_virtualbase_availableSizes(void* self, int mode, int state);
bool QIconEngine_override_virtual_iconName(void* self, intptr_t slot);
struct miqt_string QIconEngine_virtualbase_iconName(void* self);
bool QIconEngine_override_virtual_isNull(void* self, intptr_t slot);
bool QIconEngine_virtualbase_isNull(void* self);
bool QIconEngine_override_virtual_scaledPixmap(void* self, intptr_t slot);
QPixmap* QIconEngine_virtualbase_scaledPixmap(void* self, QSize* size, int mode, int state, double scale);
bool QIconEngine_override_virtual_virtualHook(void* self, intptr_t slot);
void QIconEngine_virtualbase_virtualHook(void* self, int id, void* data);
void QIconEngine_delete(QIconEngine* self);

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new(QIconEngine__ScaledPixmapArgument* param1);
void QIconEngine__ScaledPixmapArgument_operatorAssign(QIconEngine__ScaledPixmapArgument* self, QIconEngine__ScaledPixmapArgument* param1);
void QIconEngine__ScaledPixmapArgument_delete(QIconEngine__ScaledPixmapArgument* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
