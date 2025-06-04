#pragma once
#ifndef SEAQT_QTPDF_GEN_QPDFPAGERENDERER_H
#define SEAQT_QTPDF_GEN_QPDFPAGERENDERER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt-runtime.h"

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
class QPdfDocument;
class QPdfDocumentRenderOptions;
class QPdfPageRenderer;
class QSize;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPdfDocument QPdfDocument;
typedef struct QPdfDocumentRenderOptions QPdfDocumentRenderOptions;
typedef struct QPdfPageRenderer QPdfPageRenderer;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
#endif

QPdfPageRenderer* QPdfPageRenderer_new();
QPdfPageRenderer* QPdfPageRenderer_new2(QObject* parent);
void QPdfPageRenderer_virtbase(QPdfPageRenderer* src, QObject** outptr_QObject);
QMetaObject* QPdfPageRenderer_metaObject(const QPdfPageRenderer* self);
void* QPdfPageRenderer_metacast(QPdfPageRenderer* self, const char* param1);
int QPdfPageRenderer_metacall(QPdfPageRenderer* self, int param1, int param2, void** param3);
struct seaqt_string QPdfPageRenderer_tr(const char* s);
struct seaqt_string QPdfPageRenderer_trUtf8(const char* s);
int QPdfPageRenderer_renderMode(const QPdfPageRenderer* self);
void QPdfPageRenderer_setRenderMode(QPdfPageRenderer* self, int mode);
QPdfDocument* QPdfPageRenderer_document(const QPdfPageRenderer* self);
void QPdfPageRenderer_setDocument(QPdfPageRenderer* self, QPdfDocument* document);
unsigned long long QPdfPageRenderer_requestPage(QPdfPageRenderer* self, int pageNumber, QSize* imageSize);
void QPdfPageRenderer_documentChanged(QPdfPageRenderer* self, QPdfDocument* document);
void QPdfPageRenderer_connect_documentChanged(QPdfPageRenderer* self, intptr_t slot);
void QPdfPageRenderer_renderModeChanged(QPdfPageRenderer* self, int renderMode);
void QPdfPageRenderer_connect_renderModeChanged(QPdfPageRenderer* self, intptr_t slot);
void QPdfPageRenderer_pageRendered(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QImage* image, QPdfDocumentRenderOptions* options, unsigned long long requestId);
void QPdfPageRenderer_connect_pageRendered(QPdfPageRenderer* self, intptr_t slot);
struct seaqt_string QPdfPageRenderer_tr2(const char* s, const char* c);
struct seaqt_string QPdfPageRenderer_tr3(const char* s, const char* c, int n);
struct seaqt_string QPdfPageRenderer_trUtf82(const char* s, const char* c);
struct seaqt_string QPdfPageRenderer_trUtf83(const char* s, const char* c, int n);
unsigned long long QPdfPageRenderer_requestPage2(QPdfPageRenderer* self, int pageNumber, QSize* imageSize, QPdfDocumentRenderOptions* options);

bool QPdfPageRenderer_override_virtual_metaObject(void* self, intptr_t slot);
QMetaObject* QPdfPageRenderer_virtualbase_metaObject(const void* self);
bool QPdfPageRenderer_override_virtual_metacast(void* self, intptr_t slot);
void* QPdfPageRenderer_virtualbase_metacast(void* self, const char* param1);
bool QPdfPageRenderer_override_virtual_metacall(void* self, intptr_t slot);
int QPdfPageRenderer_virtualbase_metacall(void* self, int param1, int param2, void** param3);
bool QPdfPageRenderer_override_virtual_event(void* self, intptr_t slot);
bool QPdfPageRenderer_virtualbase_event(void* self, QEvent* event);
bool QPdfPageRenderer_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPdfPageRenderer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPdfPageRenderer_override_virtual_timerEvent(void* self, intptr_t slot);
void QPdfPageRenderer_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPdfPageRenderer_override_virtual_childEvent(void* self, intptr_t slot);
void QPdfPageRenderer_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPdfPageRenderer_override_virtual_customEvent(void* self, intptr_t slot);
void QPdfPageRenderer_virtualbase_customEvent(void* self, QEvent* event);
bool QPdfPageRenderer_override_virtual_connectNotify(void* self, intptr_t slot);
void QPdfPageRenderer_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPdfPageRenderer_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPdfPageRenderer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QPdfPageRenderer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPdfPageRenderer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPdfPageRenderer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPdfPageRenderer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

const QMetaObject* QPdfPageRenderer_staticMetaObject();
void QPdfPageRenderer_delete(QPdfPageRenderer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
