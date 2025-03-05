#pragma once
#ifndef SEAQT_QTCORE_GEN_QPLUGIN_H
#define SEAQT_QTCORE_GEN_QPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QJsonObject;
class QStaticPlugin;
#else
typedef struct QJsonObject QJsonObject;
typedef struct QStaticPlugin QStaticPlugin;
#endif

QJsonObject* QStaticPlugin_metaData(const QStaticPlugin* self);
void QStaticPlugin_delete(QStaticPlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
