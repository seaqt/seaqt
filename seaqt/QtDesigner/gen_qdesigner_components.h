#pragma once
#ifndef SEAQT_QTDESIGNER_GEN_QDESIGNER_COMPONENTS_H
#define SEAQT_QTDESIGNER_GEN_QDESIGNER_COMPONENTS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt-runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerActionEditorInterface;
class QDesignerComponents;
class QDesignerFormEditorInterface;
class QDesignerObjectInspectorInterface;
class QDesignerPropertyEditorInterface;
class QDesignerWidgetBoxInterface;
class QObject;
class QWidget;
#else
typedef struct QDesignerActionEditorInterface QDesignerActionEditorInterface;
typedef struct QDesignerComponents QDesignerComponents;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerObjectInspectorInterface QDesignerObjectInspectorInterface;
typedef struct QDesignerPropertyEditorInterface QDesignerPropertyEditorInterface;
typedef struct QDesignerWidgetBoxInterface QDesignerWidgetBoxInterface;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

void QDesignerComponents_initializeResources();
void QDesignerComponents_initializePlugins(QDesignerFormEditorInterface* core);
QDesignerFormEditorInterface* QDesignerComponents_createFormEditor(QObject* parent);
QDesignerWidgetBoxInterface* QDesignerComponents_createWidgetBox(QDesignerFormEditorInterface* core, QWidget* parent);
QDesignerPropertyEditorInterface* QDesignerComponents_createPropertyEditor(QDesignerFormEditorInterface* core, QWidget* parent);
QDesignerObjectInspectorInterface* QDesignerComponents_createObjectInspector(QDesignerFormEditorInterface* core, QWidget* parent);
QDesignerActionEditorInterface* QDesignerComponents_createActionEditor(QDesignerFormEditorInterface* core, QWidget* parent);
QObject* QDesignerComponents_createTaskMenu(QDesignerFormEditorInterface* core, QObject* parent);
QWidget* QDesignerComponents_createResourceEditor(QDesignerFormEditorInterface* core, QWidget* parent);
QWidget* QDesignerComponents_createSignalSlotEditor(QDesignerFormEditorInterface* core, QWidget* parent);

void QDesignerComponents_delete(QDesignerComponents* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
