#include <QDesignerActionEditorInterface>
#include <QDesignerComponents>
#include <QDesignerFormEditorInterface>
#include <QDesignerObjectInspectorInterface>
#include <QDesignerPropertyEditorInterface>
#include <QDesignerWidgetBoxInterface>
#include <QObject>
#include <QWidget>
#include <qdesigner_components.h>
#include "gen_qdesigner_components.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QDesignerComponents_initializeResources() {
	QDesignerComponents::initializeResources();
}

void QDesignerComponents_initializePlugins(QDesignerFormEditorInterface* core) {
	QDesignerComponents::initializePlugins(core);
}

QDesignerFormEditorInterface* QDesignerComponents_createFormEditor(QObject* parent) {
	return QDesignerComponents::createFormEditor(parent);
}

QDesignerWidgetBoxInterface* QDesignerComponents_createWidgetBox(QDesignerFormEditorInterface* core, QWidget* parent) {
	return QDesignerComponents::createWidgetBox(core, parent);
}

QDesignerPropertyEditorInterface* QDesignerComponents_createPropertyEditor(QDesignerFormEditorInterface* core, QWidget* parent) {
	return QDesignerComponents::createPropertyEditor(core, parent);
}

QDesignerObjectInspectorInterface* QDesignerComponents_createObjectInspector(QDesignerFormEditorInterface* core, QWidget* parent) {
	return QDesignerComponents::createObjectInspector(core, parent);
}

QDesignerActionEditorInterface* QDesignerComponents_createActionEditor(QDesignerFormEditorInterface* core, QWidget* parent) {
	return QDesignerComponents::createActionEditor(core, parent);
}

QObject* QDesignerComponents_createTaskMenu(QDesignerFormEditorInterface* core, QObject* parent) {
	return QDesignerComponents::createTaskMenu(core, parent);
}

QWidget* QDesignerComponents_createResourceEditor(QDesignerFormEditorInterface* core, QWidget* parent) {
	return QDesignerComponents::createResourceEditor(core, parent);
}

QWidget* QDesignerComponents_createSignalSlotEditor(QDesignerFormEditorInterface* core, QWidget* parent) {
	return QDesignerComponents::createSignalSlotEditor(core, parent);
}

void QDesignerComponents_delete(QDesignerComponents* self) {
	delete self;
}

