#pragma once
#ifndef SEAQT_QTDESIGNER_GEN_DYNAMICPROPERTYSHEET_H
#define SEAQT_QTDESIGNER_GEN_DYNAMICPROPERTYSHEET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt-runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDesignerDynamicPropertySheetExtension;
class QVariant;
#else
typedef struct QDesignerDynamicPropertySheetExtension QDesignerDynamicPropertySheetExtension;
typedef struct QVariant QVariant;
#endif

QDesignerDynamicPropertySheetExtension* QDesignerDynamicPropertySheetExtension_new();
bool QDesignerDynamicPropertySheetExtension_dynamicPropertiesAllowed(const QDesignerDynamicPropertySheetExtension* self);
int QDesignerDynamicPropertySheetExtension_addDynamicProperty(QDesignerDynamicPropertySheetExtension* self, struct seaqt_string propertyName, QVariant* value);
bool QDesignerDynamicPropertySheetExtension_removeDynamicProperty(QDesignerDynamicPropertySheetExtension* self, int index);
bool QDesignerDynamicPropertySheetExtension_isDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, int index);
bool QDesignerDynamicPropertySheetExtension_canAddDynamicProperty(const QDesignerDynamicPropertySheetExtension* self, struct seaqt_string propertyName);

bool QDesignerDynamicPropertySheetExtension_override_virtual_dynamicPropertiesAllowed(void* self, intptr_t slot);
bool QDesignerDynamicPropertySheetExtension_virtualbase_dynamicPropertiesAllowed(const void* self);
bool QDesignerDynamicPropertySheetExtension_override_virtual_addDynamicProperty(void* self, intptr_t slot);
int QDesignerDynamicPropertySheetExtension_virtualbase_addDynamicProperty(void* self, struct seaqt_string propertyName, QVariant* value);
bool QDesignerDynamicPropertySheetExtension_override_virtual_removeDynamicProperty(void* self, intptr_t slot);
bool QDesignerDynamicPropertySheetExtension_virtualbase_removeDynamicProperty(void* self, int index);
bool QDesignerDynamicPropertySheetExtension_override_virtual_isDynamicProperty(void* self, intptr_t slot);
bool QDesignerDynamicPropertySheetExtension_virtualbase_isDynamicProperty(const void* self, int index);
bool QDesignerDynamicPropertySheetExtension_override_virtual_canAddDynamicProperty(void* self, intptr_t slot);
bool QDesignerDynamicPropertySheetExtension_virtualbase_canAddDynamicProperty(const void* self, struct seaqt_string propertyName);

void QDesignerDynamicPropertySheetExtension_delete(QDesignerDynamicPropertySheetExtension* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
