#pragma once
#ifndef SEAQT_QTWIDGETS_GEN_QTEXTBROWSER_H
#define SEAQT_QTWIDGETS_GEN_QTEXTBROWSER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMargins;
class QMetaMethod;
class QMetaObject;
class QMimeData;
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
class QStyleOptionFrame;
class QTabletEvent;
class QTextBrowser;
class QTextCursor;
class QTextEdit;
class QTimerEvent;
class QUrl;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
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
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTextBrowser QTextBrowser;
typedef struct QTextCursor QTextCursor;
typedef struct QTextEdit QTextEdit;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

struct QTextBrowser_VTable {
	void (*destructor)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self);
	QMetaObject* (*metaObject)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self);
	void* (*metacast)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, const char* param1);
	int (*metacall)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, int param1, int param2, void** param3);
	QVariant* (*loadResource)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, int type, QUrl* name);
	void (*setSource)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QUrl* name);
	void (*backward)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self);
	void (*forward)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self);
	void (*home)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self);
	void (*reload)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self);
	bool (*event)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QEvent* e);
	void (*keyPressEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QKeyEvent* ev);
	void (*mouseMoveEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QMouseEvent* ev);
	void (*mousePressEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QMouseEvent* ev);
	void (*mouseReleaseEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QMouseEvent* ev);
	void (*focusOutEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QFocusEvent* ev);
	bool (*focusNextPrevChild)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, bool next);
	void (*paintEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QPaintEvent* e);
	QVariant* (*inputMethodQuery)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self, int property);
	void (*timerEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QTimerEvent* e);
	void (*keyReleaseEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QKeyEvent* e);
	void (*resizeEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QResizeEvent* e);
	void (*mouseDoubleClickEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QMouseEvent* e);
	void (*contextMenuEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QContextMenuEvent* e);
	void (*dragEnterEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QDragEnterEvent* e);
	void (*dragLeaveEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QDragLeaveEvent* e);
	void (*dragMoveEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QDragMoveEvent* e);
	void (*dropEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QDropEvent* e);
	void (*focusInEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QFocusEvent* e);
	void (*showEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QShowEvent* param1);
	void (*changeEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QEvent* e);
	void (*wheelEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QWheelEvent* e);
	QMimeData* (*createMimeDataFromSelection)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self);
	bool (*canInsertFromMimeData)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self, QMimeData* source);
	void (*insertFromMimeData)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QMimeData* source);
	void (*inputMethodEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QInputMethodEvent* param1);
	void (*scrollContentsBy)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, int dx, int dy);
	void (*doSetTextCursor)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QTextCursor* cursor);
	QSize* (*minimumSizeHint)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self);
	QSize* (*sizeHint)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self);
	void (*setupViewport)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QWidget* viewport);
	bool (*eventFilter)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QObject* param1, QEvent* param2);
	bool (*viewportEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QEvent* param1);
	QSize* (*viewportSizeHint)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self);
	int (*devType)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self);
	void (*setVisible)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, bool visible);
	int (*heightForWidth)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self, int param1);
	bool (*hasHeightForWidth)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self);
	QPaintEngine* (*paintEngine)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self);
	void (*enterEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QEvent* event);
	void (*leaveEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QEvent* event);
	void (*moveEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QMoveEvent* event);
	void (*closeEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QCloseEvent* event);
	void (*tabletEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QTabletEvent* event);
	void (*actionEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QActionEvent* event);
	void (*hideEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QHideEvent* event);
	bool (*nativeEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, struct miqt_string eventType, void* message, long* result);
	int (*metric)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self, int param1);
	void (*initPainter)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self, QPainter* painter);
	QPaintDevice* (*redirected)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self, QPoint* offset);
	QPainter* (*sharedPainter)(struct QTextBrowser_VTable* vtbl, const QTextBrowser* self);
	void (*childEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QChildEvent* event);
	void (*customEvent)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QEvent* event);
	void (*connectNotify)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QTextBrowser_VTable* vtbl, QTextBrowser* self, QMetaMethod* signal);
};
QTextBrowser* QTextBrowser_new(struct QTextBrowser_VTable* vtbl, QWidget* parent);
QTextBrowser* QTextBrowser_new2(struct QTextBrowser_VTable* vtbl);
void QTextBrowser_virtbase(QTextBrowser* src, QTextEdit** outptr_QTextEdit);
QMetaObject* QTextBrowser_metaObject(const QTextBrowser* self);
void* QTextBrowser_metacast(QTextBrowser* self, const char* param1);
int QTextBrowser_metacall(QTextBrowser* self, int param1, int param2, void** param3);
struct miqt_string QTextBrowser_tr(const char* s);
struct miqt_string QTextBrowser_trUtf8(const char* s);
QUrl* QTextBrowser_source(const QTextBrowser* self);
int QTextBrowser_sourceType(const QTextBrowser* self);
struct miqt_array /* of struct miqt_string */  QTextBrowser_searchPaths(const QTextBrowser* self);
void QTextBrowser_setSearchPaths(QTextBrowser* self, struct miqt_array /* of struct miqt_string */  paths);
QVariant* QTextBrowser_loadResource(QTextBrowser* self, int type, QUrl* name);
bool QTextBrowser_isBackwardAvailable(const QTextBrowser* self);
bool QTextBrowser_isForwardAvailable(const QTextBrowser* self);
void QTextBrowser_clearHistory(QTextBrowser* self);
struct miqt_string QTextBrowser_historyTitle(const QTextBrowser* self, int param1);
QUrl* QTextBrowser_historyUrl(const QTextBrowser* self, int param1);
int QTextBrowser_backwardHistoryCount(const QTextBrowser* self);
int QTextBrowser_forwardHistoryCount(const QTextBrowser* self);
bool QTextBrowser_openExternalLinks(const QTextBrowser* self);
void QTextBrowser_setOpenExternalLinks(QTextBrowser* self, bool open);
bool QTextBrowser_openLinks(const QTextBrowser* self);
void QTextBrowser_setOpenLinks(QTextBrowser* self, bool open);
void QTextBrowser_setSource(QTextBrowser* self, QUrl* name);
void QTextBrowser_setSource2(QTextBrowser* self, QUrl* name, int type);
void QTextBrowser_backward(QTextBrowser* self);
void QTextBrowser_forward(QTextBrowser* self);
void QTextBrowser_home(QTextBrowser* self);
void QTextBrowser_reload(QTextBrowser* self);
void QTextBrowser_backwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_connect_backwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_forwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_connect_forwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_historyChanged(QTextBrowser* self);
void QTextBrowser_connect_historyChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_sourceChanged(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_sourceChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_highlighted(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_highlighted(QTextBrowser* self, intptr_t slot);
void QTextBrowser_highlightedWithQString(QTextBrowser* self, struct miqt_string param1);
void QTextBrowser_connect_highlightedWithQString(QTextBrowser* self, intptr_t slot);
void QTextBrowser_anchorClicked(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_anchorClicked(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_event(QTextBrowser* self, QEvent* e);
void QTextBrowser_keyPressEvent(QTextBrowser* self, QKeyEvent* ev);
void QTextBrowser_mouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_mousePressEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_mouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_focusOutEvent(QTextBrowser* self, QFocusEvent* ev);
bool QTextBrowser_focusNextPrevChild(QTextBrowser* self, bool next);
void QTextBrowser_paintEvent(QTextBrowser* self, QPaintEvent* e);
struct miqt_string QTextBrowser_tr2(const char* s, const char* c);
struct miqt_string QTextBrowser_tr3(const char* s, const char* c, int n);
struct miqt_string QTextBrowser_trUtf82(const char* s, const char* c);
struct miqt_string QTextBrowser_trUtf83(const char* s, const char* c, int n);
QMetaObject* QTextBrowser_virtualbase_metaObject(const void* self);
void* QTextBrowser_virtualbase_metacast(void* self, const char* param1);
int QTextBrowser_virtualbase_metacall(void* self, int param1, int param2, void** param3);
QVariant* QTextBrowser_virtualbase_loadResource(void* self, int type, QUrl* name);
void QTextBrowser_virtualbase_setSource(void* self, QUrl* name);
void QTextBrowser_virtualbase_backward(void* self);
void QTextBrowser_virtualbase_forward(void* self);
void QTextBrowser_virtualbase_home(void* self);
void QTextBrowser_virtualbase_reload(void* self);
bool QTextBrowser_virtualbase_event(void* self, QEvent* e);
void QTextBrowser_virtualbase_keyPressEvent(void* self, QKeyEvent* ev);
void QTextBrowser_virtualbase_mouseMoveEvent(void* self, QMouseEvent* ev);
void QTextBrowser_virtualbase_mousePressEvent(void* self, QMouseEvent* ev);
void QTextBrowser_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* ev);
void QTextBrowser_virtualbase_focusOutEvent(void* self, QFocusEvent* ev);
bool QTextBrowser_virtualbase_focusNextPrevChild(void* self, bool next);
void QTextBrowser_virtualbase_paintEvent(void* self, QPaintEvent* e);
QVariant* QTextBrowser_virtualbase_inputMethodQuery(const void* self, int property);
void QTextBrowser_virtualbase_timerEvent(void* self, QTimerEvent* e);
void QTextBrowser_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
void QTextBrowser_virtualbase_resizeEvent(void* self, QResizeEvent* e);
void QTextBrowser_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e);
void QTextBrowser_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e);
void QTextBrowser_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e);
void QTextBrowser_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);
void QTextBrowser_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);
void QTextBrowser_virtualbase_dropEvent(void* self, QDropEvent* e);
void QTextBrowser_virtualbase_focusInEvent(void* self, QFocusEvent* e);
void QTextBrowser_virtualbase_showEvent(void* self, QShowEvent* param1);
void QTextBrowser_virtualbase_changeEvent(void* self, QEvent* e);
void QTextBrowser_virtualbase_wheelEvent(void* self, QWheelEvent* e);
QMimeData* QTextBrowser_virtualbase_createMimeDataFromSelection(const void* self);
bool QTextBrowser_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source);
void QTextBrowser_virtualbase_insertFromMimeData(void* self, QMimeData* source);
void QTextBrowser_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
void QTextBrowser_virtualbase_scrollContentsBy(void* self, int dx, int dy);
void QTextBrowser_virtualbase_doSetTextCursor(void* self, QTextCursor* cursor);
QSize* QTextBrowser_virtualbase_minimumSizeHint(const void* self);
QSize* QTextBrowser_virtualbase_sizeHint(const void* self);
void QTextBrowser_virtualbase_setupViewport(void* self, QWidget* viewport);
bool QTextBrowser_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QTextBrowser_virtualbase_viewportEvent(void* self, QEvent* param1);
QSize* QTextBrowser_virtualbase_viewportSizeHint(const void* self);
int QTextBrowser_virtualbase_devType(const void* self);
void QTextBrowser_virtualbase_setVisible(void* self, bool visible);
int QTextBrowser_virtualbase_heightForWidth(const void* self, int param1);
bool QTextBrowser_virtualbase_hasHeightForWidth(const void* self);
QPaintEngine* QTextBrowser_virtualbase_paintEngine(const void* self);
void QTextBrowser_virtualbase_enterEvent(void* self, QEvent* event);
void QTextBrowser_virtualbase_leaveEvent(void* self, QEvent* event);
void QTextBrowser_virtualbase_moveEvent(void* self, QMoveEvent* event);
void QTextBrowser_virtualbase_closeEvent(void* self, QCloseEvent* event);
void QTextBrowser_virtualbase_tabletEvent(void* self, QTabletEvent* event);
void QTextBrowser_virtualbase_actionEvent(void* self, QActionEvent* event);
void QTextBrowser_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QTextBrowser_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
int QTextBrowser_virtualbase_metric(const void* self, int param1);
void QTextBrowser_virtualbase_initPainter(const void* self, QPainter* painter);
QPaintDevice* QTextBrowser_virtualbase_redirected(const void* self, QPoint* offset);
QPainter* QTextBrowser_virtualbase_sharedPainter(const void* self);
void QTextBrowser_virtualbase_childEvent(void* self, QChildEvent* event);
void QTextBrowser_virtualbase_customEvent(void* self, QEvent* event);
void QTextBrowser_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QTextBrowser_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTextBrowser_protectedbase_doSetSource(bool* _dynamic_cast_ok, void* self, QUrl* name);
void QTextBrowser_protectedbase_doSetSource2(bool* _dynamic_cast_ok, void* self, QUrl* name, int type);
void QTextBrowser_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range);
void QTextBrowser_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* QTextBrowser_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void QTextBrowser_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QTextBrowser_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QTextBrowser_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QTextBrowser_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QTextBrowser_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QTextBrowser_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QTextBrowser_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QTextBrowser_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTextBrowser_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTextBrowser_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTextBrowser_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
const QMetaObject* QTextBrowser_staticMetaObject();
void QTextBrowser_delete(QTextBrowser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
