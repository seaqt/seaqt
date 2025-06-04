#pragma once
#ifndef SEAQT_QTPDF_GEN_QPDFPAGENAVIGATOR_H
#define SEAQT_QTPDF_GEN_QPDFPAGENAVIGATOR_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QPdfLink;
class QPdfPageNavigator;
class QPointF;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPdfLink QPdfLink;
typedef struct QPdfPageNavigator QPdfPageNavigator;
typedef struct QPointF QPointF;
typedef struct QTimerEvent QTimerEvent;
#endif

QPdfPageNavigator* QPdfPageNavigator_new();
QPdfPageNavigator* QPdfPageNavigator_new2(QObject* parent);
void QPdfPageNavigator_virtbase(QPdfPageNavigator* src, QObject** outptr_QObject);
QMetaObject* QPdfPageNavigator_metaObject(const QPdfPageNavigator* self);
void* QPdfPageNavigator_metacast(QPdfPageNavigator* self, const char* param1);
int QPdfPageNavigator_metacall(QPdfPageNavigator* self, int param1, int param2, void** param3);
struct seaqt_string QPdfPageNavigator_tr(const char* s);
int QPdfPageNavigator_currentPage(const QPdfPageNavigator* self);
QPointF* QPdfPageNavigator_currentLocation(const QPdfPageNavigator* self);
double QPdfPageNavigator_currentZoom(const QPdfPageNavigator* self);
bool QPdfPageNavigator_backAvailable(const QPdfPageNavigator* self);
bool QPdfPageNavigator_forwardAvailable(const QPdfPageNavigator* self);
void QPdfPageNavigator_clear(QPdfPageNavigator* self);
void QPdfPageNavigator_jump(QPdfPageNavigator* self, QPdfLink* destination);
void QPdfPageNavigator_jump2(QPdfPageNavigator* self, int page, QPointF* location);
void QPdfPageNavigator_update(QPdfPageNavigator* self, int page, QPointF* location, double zoom);
void QPdfPageNavigator_forward(QPdfPageNavigator* self);
void QPdfPageNavigator_back(QPdfPageNavigator* self);
void QPdfPageNavigator_currentPageChanged(QPdfPageNavigator* self, int page);
void QPdfPageNavigator_connect_currentPageChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_currentLocationChanged(QPdfPageNavigator* self, QPointF* location);
void QPdfPageNavigator_connect_currentLocationChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_currentZoomChanged(QPdfPageNavigator* self, double zoom);
void QPdfPageNavigator_connect_currentZoomChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_backAvailableChanged(QPdfPageNavigator* self, bool available);
void QPdfPageNavigator_connect_backAvailableChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_forwardAvailableChanged(QPdfPageNavigator* self, bool available);
void QPdfPageNavigator_connect_forwardAvailableChanged(QPdfPageNavigator* self, intptr_t slot);
void QPdfPageNavigator_jumped(QPdfPageNavigator* self, QPdfLink* current);
void QPdfPageNavigator_connect_jumped(QPdfPageNavigator* self, intptr_t slot);
struct seaqt_string QPdfPageNavigator_tr2(const char* s, const char* c);
struct seaqt_string QPdfPageNavigator_tr3(const char* s, const char* c, int n);
void QPdfPageNavigator_jump3(QPdfPageNavigator* self, int page, QPointF* location, double zoom);

bool QPdfPageNavigator_override_virtual_metaObject(void* self, intptr_t slot);
QMetaObject* QPdfPageNavigator_virtualbase_metaObject(const void* self);
bool QPdfPageNavigator_override_virtual_metacast(void* self, intptr_t slot);
void* QPdfPageNavigator_virtualbase_metacast(void* self, const char* param1);
bool QPdfPageNavigator_override_virtual_metacall(void* self, intptr_t slot);
int QPdfPageNavigator_virtualbase_metacall(void* self, int param1, int param2, void** param3);
bool QPdfPageNavigator_override_virtual_event(void* self, intptr_t slot);
bool QPdfPageNavigator_virtualbase_event(void* self, QEvent* event);
bool QPdfPageNavigator_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPdfPageNavigator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPdfPageNavigator_override_virtual_timerEvent(void* self, intptr_t slot);
void QPdfPageNavigator_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPdfPageNavigator_override_virtual_childEvent(void* self, intptr_t slot);
void QPdfPageNavigator_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPdfPageNavigator_override_virtual_customEvent(void* self, intptr_t slot);
void QPdfPageNavigator_virtualbase_customEvent(void* self, QEvent* event);
bool QPdfPageNavigator_override_virtual_connectNotify(void* self, intptr_t slot);
void QPdfPageNavigator_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPdfPageNavigator_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPdfPageNavigator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QPdfLink* QPdfPageNavigator_protectedbase_currentLink(bool* _dynamic_cast_ok, const void* self);
QObject* QPdfPageNavigator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPdfPageNavigator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPdfPageNavigator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPdfPageNavigator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

const QMetaObject* QPdfPageNavigator_staticMetaObject();
void QPdfPageNavigator_delete(QPdfPageNavigator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
