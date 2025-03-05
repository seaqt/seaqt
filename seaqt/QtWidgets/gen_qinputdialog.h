#pragma once
#ifndef SEAQT_QTWIDGETS_GEN_QINPUTDIALOG_H
#define SEAQT_QTWIDGETS_GEN_QINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDialog;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputDialog;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDialog QDialog;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputDialog QInputDialog;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QInputDialog* QInputDialog_new(QWidget* parent);
QInputDialog* QInputDialog_new2();
QInputDialog* QInputDialog_new3(QWidget* parent, int flags);
void QInputDialog_virtbase(QInputDialog* src, QDialog** outptr_QDialog);
QMetaObject* QInputDialog_metaObject(const QInputDialog* self);
void* QInputDialog_metacast(QInputDialog* self, const char* param1);
struct miqt_string QInputDialog_tr(const char* s);
void QInputDialog_setInputMode(QInputDialog* self, int mode);
int QInputDialog_inputMode(const QInputDialog* self);
void QInputDialog_setLabelText(QInputDialog* self, struct miqt_string text);
struct miqt_string QInputDialog_labelText(const QInputDialog* self);
void QInputDialog_setOption(QInputDialog* self, int option);
bool QInputDialog_testOption(const QInputDialog* self, int option);
void QInputDialog_setOptions(QInputDialog* self, int options);
int QInputDialog_options(const QInputDialog* self);
void QInputDialog_setTextValue(QInputDialog* self, struct miqt_string text);
struct miqt_string QInputDialog_textValue(const QInputDialog* self);
void QInputDialog_setTextEchoMode(QInputDialog* self, int mode);
int QInputDialog_textEchoMode(const QInputDialog* self);
void QInputDialog_setComboBoxEditable(QInputDialog* self, bool editable);
bool QInputDialog_isComboBoxEditable(const QInputDialog* self);
void QInputDialog_setComboBoxItems(QInputDialog* self, struct miqt_array /* of struct miqt_string */  items);
struct miqt_array /* of struct miqt_string */  QInputDialog_comboBoxItems(const QInputDialog* self);
void QInputDialog_setIntValue(QInputDialog* self, int value);
int QInputDialog_intValue(const QInputDialog* self);
void QInputDialog_setIntMinimum(QInputDialog* self, int min);
int QInputDialog_intMinimum(const QInputDialog* self);
void QInputDialog_setIntMaximum(QInputDialog* self, int max);
int QInputDialog_intMaximum(const QInputDialog* self);
void QInputDialog_setIntRange(QInputDialog* self, int min, int max);
void QInputDialog_setIntStep(QInputDialog* self, int step);
int QInputDialog_intStep(const QInputDialog* self);
void QInputDialog_setDoubleValue(QInputDialog* self, double value);
double QInputDialog_doubleValue(const QInputDialog* self);
void QInputDialog_setDoubleMinimum(QInputDialog* self, double min);
double QInputDialog_doubleMinimum(const QInputDialog* self);
void QInputDialog_setDoubleMaximum(QInputDialog* self, double max);
double QInputDialog_doubleMaximum(const QInputDialog* self);
void QInputDialog_setDoubleRange(QInputDialog* self, double min, double max);
void QInputDialog_setDoubleDecimals(QInputDialog* self, int decimals);
int QInputDialog_doubleDecimals(const QInputDialog* self);
void QInputDialog_setOkButtonText(QInputDialog* self, struct miqt_string text);
struct miqt_string QInputDialog_okButtonText(const QInputDialog* self);
void QInputDialog_setCancelButtonText(QInputDialog* self, struct miqt_string text);
struct miqt_string QInputDialog_cancelButtonText(const QInputDialog* self);
QSize* QInputDialog_minimumSizeHint(const QInputDialog* self);
QSize* QInputDialog_sizeHint(const QInputDialog* self);
void QInputDialog_setVisible(QInputDialog* self, bool visible);
struct miqt_string QInputDialog_getText(QWidget* parent, struct miqt_string title, struct miqt_string label);
struct miqt_string QInputDialog_getMultiLineText(QWidget* parent, struct miqt_string title, struct miqt_string label);
struct miqt_string QInputDialog_getItem(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items);
int QInputDialog_getInt(QWidget* parent, struct miqt_string title, struct miqt_string label);
double QInputDialog_getDouble(QWidget* parent, struct miqt_string title, struct miqt_string label);
void QInputDialog_setDoubleStep(QInputDialog* self, double step);
double QInputDialog_doubleStep(const QInputDialog* self);
void QInputDialog_textValueChanged(QInputDialog* self, struct miqt_string text);
void QInputDialog_connect_textValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_textValueSelected(QInputDialog* self, struct miqt_string text);
void QInputDialog_connect_textValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_intValueChanged(QInputDialog* self, int value);
void QInputDialog_connect_intValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_intValueSelected(QInputDialog* self, int value);
void QInputDialog_connect_intValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_doubleValueChanged(QInputDialog* self, double value);
void QInputDialog_connect_doubleValueChanged(QInputDialog* self, intptr_t slot);
void QInputDialog_doubleValueSelected(QInputDialog* self, double value);
void QInputDialog_connect_doubleValueSelected(QInputDialog* self, intptr_t slot);
void QInputDialog_done(QInputDialog* self, int result);
struct miqt_string QInputDialog_tr2(const char* s, const char* c);
struct miqt_string QInputDialog_tr3(const char* s, const char* c, int n);
void QInputDialog_setOption2(QInputDialog* self, int option, bool on);
struct miqt_string QInputDialog_getText4(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo);
struct miqt_string QInputDialog_getText5(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text);
struct miqt_string QInputDialog_getText6(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok);
struct miqt_string QInputDialog_getText7(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok, int flags);
struct miqt_string QInputDialog_getText8(QWidget* parent, struct miqt_string title, struct miqt_string label, int echo, struct miqt_string text, bool* ok, int flags, int inputMethodHints);
struct miqt_string QInputDialog_getMultiLineText4(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text);
struct miqt_string QInputDialog_getMultiLineText5(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok);
struct miqt_string QInputDialog_getMultiLineText6(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok, int flags);
struct miqt_string QInputDialog_getMultiLineText7(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_string text, bool* ok, int flags, int inputMethodHints);
struct miqt_string QInputDialog_getItem5(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current);
struct miqt_string QInputDialog_getItem6(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable);
struct miqt_string QInputDialog_getItem7(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable, bool* ok);
struct miqt_string QInputDialog_getItem8(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable, bool* ok, int flags);
struct miqt_string QInputDialog_getItem9(QWidget* parent, struct miqt_string title, struct miqt_string label, struct miqt_array /* of struct miqt_string */  items, int current, bool editable, bool* ok, int flags, int inputMethodHints);
int QInputDialog_getInt4(QWidget* parent, struct miqt_string title, struct miqt_string label, int value);
int QInputDialog_getInt5(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue);
int QInputDialog_getInt6(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue);
int QInputDialog_getInt7(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step);
int QInputDialog_getInt8(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step, bool* ok);
int QInputDialog_getInt9(QWidget* parent, struct miqt_string title, struct miqt_string label, int value, int minValue, int maxValue, int step, bool* ok, int flags);
double QInputDialog_getDouble4(QWidget* parent, struct miqt_string title, struct miqt_string label, double value);
double QInputDialog_getDouble5(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue);
double QInputDialog_getDouble6(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue);
double QInputDialog_getDouble7(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals);
double QInputDialog_getDouble8(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok);
double QInputDialog_getDouble9(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags);
double QInputDialog_getDouble10(QWidget* parent, struct miqt_string title, struct miqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step);
bool QInputDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QInputDialog_virtualbase_minimumSizeHint(const void* self);
bool QInputDialog_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QInputDialog_virtualbase_sizeHint(const void* self);
bool QInputDialog_override_virtual_setVisible(void* self, intptr_t slot);
void QInputDialog_virtualbase_setVisible(void* self, bool visible);
bool QInputDialog_override_virtual_done(void* self, intptr_t slot);
void QInputDialog_virtualbase_done(void* self, int result);
bool QInputDialog_override_virtual_open(void* self, intptr_t slot);
void QInputDialog_virtualbase_open(void* self);
bool QInputDialog_override_virtual_exec(void* self, intptr_t slot);
int QInputDialog_virtualbase_exec(void* self);
bool QInputDialog_override_virtual_accept(void* self, intptr_t slot);
void QInputDialog_virtualbase_accept(void* self);
bool QInputDialog_override_virtual_reject(void* self, intptr_t slot);
void QInputDialog_virtualbase_reject(void* self);
bool QInputDialog_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QInputDialog_override_virtual_closeEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);
bool QInputDialog_override_virtual_showEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_showEvent(void* self, QShowEvent* param1);
bool QInputDialog_override_virtual_resizeEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);
bool QInputDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QInputDialog_override_virtual_eventFilter(void* self, intptr_t slot);
bool QInputDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QInputDialog_override_virtual_devType(void* self, intptr_t slot);
int QInputDialog_virtualbase_devType(const void* self);
bool QInputDialog_override_virtual_heightForWidth(void* self, intptr_t slot);
int QInputDialog_virtualbase_heightForWidth(const void* self, int param1);
bool QInputDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QInputDialog_virtualbase_hasHeightForWidth(const void* self);
bool QInputDialog_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QInputDialog_virtualbase_paintEngine(const void* self);
bool QInputDialog_override_virtual_event(void* self, intptr_t slot);
bool QInputDialog_virtualbase_event(void* self, QEvent* event);
bool QInputDialog_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QInputDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QInputDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QInputDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QInputDialog_override_virtual_wheelEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QInputDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QInputDialog_override_virtual_focusInEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QInputDialog_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QInputDialog_override_virtual_enterEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QInputDialog_override_virtual_leaveEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_leaveEvent(void* self, QEvent* event);
bool QInputDialog_override_virtual_paintEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QInputDialog_override_virtual_moveEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QInputDialog_override_virtual_tabletEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QInputDialog_override_virtual_actionEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QInputDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QInputDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QInputDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QInputDialog_override_virtual_dropEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QInputDialog_override_virtual_hideEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QInputDialog_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QInputDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QInputDialog_override_virtual_changeEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_changeEvent(void* self, QEvent* param1);
bool QInputDialog_override_virtual_metric(void* self, intptr_t slot);
int QInputDialog_virtualbase_metric(const void* self, int param1);
bool QInputDialog_override_virtual_initPainter(void* self, intptr_t slot);
void QInputDialog_virtualbase_initPainter(const void* self, QPainter* painter);
bool QInputDialog_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QInputDialog_virtualbase_redirected(const void* self, QPoint* offset);
bool QInputDialog_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QInputDialog_virtualbase_sharedPainter(const void* self);
bool QInputDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QInputDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QInputDialog_virtualbase_inputMethodQuery(const void* self, int param1);
bool QInputDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QInputDialog_virtualbase_focusNextPrevChild(void* self, bool next);
bool QInputDialog_override_virtual_timerEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QInputDialog_override_virtual_childEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_childEvent(void* self, QChildEvent* event);
bool QInputDialog_override_virtual_customEvent(void* self, intptr_t slot);
void QInputDialog_virtualbase_customEvent(void* self, QEvent* event);
bool QInputDialog_override_virtual_connectNotify(void* self, intptr_t slot);
void QInputDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QInputDialog_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QInputDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QInputDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
void QInputDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QInputDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QInputDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QInputDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QInputDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QInputDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QInputDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QInputDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QInputDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QInputDialog_delete(QInputDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
