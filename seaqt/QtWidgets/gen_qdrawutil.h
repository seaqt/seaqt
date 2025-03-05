#pragma once
#ifndef SEAQT_QTWIDGETS_GEN_QDRAWUTIL_H
#define SEAQT_QTWIDGETS_GEN_QDRAWUTIL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTileRules;
#else
typedef struct QTileRules QTileRules;
#endif

QTileRules* QTileRules_new(int horizontalRule, int verticalRule);
QTileRules* QTileRules_new2();
QTileRules* QTileRules_new3(QTileRules* param1);
QTileRules* QTileRules_new4(int rule);
void QTileRules_delete(QTileRules* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
