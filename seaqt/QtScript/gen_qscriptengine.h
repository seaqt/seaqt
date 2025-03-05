#pragma once
#ifndef SEAQT_QTSCRIPT_GEN_QSCRIPTENGINE_H
#define SEAQT_QTSCRIPT_GEN_QSCRIPTENGINE_H

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
class QDateTime;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRegExp;
class QScriptClass;
class QScriptContext;
class QScriptEngine;
class QScriptEngineAgent;
class QScriptProgram;
class QScriptString;
class QScriptSyntaxCheckResult;
class QScriptValue;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDateTime QDateTime;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegExp QRegExp;
typedef struct QScriptClass QScriptClass;
typedef struct QScriptContext QScriptContext;
typedef struct QScriptEngine QScriptEngine;
typedef struct QScriptEngineAgent QScriptEngineAgent;
typedef struct QScriptProgram QScriptProgram;
typedef struct QScriptString QScriptString;
typedef struct QScriptSyntaxCheckResult QScriptSyntaxCheckResult;
typedef struct QScriptValue QScriptValue;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QScriptSyntaxCheckResult* QScriptSyntaxCheckResult_new(QScriptSyntaxCheckResult* other);
int QScriptSyntaxCheckResult_state(const QScriptSyntaxCheckResult* self);
int QScriptSyntaxCheckResult_errorLineNumber(const QScriptSyntaxCheckResult* self);
int QScriptSyntaxCheckResult_errorColumnNumber(const QScriptSyntaxCheckResult* self);
struct miqt_string QScriptSyntaxCheckResult_errorMessage(const QScriptSyntaxCheckResult* self);
void QScriptSyntaxCheckResult_operatorAssign(QScriptSyntaxCheckResult* self, QScriptSyntaxCheckResult* other);
void QScriptSyntaxCheckResult_delete(QScriptSyntaxCheckResult* self);

struct QScriptEngine_VTable {
	void (*destructor)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self);
	QMetaObject* (*metaObject)(struct QScriptEngine_VTable* vtbl, const QScriptEngine* self);
	void* (*metacast)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self, const char* param1);
	int (*metacall)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self, int param1, int param2, void** param3);
	bool (*event)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self, QEvent* event);
	bool (*eventFilter)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self, QObject* watched, QEvent* event);
	void (*timerEvent)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self, QTimerEvent* event);
	void (*childEvent)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self, QChildEvent* event);
	void (*customEvent)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self, QEvent* event);
	void (*connectNotify)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QScriptEngine_VTable* vtbl, QScriptEngine* self, QMetaMethod* signal);
};
QScriptEngine* QScriptEngine_new(struct QScriptEngine_VTable* vtbl);
QScriptEngine* QScriptEngine_new2(struct QScriptEngine_VTable* vtbl, QObject* parent);
void QScriptEngine_virtbase(QScriptEngine* src, QObject** outptr_QObject);
QMetaObject* QScriptEngine_metaObject(const QScriptEngine* self);
void* QScriptEngine_metacast(QScriptEngine* self, const char* param1);
int QScriptEngine_metacall(QScriptEngine* self, int param1, int param2, void** param3);
struct miqt_string QScriptEngine_tr(const char* s);
struct miqt_string QScriptEngine_trUtf8(const char* s);
QScriptValue* QScriptEngine_globalObject(const QScriptEngine* self);
void QScriptEngine_setGlobalObject(QScriptEngine* self, QScriptValue* object);
QScriptContext* QScriptEngine_currentContext(const QScriptEngine* self);
QScriptContext* QScriptEngine_pushContext(QScriptEngine* self);
void QScriptEngine_popContext(QScriptEngine* self);
bool QScriptEngine_canEvaluate(const QScriptEngine* self, struct miqt_string program);
QScriptSyntaxCheckResult* QScriptEngine_checkSyntax(struct miqt_string program);
QScriptValue* QScriptEngine_evaluate(QScriptEngine* self, struct miqt_string program);
QScriptValue* QScriptEngine_evaluateWithProgram(QScriptEngine* self, QScriptProgram* program);
bool QScriptEngine_isEvaluating(const QScriptEngine* self);
void QScriptEngine_abortEvaluation(QScriptEngine* self);
bool QScriptEngine_hasUncaughtException(const QScriptEngine* self);
QScriptValue* QScriptEngine_uncaughtException(const QScriptEngine* self);
int QScriptEngine_uncaughtExceptionLineNumber(const QScriptEngine* self);
struct miqt_array /* of struct miqt_string */  QScriptEngine_uncaughtExceptionBacktrace(const QScriptEngine* self);
void QScriptEngine_clearExceptions(QScriptEngine* self);
QScriptValue* QScriptEngine_nullValue(QScriptEngine* self);
QScriptValue* QScriptEngine_undefinedValue(QScriptEngine* self);
QScriptValue* QScriptEngine_newVariant(QScriptEngine* self, QVariant* value);
QScriptValue* QScriptEngine_newVariant2(QScriptEngine* self, QScriptValue* object, QVariant* value);
QScriptValue* QScriptEngine_newRegExp(QScriptEngine* self, QRegExp* regexp);
QScriptValue* QScriptEngine_newObject(QScriptEngine* self);
QScriptValue* QScriptEngine_newObjectWithScriptClass(QScriptEngine* self, QScriptClass* scriptClass);
QScriptValue* QScriptEngine_newArray(QScriptEngine* self);
QScriptValue* QScriptEngine_newRegExp2(QScriptEngine* self, struct miqt_string pattern, struct miqt_string flags);
QScriptValue* QScriptEngine_newDate(QScriptEngine* self, double value);
QScriptValue* QScriptEngine_newDateWithValue(QScriptEngine* self, QDateTime* value);
QScriptValue* QScriptEngine_newActivationObject(QScriptEngine* self);
QScriptValue* QScriptEngine_newQObject(QScriptEngine* self, QObject* object);
QScriptValue* QScriptEngine_newQObject2(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject);
QScriptValue* QScriptEngine_newQMetaObject(QScriptEngine* self, QMetaObject* metaObject);
QScriptValue* QScriptEngine_defaultPrototype(const QScriptEngine* self, int metaTypeId);
void QScriptEngine_setDefaultPrototype(QScriptEngine* self, int metaTypeId, QScriptValue* prototype);
void QScriptEngine_installTranslatorFunctions(QScriptEngine* self);
QScriptValue* QScriptEngine_importExtension(QScriptEngine* self, struct miqt_string extension);
struct miqt_array /* of struct miqt_string */  QScriptEngine_availableExtensions(const QScriptEngine* self);
struct miqt_array /* of struct miqt_string */  QScriptEngine_importedExtensions(const QScriptEngine* self);
void QScriptEngine_collectGarbage(QScriptEngine* self);
void QScriptEngine_reportAdditionalMemoryCost(QScriptEngine* self, int size);
void QScriptEngine_setProcessEventsInterval(QScriptEngine* self, int interval);
int QScriptEngine_processEventsInterval(const QScriptEngine* self);
void QScriptEngine_setAgent(QScriptEngine* self, QScriptEngineAgent* agent);
QScriptEngineAgent* QScriptEngine_agent(const QScriptEngine* self);
QScriptString* QScriptEngine_toStringHandle(QScriptEngine* self, struct miqt_string str);
QScriptValue* QScriptEngine_toObject(QScriptEngine* self, QScriptValue* value);
QScriptValue* QScriptEngine_objectById(const QScriptEngine* self, long long id);
void QScriptEngine_signalHandlerException(QScriptEngine* self, QScriptValue* exception);
void QScriptEngine_connect_signalHandlerException(QScriptEngine* self, intptr_t slot, void (*callback)(intptr_t, QScriptValue*), void (*release)(intptr_t));
struct miqt_string QScriptEngine_tr2(const char* s, const char* c);
struct miqt_string QScriptEngine_tr3(const char* s, const char* c, int n);
struct miqt_string QScriptEngine_trUtf82(const char* s, const char* c);
struct miqt_string QScriptEngine_trUtf83(const char* s, const char* c, int n);
QScriptValue* QScriptEngine_evaluate2(QScriptEngine* self, struct miqt_string program, struct miqt_string fileName);
QScriptValue* QScriptEngine_evaluate3(QScriptEngine* self, struct miqt_string program, struct miqt_string fileName, int lineNumber);
void QScriptEngine_abortEvaluation1(QScriptEngine* self, QScriptValue* result);
QScriptValue* QScriptEngine_newObject2(QScriptEngine* self, QScriptClass* scriptClass, QScriptValue* data);
QScriptValue* QScriptEngine_newArray1(QScriptEngine* self, unsigned int length);
QScriptValue* QScriptEngine_newQObject22(QScriptEngine* self, QObject* object, int ownership);
QScriptValue* QScriptEngine_newQObject3(QScriptEngine* self, QObject* object, int ownership, int* options);
QScriptValue* QScriptEngine_newQObject32(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject, int ownership);
QScriptValue* QScriptEngine_newQObject4(QScriptEngine* self, QScriptValue* scriptObject, QObject* qtObject, int ownership, int* options);
QScriptValue* QScriptEngine_newQMetaObject2(QScriptEngine* self, QMetaObject* metaObject, QScriptValue* ctor);
void QScriptEngine_installTranslatorFunctions1(QScriptEngine* self, QScriptValue* object);
QMetaObject* QScriptEngine_virtualbase_metaObject(const void* self);
void* QScriptEngine_virtualbase_metacast(void* self, const char* param1);
int QScriptEngine_virtualbase_metacall(void* self, int param1, int param2, void** param3);
bool QScriptEngine_virtualbase_event(void* self, QEvent* event);
bool QScriptEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
void QScriptEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);
void QScriptEngine_virtualbase_childEvent(void* self, QChildEvent* event);
void QScriptEngine_virtualbase_customEvent(void* self, QEvent* event);
void QScriptEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QScriptEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QScriptEngine_protectedbase_sender(const void* self);
int QScriptEngine_protectedbase_senderSignalIndex(const void* self);
int QScriptEngine_protectedbase_receivers(const void* self, const char* signal);
bool QScriptEngine_protectedbase_isSignalConnected(const void* self, QMetaMethod* signal);
const QMetaObject* QScriptEngine_staticMetaObject();
void QScriptEngine_delete(QScriptEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
