#pragma once
#ifndef SEAQT_QTDESIGNER_GEN_QEXTENSIONMANAGER_H
#define SEAQT_QTDESIGNER_GEN_QEXTENSIONMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt-runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractExtensionFactory;
class QAbstractExtensionManager;
class QChildEvent;
class QEvent;
class QExtensionManager;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractExtensionFactory QAbstractExtensionFactory;
typedef struct QAbstractExtensionManager QAbstractExtensionManager;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QExtensionManager QExtensionManager;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QExtensionManager* QExtensionManager_new();
QExtensionManager* QExtensionManager_new2(QObject* parent);
void QExtensionManager_virtbase(QExtensionManager* src, QObject** outptr_QObject, QAbstractExtensionManager** outptr_QAbstractExtensionManager);
QMetaObject* QExtensionManager_metaObject(const QExtensionManager* self);
void* QExtensionManager_metacast(QExtensionManager* self, const char* param1);
int QExtensionManager_metacall(QExtensionManager* self, int param1, int param2, void** param3);
struct seaqt_string QExtensionManager_tr(const char* s);
void QExtensionManager_registerExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, struct seaqt_string iid);
void QExtensionManager_unregisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, struct seaqt_string iid);
QObject* QExtensionManager_extension(const QExtensionManager* self, QObject* object, struct seaqt_string iid);
struct seaqt_string QExtensionManager_tr2(const char* s, const char* c);
struct seaqt_string QExtensionManager_tr3(const char* s, const char* c, int n);

bool QExtensionManager_override_virtual_metaObject(void* self, intptr_t slot);
QMetaObject* QExtensionManager_virtualbase_metaObject(const void* self);
bool QExtensionManager_override_virtual_metacast(void* self, intptr_t slot);
void* QExtensionManager_virtualbase_metacast(void* self, const char* param1);
bool QExtensionManager_override_virtual_metacall(void* self, intptr_t slot);
int QExtensionManager_virtualbase_metacall(void* self, int param1, int param2, void** param3);
bool QExtensionManager_override_virtual_registerExtensions(void* self, intptr_t slot);
void QExtensionManager_virtualbase_registerExtensions(void* self, QAbstractExtensionFactory* factory, struct seaqt_string iid);
bool QExtensionManager_override_virtual_unregisterExtensions(void* self, intptr_t slot);
void QExtensionManager_virtualbase_unregisterExtensions(void* self, QAbstractExtensionFactory* factory, struct seaqt_string iid);
bool QExtensionManager_override_virtual_extension(void* self, intptr_t slot);
QObject* QExtensionManager_virtualbase_extension(const void* self, QObject* object, struct seaqt_string iid);
bool QExtensionManager_override_virtual_event(void* self, intptr_t slot);
bool QExtensionManager_virtualbase_event(void* self, QEvent* event);
bool QExtensionManager_override_virtual_eventFilter(void* self, intptr_t slot);
bool QExtensionManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QExtensionManager_override_virtual_timerEvent(void* self, intptr_t slot);
void QExtensionManager_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QExtensionManager_override_virtual_childEvent(void* self, intptr_t slot);
void QExtensionManager_virtualbase_childEvent(void* self, QChildEvent* event);
bool QExtensionManager_override_virtual_customEvent(void* self, intptr_t slot);
void QExtensionManager_virtualbase_customEvent(void* self, QEvent* event);
bool QExtensionManager_override_virtual_connectNotify(void* self, intptr_t slot);
void QExtensionManager_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QExtensionManager_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QExtensionManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QExtensionManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QExtensionManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QExtensionManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QExtensionManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

const QMetaObject* QExtensionManager_staticMetaObject();
void QExtensionManager_delete(QExtensionManager* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
