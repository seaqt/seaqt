#pragma once
#ifndef SEAQT_QTWIDGETS_GEN_QLINEEDIT_H
#define SEAQT_QTWIDGETS_GEN_QLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QCompleter;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QLineEdit;
class QMargins;
class QMenu;
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
class QRect;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QValidator;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QCompleter QCompleter;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLineEdit QLineEdit;
typedef struct QMargins QMargins;
typedef struct QMenu QMenu;
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
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValidator QValidator;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

struct QLineEdit_VTable {
	void (*destructor)(struct QLineEdit_VTable* vtbl, QLineEdit* self);
	QMetaObject* (*metaObject)(struct QLineEdit_VTable* vtbl, const QLineEdit* self);
	void* (*metacast)(struct QLineEdit_VTable* vtbl, QLineEdit* self, const char* param1);
	int (*metacall)(struct QLineEdit_VTable* vtbl, QLineEdit* self, int param1, int param2, void** param3);
	QSize* (*sizeHint)(struct QLineEdit_VTable* vtbl, const QLineEdit* self);
	QSize* (*minimumSizeHint)(struct QLineEdit_VTable* vtbl, const QLineEdit* self);
	void (*mousePressEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QMouseEvent* param1);
	void (*mouseMoveEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QMouseEvent* param1);
	void (*mouseReleaseEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QMouseEvent* param1);
	void (*mouseDoubleClickEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QMouseEvent* param1);
	void (*keyPressEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QKeyEvent* param1);
	void (*keyReleaseEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QKeyEvent* param1);
	void (*focusInEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QFocusEvent* param1);
	void (*focusOutEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QFocusEvent* param1);
	void (*paintEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QPaintEvent* param1);
	void (*dragEnterEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QDragEnterEvent* param1);
	void (*dragMoveEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QDragMoveEvent* e);
	void (*dragLeaveEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QDragLeaveEvent* e);
	void (*dropEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QDropEvent* param1);
	void (*changeEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QEvent* param1);
	void (*contextMenuEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QContextMenuEvent* param1);
	void (*inputMethodEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QInputMethodEvent* param1);
	void (*initStyleOption)(struct QLineEdit_VTable* vtbl, const QLineEdit* self, QStyleOptionFrame* option);
	QVariant* (*inputMethodQuery)(struct QLineEdit_VTable* vtbl, const QLineEdit* self, int param1);
	void (*timerEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QTimerEvent* param1);
	bool (*event)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QEvent* param1);
	int (*devType)(struct QLineEdit_VTable* vtbl, const QLineEdit* self);
	void (*setVisible)(struct QLineEdit_VTable* vtbl, QLineEdit* self, bool visible);
	int (*heightForWidth)(struct QLineEdit_VTable* vtbl, const QLineEdit* self, int param1);
	bool (*hasHeightForWidth)(struct QLineEdit_VTable* vtbl, const QLineEdit* self);
	QPaintEngine* (*paintEngine)(struct QLineEdit_VTable* vtbl, const QLineEdit* self);
	void (*wheelEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QWheelEvent* event);
	void (*enterEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QEnterEvent* event);
	void (*leaveEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QEvent* event);
	void (*moveEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QMoveEvent* event);
	void (*resizeEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QResizeEvent* event);
	void (*closeEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QCloseEvent* event);
	void (*tabletEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QTabletEvent* event);
	void (*actionEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QActionEvent* event);
	void (*showEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QShowEvent* event);
	void (*hideEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QHideEvent* event);
	bool (*nativeEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, struct miqt_string eventType, void* message, intptr_t* result);
	int (*metric)(struct QLineEdit_VTable* vtbl, const QLineEdit* self, int param1);
	void (*initPainter)(struct QLineEdit_VTable* vtbl, const QLineEdit* self, QPainter* painter);
	QPaintDevice* (*redirected)(struct QLineEdit_VTable* vtbl, const QLineEdit* self, QPoint* offset);
	QPainter* (*sharedPainter)(struct QLineEdit_VTable* vtbl, const QLineEdit* self);
	bool (*focusNextPrevChild)(struct QLineEdit_VTable* vtbl, QLineEdit* self, bool next);
	bool (*eventFilter)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QObject* watched, QEvent* event);
	void (*childEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QChildEvent* event);
	void (*customEvent)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QEvent* event);
	void (*connectNotify)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QLineEdit_VTable* vtbl, QLineEdit* self, QMetaMethod* signal);
};
QLineEdit* QLineEdit_new(struct QLineEdit_VTable* vtbl, QWidget* parent);
QLineEdit* QLineEdit_new2(struct QLineEdit_VTable* vtbl);
QLineEdit* QLineEdit_new3(struct QLineEdit_VTable* vtbl, struct miqt_string param1);
QLineEdit* QLineEdit_new4(struct QLineEdit_VTable* vtbl, struct miqt_string param1, QWidget* parent);
void QLineEdit_virtbase(QLineEdit* src, QWidget** outptr_QWidget);
QMetaObject* QLineEdit_metaObject(const QLineEdit* self);
void* QLineEdit_metacast(QLineEdit* self, const char* param1);
int QLineEdit_metacall(QLineEdit* self, int param1, int param2, void** param3);
struct miqt_string QLineEdit_tr(const char* s);
struct miqt_string QLineEdit_text(const QLineEdit* self);
struct miqt_string QLineEdit_displayText(const QLineEdit* self);
struct miqt_string QLineEdit_placeholderText(const QLineEdit* self);
void QLineEdit_setPlaceholderText(QLineEdit* self, struct miqt_string placeholderText);
int QLineEdit_maxLength(const QLineEdit* self);
void QLineEdit_setMaxLength(QLineEdit* self, int maxLength);
void QLineEdit_setFrame(QLineEdit* self, bool frame);
bool QLineEdit_hasFrame(const QLineEdit* self);
void QLineEdit_setClearButtonEnabled(QLineEdit* self, bool enable);
bool QLineEdit_isClearButtonEnabled(const QLineEdit* self);
int QLineEdit_echoMode(const QLineEdit* self);
void QLineEdit_setEchoMode(QLineEdit* self, int echoMode);
bool QLineEdit_isReadOnly(const QLineEdit* self);
void QLineEdit_setReadOnly(QLineEdit* self, bool readOnly);
void QLineEdit_setValidator(QLineEdit* self, QValidator* validator);
QValidator* QLineEdit_validator(const QLineEdit* self);
void QLineEdit_setCompleter(QLineEdit* self, QCompleter* completer);
QCompleter* QLineEdit_completer(const QLineEdit* self);
QSize* QLineEdit_sizeHint(const QLineEdit* self);
QSize* QLineEdit_minimumSizeHint(const QLineEdit* self);
int QLineEdit_cursorPosition(const QLineEdit* self);
void QLineEdit_setCursorPosition(QLineEdit* self, int cursorPosition);
int QLineEdit_cursorPositionAt(QLineEdit* self, QPoint* pos);
void QLineEdit_setAlignment(QLineEdit* self, int flag);
int QLineEdit_alignment(const QLineEdit* self);
void QLineEdit_cursorForward(QLineEdit* self, bool mark);
void QLineEdit_cursorBackward(QLineEdit* self, bool mark);
void QLineEdit_cursorWordForward(QLineEdit* self, bool mark);
void QLineEdit_cursorWordBackward(QLineEdit* self, bool mark);
void QLineEdit_backspace(QLineEdit* self);
void QLineEdit_del(QLineEdit* self);
void QLineEdit_home(QLineEdit* self, bool mark);
void QLineEdit_end(QLineEdit* self, bool mark);
bool QLineEdit_isModified(const QLineEdit* self);
void QLineEdit_setModified(QLineEdit* self, bool modified);
void QLineEdit_setSelection(QLineEdit* self, int param1, int param2);
bool QLineEdit_hasSelectedText(const QLineEdit* self);
struct miqt_string QLineEdit_selectedText(const QLineEdit* self);
int QLineEdit_selectionStart(const QLineEdit* self);
int QLineEdit_selectionEnd(const QLineEdit* self);
int QLineEdit_selectionLength(const QLineEdit* self);
bool QLineEdit_isUndoAvailable(const QLineEdit* self);
bool QLineEdit_isRedoAvailable(const QLineEdit* self);
void QLineEdit_setDragEnabled(QLineEdit* self, bool b);
bool QLineEdit_dragEnabled(const QLineEdit* self);
void QLineEdit_setCursorMoveStyle(QLineEdit* self, int style);
int QLineEdit_cursorMoveStyle(const QLineEdit* self);
struct miqt_string QLineEdit_inputMask(const QLineEdit* self);
void QLineEdit_setInputMask(QLineEdit* self, struct miqt_string inputMask);
bool QLineEdit_hasAcceptableInput(const QLineEdit* self);
void QLineEdit_setTextMargins(QLineEdit* self, int left, int top, int right, int bottom);
void QLineEdit_setTextMarginsWithMargins(QLineEdit* self, QMargins* margins);
QMargins* QLineEdit_textMargins(const QLineEdit* self);
void QLineEdit_addAction(QLineEdit* self, QAction* action, int position);
QAction* QLineEdit_addAction2(QLineEdit* self, QIcon* icon, int position);
void QLineEdit_setText(QLineEdit* self, struct miqt_string text);
void QLineEdit_clear(QLineEdit* self);
void QLineEdit_selectAll(QLineEdit* self);
void QLineEdit_undo(QLineEdit* self);
void QLineEdit_redo(QLineEdit* self);
void QLineEdit_cut(QLineEdit* self);
void QLineEdit_copy(const QLineEdit* self);
void QLineEdit_paste(QLineEdit* self);
void QLineEdit_deselect(QLineEdit* self);
void QLineEdit_insert(QLineEdit* self, struct miqt_string param1);
QMenu* QLineEdit_createStandardContextMenu(QLineEdit* self);
void QLineEdit_textChanged(QLineEdit* self, struct miqt_string param1);
void QLineEdit_connect_textChanged(QLineEdit* self, intptr_t slot, void (*callback)(intptr_t, struct miqt_string), void (*release)(intptr_t));
void QLineEdit_textEdited(QLineEdit* self, struct miqt_string param1);
void QLineEdit_connect_textEdited(QLineEdit* self, intptr_t slot, void (*callback)(intptr_t, struct miqt_string), void (*release)(intptr_t));
void QLineEdit_cursorPositionChanged(QLineEdit* self, int param1, int param2);
void QLineEdit_connect_cursorPositionChanged(QLineEdit* self, intptr_t slot, void (*callback)(intptr_t, int, int), void (*release)(intptr_t));
void QLineEdit_returnPressed(QLineEdit* self);
void QLineEdit_connect_returnPressed(QLineEdit* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
void QLineEdit_editingFinished(QLineEdit* self);
void QLineEdit_connect_editingFinished(QLineEdit* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
void QLineEdit_selectionChanged(QLineEdit* self);
void QLineEdit_connect_selectionChanged(QLineEdit* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
void QLineEdit_inputRejected(QLineEdit* self);
void QLineEdit_connect_inputRejected(QLineEdit* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
void QLineEdit_mousePressEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_mouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_mouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_mouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_keyPressEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_keyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_focusInEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_focusOutEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_paintEvent(QLineEdit* self, QPaintEvent* param1);
void QLineEdit_dragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
void QLineEdit_dragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
void QLineEdit_dragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
void QLineEdit_dropEvent(QLineEdit* self, QDropEvent* param1);
void QLineEdit_changeEvent(QLineEdit* self, QEvent* param1);
void QLineEdit_contextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
void QLineEdit_inputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
void QLineEdit_initStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
QVariant* QLineEdit_inputMethodQuery(const QLineEdit* self, int param1);
QVariant* QLineEdit_inputMethodQuery2(const QLineEdit* self, int property, QVariant* argument);
void QLineEdit_timerEvent(QLineEdit* self, QTimerEvent* param1);
bool QLineEdit_event(QLineEdit* self, QEvent* param1);
struct miqt_string QLineEdit_tr2(const char* s, const char* c);
struct miqt_string QLineEdit_tr3(const char* s, const char* c, int n);
void QLineEdit_cursorForward2(QLineEdit* self, bool mark, int steps);
void QLineEdit_cursorBackward2(QLineEdit* self, bool mark, int steps);
QMetaObject* QLineEdit_virtualbase_metaObject(const void* self);
void* QLineEdit_virtualbase_metacast(void* self, const char* param1);
int QLineEdit_virtualbase_metacall(void* self, int param1, int param2, void** param3);
QSize* QLineEdit_virtualbase_sizeHint(const void* self);
QSize* QLineEdit_virtualbase_minimumSizeHint(const void* self);
void QLineEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
void QLineEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
void QLineEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
void QLineEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);
void QLineEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
void QLineEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1);
void QLineEdit_virtualbase_focusInEvent(void* self, QFocusEvent* param1);
void QLineEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);
void QLineEdit_virtualbase_paintEvent(void* self, QPaintEvent* param1);
void QLineEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);
void QLineEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);
void QLineEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);
void QLineEdit_virtualbase_dropEvent(void* self, QDropEvent* param1);
void QLineEdit_virtualbase_changeEvent(void* self, QEvent* param1);
void QLineEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
void QLineEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
void QLineEdit_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
QVariant* QLineEdit_virtualbase_inputMethodQuery(const void* self, int param1);
void QLineEdit_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QLineEdit_virtualbase_event(void* self, QEvent* param1);
int QLineEdit_virtualbase_devType(const void* self);
void QLineEdit_virtualbase_setVisible(void* self, bool visible);
int QLineEdit_virtualbase_heightForWidth(const void* self, int param1);
bool QLineEdit_virtualbase_hasHeightForWidth(const void* self);
QPaintEngine* QLineEdit_virtualbase_paintEngine(const void* self);
void QLineEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event);
void QLineEdit_virtualbase_enterEvent(void* self, QEnterEvent* event);
void QLineEdit_virtualbase_leaveEvent(void* self, QEvent* event);
void QLineEdit_virtualbase_moveEvent(void* self, QMoveEvent* event);
void QLineEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event);
void QLineEdit_virtualbase_closeEvent(void* self, QCloseEvent* event);
void QLineEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event);
void QLineEdit_virtualbase_actionEvent(void* self, QActionEvent* event);
void QLineEdit_virtualbase_showEvent(void* self, QShowEvent* event);
void QLineEdit_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QLineEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
int QLineEdit_virtualbase_metric(const void* self, int param1);
void QLineEdit_virtualbase_initPainter(const void* self, QPainter* painter);
QPaintDevice* QLineEdit_virtualbase_redirected(const void* self, QPoint* offset);
QPainter* QLineEdit_virtualbase_sharedPainter(const void* self);
bool QLineEdit_virtualbase_focusNextPrevChild(void* self, bool next);
bool QLineEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
void QLineEdit_virtualbase_childEvent(void* self, QChildEvent* event);
void QLineEdit_virtualbase_customEvent(void* self, QEvent* event);
void QLineEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QLineEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QRect* QLineEdit_protectedbase_cursorRect(const void* self);
void QLineEdit_protectedbase_updateMicroFocus(void* self);
void QLineEdit_protectedbase_create(void* self);
void QLineEdit_protectedbase_destroy(void* self);
bool QLineEdit_protectedbase_focusNextChild(void* self);
bool QLineEdit_protectedbase_focusPreviousChild(void* self);
QObject* QLineEdit_protectedbase_sender(const void* self);
int QLineEdit_protectedbase_senderSignalIndex(const void* self);
int QLineEdit_protectedbase_receivers(const void* self, const char* signal);
bool QLineEdit_protectedbase_isSignalConnected(const void* self, QMetaMethod* signal);
const QMetaObject* QLineEdit_staticMetaObject();
void QLineEdit_delete(QLineEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
