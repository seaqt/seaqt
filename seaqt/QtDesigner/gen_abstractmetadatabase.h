#pragma once
#ifndef SEAQT_QTDESIGNER_GEN_ABSTRACTMETADATABASE_H
#define SEAQT_QTDESIGNER_GEN_ABSTRACTMETADATABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt-runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerMetaDataBaseInterface;
class QDesignerMetaDataBaseItemInterface;
class QMetaMethod;
class QMetaObject;
class QObject;
class QWidget;
#else
typedef struct QDesignerMetaDataBaseInterface QDesignerMetaDataBaseInterface;
typedef struct QDesignerMetaDataBaseItemInterface QDesignerMetaDataBaseItemInterface;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QWidget QWidget;
#endif

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseItemInterface_new();
struct seaqt_string QDesignerMetaDataBaseItemInterface_name(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_setName(QDesignerMetaDataBaseItemInterface* self, struct seaqt_string name);
struct seaqt_array /* of QWidget* */  QDesignerMetaDataBaseItemInterface_tabOrder(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_setTabOrder(QDesignerMetaDataBaseItemInterface* self, struct seaqt_array /* of QWidget* */  tabOrder);
bool QDesignerMetaDataBaseItemInterface_enabled(const QDesignerMetaDataBaseItemInterface* self);
void QDesignerMetaDataBaseItemInterface_setEnabled(QDesignerMetaDataBaseItemInterface* self, bool b);

bool QDesignerMetaDataBaseItemInterface_override_virtual_name(void* self, intptr_t slot);
struct seaqt_string QDesignerMetaDataBaseItemInterface_virtualbase_name(const void* self);
bool QDesignerMetaDataBaseItemInterface_override_virtual_setName(void* self, intptr_t slot);
void QDesignerMetaDataBaseItemInterface_virtualbase_setName(void* self, struct seaqt_string name);
bool QDesignerMetaDataBaseItemInterface_override_virtual_tabOrder(void* self, intptr_t slot);
struct seaqt_array /* of QWidget* */  QDesignerMetaDataBaseItemInterface_virtualbase_tabOrder(const void* self);
bool QDesignerMetaDataBaseItemInterface_override_virtual_setTabOrder(void* self, intptr_t slot);
void QDesignerMetaDataBaseItemInterface_virtualbase_setTabOrder(void* self, struct seaqt_array /* of QWidget* */  tabOrder);
bool QDesignerMetaDataBaseItemInterface_override_virtual_enabled(void* self, intptr_t slot);
bool QDesignerMetaDataBaseItemInterface_virtualbase_enabled(const void* self);
bool QDesignerMetaDataBaseItemInterface_override_virtual_setEnabled(void* self, intptr_t slot);
void QDesignerMetaDataBaseItemInterface_virtualbase_setEnabled(void* self, bool b);

void QDesignerMetaDataBaseItemInterface_delete(QDesignerMetaDataBaseItemInterface* self);

void QDesignerMetaDataBaseInterface_virtbase(QDesignerMetaDataBaseInterface* src, QObject** outptr_QObject);
QMetaObject* QDesignerMetaDataBaseInterface_metaObject(const QDesignerMetaDataBaseInterface* self);
void* QDesignerMetaDataBaseInterface_metacast(QDesignerMetaDataBaseInterface* self, const char* param1);
struct seaqt_string QDesignerMetaDataBaseInterface_tr(const char* s);
QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_item(const QDesignerMetaDataBaseInterface* self, QObject* object);
void QDesignerMetaDataBaseInterface_add(QDesignerMetaDataBaseInterface* self, QObject* object);
void QDesignerMetaDataBaseInterface_remove(QDesignerMetaDataBaseInterface* self, QObject* object);
struct seaqt_array /* of QObject* */  QDesignerMetaDataBaseInterface_objects(const QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_changed(QDesignerMetaDataBaseInterface* self);
void QDesignerMetaDataBaseInterface_connect_changed(QDesignerMetaDataBaseInterface* self, intptr_t slot);
struct seaqt_string QDesignerMetaDataBaseInterface_tr2(const char* s, const char* c);
struct seaqt_string QDesignerMetaDataBaseInterface_tr3(const char* s, const char* c, int n);

void QDesignerMetaDataBaseInterface_delete(QDesignerMetaDataBaseInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
