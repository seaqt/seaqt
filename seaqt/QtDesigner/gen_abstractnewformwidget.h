#pragma once
#ifndef SEAQT_QTDESIGNER_GEN_ABSTRACTNEWFORMWIDGET_H
#define SEAQT_QTDESIGNER_GEN_ABSTRACTNEWFORMWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt-runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerNewFormWidgetInterface;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPaintDevice;
class QWidget;
#else
typedef struct QDesignerNewFormWidgetInterface QDesignerNewFormWidgetInterface;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QWidget QWidget;
#endif

void QDesignerNewFormWidgetInterface_virtbase(QDesignerNewFormWidgetInterface* src, QWidget** outptr_QWidget);
QMetaObject* QDesignerNewFormWidgetInterface_metaObject(const QDesignerNewFormWidgetInterface* self);
void* QDesignerNewFormWidgetInterface_metacast(QDesignerNewFormWidgetInterface* self, const char* param1);
struct seaqt_string QDesignerNewFormWidgetInterface_tr(const char* s);
bool QDesignerNewFormWidgetInterface_hasCurrentTemplate(const QDesignerNewFormWidgetInterface* self);
void QDesignerNewFormWidgetInterface_templateActivated(QDesignerNewFormWidgetInterface* self);
void QDesignerNewFormWidgetInterface_connect_templateActivated(QDesignerNewFormWidgetInterface* self, intptr_t slot);
void QDesignerNewFormWidgetInterface_currentTemplateChanged(QDesignerNewFormWidgetInterface* self, bool templateSelected);
void QDesignerNewFormWidgetInterface_connect_currentTemplateChanged(QDesignerNewFormWidgetInterface* self, intptr_t slot);
struct seaqt_string QDesignerNewFormWidgetInterface_tr2(const char* s, const char* c);
struct seaqt_string QDesignerNewFormWidgetInterface_tr3(const char* s, const char* c, int n);

void QDesignerNewFormWidgetInterface_delete(QDesignerNewFormWidgetInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
