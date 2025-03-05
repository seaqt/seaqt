#pragma once
#ifndef SEAQT_QTQUICK_GEN_QSGENGINE_H
#define SEAQT_QTQUICK_GEN_QSGENGINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QImage;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSGAbstractRenderer;
class QSGEngine;
class QSGImageNode;
class QSGNinePatchNode;
class QSGRectangleNode;
class QSGRendererInterface;
class QSGTexture;
class QSize;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSGAbstractRenderer QSGAbstractRenderer;
typedef struct QSGEngine QSGEngine;
typedef struct QSGImageNode QSGImageNode;
typedef struct QSGNinePatchNode QSGNinePatchNode;
typedef struct QSGRectangleNode QSGRectangleNode;
typedef struct QSGRendererInterface QSGRendererInterface;
typedef struct QSGTexture QSGTexture;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

struct QSGEngine_VTable {
	void (*destructor)(struct QSGEngine_VTable* vtbl, QSGEngine* self);
	QMetaObject* (*metaObject)(struct QSGEngine_VTable* vtbl, const QSGEngine* self);
	void* (*metacast)(struct QSGEngine_VTable* vtbl, QSGEngine* self, const char* param1);
	int (*metacall)(struct QSGEngine_VTable* vtbl, QSGEngine* self, int param1, int param2, void** param3);
	bool (*event)(struct QSGEngine_VTable* vtbl, QSGEngine* self, QEvent* event);
	bool (*eventFilter)(struct QSGEngine_VTable* vtbl, QSGEngine* self, QObject* watched, QEvent* event);
	void (*timerEvent)(struct QSGEngine_VTable* vtbl, QSGEngine* self, QTimerEvent* event);
	void (*childEvent)(struct QSGEngine_VTable* vtbl, QSGEngine* self, QChildEvent* event);
	void (*customEvent)(struct QSGEngine_VTable* vtbl, QSGEngine* self, QEvent* event);
	void (*connectNotify)(struct QSGEngine_VTable* vtbl, QSGEngine* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QSGEngine_VTable* vtbl, QSGEngine* self, QMetaMethod* signal);
};
QSGEngine* QSGEngine_new(struct QSGEngine_VTable* vtbl);
QSGEngine* QSGEngine_new2(struct QSGEngine_VTable* vtbl, QObject* parent);
void QSGEngine_virtbase(QSGEngine* src, QObject** outptr_QObject);
QMetaObject* QSGEngine_metaObject(const QSGEngine* self);
void* QSGEngine_metacast(QSGEngine* self, const char* param1);
int QSGEngine_metacall(QSGEngine* self, int param1, int param2, void** param3);
struct miqt_string QSGEngine_tr(const char* s);
struct miqt_string QSGEngine_trUtf8(const char* s);
void QSGEngine_invalidate(QSGEngine* self);
QSGAbstractRenderer* QSGEngine_createRenderer(const QSGEngine* self);
QSGTexture* QSGEngine_createTextureFromImage(const QSGEngine* self, QImage* image);
QSGTexture* QSGEngine_createTextureFromId(const QSGEngine* self, unsigned int id, QSize* size);
QSGRendererInterface* QSGEngine_rendererInterface(const QSGEngine* self);
QSGRectangleNode* QSGEngine_createRectangleNode(const QSGEngine* self);
QSGImageNode* QSGEngine_createImageNode(const QSGEngine* self);
QSGNinePatchNode* QSGEngine_createNinePatchNode(const QSGEngine* self);
struct miqt_string QSGEngine_tr2(const char* s, const char* c);
struct miqt_string QSGEngine_tr3(const char* s, const char* c, int n);
struct miqt_string QSGEngine_trUtf82(const char* s, const char* c);
struct miqt_string QSGEngine_trUtf83(const char* s, const char* c, int n);
QSGTexture* QSGEngine_createTextureFromImage2(const QSGEngine* self, QImage* image, int options);
QSGTexture* QSGEngine_createTextureFromId3(const QSGEngine* self, unsigned int id, QSize* size, int options);
QMetaObject* QSGEngine_virtualbase_metaObject(const void* self);
void* QSGEngine_virtualbase_metacast(void* self, const char* param1);
int QSGEngine_virtualbase_metacall(void* self, int param1, int param2, void** param3);
bool QSGEngine_virtualbase_event(void* self, QEvent* event);
bool QSGEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
void QSGEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);
void QSGEngine_virtualbase_childEvent(void* self, QChildEvent* event);
void QSGEngine_virtualbase_customEvent(void* self, QEvent* event);
void QSGEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QSGEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QSGEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSGEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSGEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSGEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
const QMetaObject* QSGEngine_staticMetaObject();
void QSGEngine_delete(QSGEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
