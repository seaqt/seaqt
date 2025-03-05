#pragma once
#ifndef SEAQT_QTWEBENGINECORE_GEN_QWEBENGINEQUOTAREQUEST_H
#define SEAQT_QTWEBENGINECORE_GEN_QWEBENGINEQUOTAREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QUrl;
class QWebEngineQuotaRequest;
#else
typedef struct QUrl QUrl;
typedef struct QWebEngineQuotaRequest QWebEngineQuotaRequest;
#endif

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new();
QWebEngineQuotaRequest* QWebEngineQuotaRequest_new2(QWebEngineQuotaRequest* param1);
void QWebEngineQuotaRequest_accept(QWebEngineQuotaRequest* self);
void QWebEngineQuotaRequest_reject(QWebEngineQuotaRequest* self);
QUrl* QWebEngineQuotaRequest_origin(const QWebEngineQuotaRequest* self);
long long QWebEngineQuotaRequest_requestedSize(const QWebEngineQuotaRequest* self);
bool QWebEngineQuotaRequest_operatorEqual(const QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that);
bool QWebEngineQuotaRequest_operatorNotEqual(const QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that);
const QMetaObject* QWebEngineQuotaRequest_staticMetaObject();
void QWebEngineQuotaRequest_delete(QWebEngineQuotaRequest* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
