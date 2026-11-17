#pragma once
#ifndef SEAQT_QTSQL_GEN_QSQLDRIVERPLUGIN_H
#define SEAQT_QTSQL_GEN_QSQLDRIVERPLUGIN_H

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
class QSqlDriver;
class QSqlDriverPlugin;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSqlDriver QSqlDriver;
typedef struct QSqlDriverPlugin QSqlDriverPlugin;
typedef struct QTimerEvent QTimerEvent;
#endif

QSqlDriverPlugin* QSqlDriverPlugin_new();
QSqlDriverPlugin* QSqlDriverPlugin_new2(QObject* parent);
void QSqlDriverPlugin_virtbase(QSqlDriverPlugin* src, QObject** outptr_QObject);
QMetaObject* QSqlDriverPlugin_metaObject(const QSqlDriverPlugin* self);
void* QSqlDriverPlugin_metacast(QSqlDriverPlugin* self, const char* param1);
int QSqlDriverPlugin_metacall(QSqlDriverPlugin* self, int param1, int param2, void** param3);
struct seaqt_string QSqlDriverPlugin_tr(const char* s);
QSqlDriver* QSqlDriverPlugin_create(QSqlDriverPlugin* self, struct seaqt_string key);
struct seaqt_string QSqlDriverPlugin_tr2(const char* s, const char* c);
struct seaqt_string QSqlDriverPlugin_tr3(const char* s, const char* c, int n);

bool QSqlDriverPlugin_override_virtual_metaObject(void* self, intptr_t slot);
QMetaObject* QSqlDriverPlugin_virtualbase_metaObject(const void* self);
bool QSqlDriverPlugin_override_virtual_metacast(void* self, intptr_t slot);
void* QSqlDriverPlugin_virtualbase_metacast(void* self, const char* param1);
bool QSqlDriverPlugin_override_virtual_metacall(void* self, intptr_t slot);
int QSqlDriverPlugin_virtualbase_metacall(void* self, int param1, int param2, void** param3);
bool QSqlDriverPlugin_override_virtual_create(void* self, intptr_t slot);
QSqlDriver* QSqlDriverPlugin_virtualbase_create(void* self, struct seaqt_string key);
bool QSqlDriverPlugin_override_virtual_event(void* self, intptr_t slot);
bool QSqlDriverPlugin_virtualbase_event(void* self, QEvent* event);
bool QSqlDriverPlugin_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSqlDriverPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSqlDriverPlugin_override_virtual_timerEvent(void* self, intptr_t slot);
void QSqlDriverPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSqlDriverPlugin_override_virtual_childEvent(void* self, intptr_t slot);
void QSqlDriverPlugin_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSqlDriverPlugin_override_virtual_customEvent(void* self, intptr_t slot);
void QSqlDriverPlugin_virtualbase_customEvent(void* self, QEvent* event);
bool QSqlDriverPlugin_override_virtual_connectNotify(void* self, intptr_t slot);
void QSqlDriverPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSqlDriverPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSqlDriverPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QSqlDriverPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSqlDriverPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSqlDriverPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSqlDriverPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

const QMetaObject* QSqlDriverPlugin_staticMetaObject();
void QSqlDriverPlugin_delete(QSqlDriverPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
