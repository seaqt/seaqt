#pragma once
#ifndef SEAQT_QTGUI_GEN_QCLIPBOARD_H
#define SEAQT_QTGUI_GEN_QCLIPBOARD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QClipboard;
class QImage;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QObject;
class QPixmap;
#else
typedef struct QClipboard QClipboard;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
#endif

void QClipboard_virtbase(QClipboard* src, QObject** outptr_QObject);
QMetaObject* QClipboard_metaObject(const QClipboard* self);
void* QClipboard_metacast(QClipboard* self, const char* param1);
int QClipboard_metacall(QClipboard* self, int param1, int param2, void** param3);
struct miqt_string QClipboard_tr(const char* s);
void QClipboard_clear(QClipboard* self);
bool QClipboard_supportsSelection(const QClipboard* self);
bool QClipboard_supportsFindBuffer(const QClipboard* self);
bool QClipboard_ownsSelection(const QClipboard* self);
bool QClipboard_ownsClipboard(const QClipboard* self);
bool QClipboard_ownsFindBuffer(const QClipboard* self);
struct miqt_string QClipboard_text(const QClipboard* self);
struct miqt_string QClipboard_textWithSubtype(const QClipboard* self, struct miqt_string subtype);
void QClipboard_setText(QClipboard* self, struct miqt_string param1);
QMimeData* QClipboard_mimeData(const QClipboard* self);
void QClipboard_setMimeData(QClipboard* self, QMimeData* data);
QImage* QClipboard_image(const QClipboard* self);
QPixmap* QClipboard_pixmap(const QClipboard* self);
void QClipboard_setImage(QClipboard* self, QImage* param1);
void QClipboard_setPixmap(QClipboard* self, QPixmap* param1);
void QClipboard_changed(QClipboard* self, int mode);
void QClipboard_connect_changed(QClipboard* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t));
void QClipboard_selectionChanged(QClipboard* self);
void QClipboard_connect_selectionChanged(QClipboard* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
void QClipboard_findBufferChanged(QClipboard* self);
void QClipboard_connect_findBufferChanged(QClipboard* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
void QClipboard_dataChanged(QClipboard* self);
void QClipboard_connect_dataChanged(QClipboard* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
struct miqt_string QClipboard_tr2(const char* s, const char* c);
struct miqt_string QClipboard_tr3(const char* s, const char* c, int n);
void QClipboard_clear1(QClipboard* self, int mode);
struct miqt_string QClipboard_text1(const QClipboard* self, int mode);
struct miqt_string QClipboard_text2(const QClipboard* self, struct miqt_string subtype, int mode);
void QClipboard_setText2(QClipboard* self, struct miqt_string param1, int mode);
QMimeData* QClipboard_mimeData1(const QClipboard* self, int mode);
void QClipboard_setMimeData2(QClipboard* self, QMimeData* data, int mode);
QImage* QClipboard_image1(const QClipboard* self, int mode);
QPixmap* QClipboard_pixmap1(const QClipboard* self, int mode);
void QClipboard_setImage2(QClipboard* self, QImage* param1, int mode);
void QClipboard_setPixmap2(QClipboard* self, QPixmap* param1, int mode);
const QMetaObject* QClipboard_staticMetaObject();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
