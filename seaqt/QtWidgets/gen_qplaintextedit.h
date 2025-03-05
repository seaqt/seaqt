#pragma once
#ifndef SEAQT_QTWIDGETS_GEN_QPLAINTEXTEDIT_H
#define SEAQT_QTWIDGETS_GEN_QPLAINTEXTEDIT_H

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
class QAbstractTextDocumentLayout;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext)
typedef QAbstractTextDocumentLayout::PaintContext QAbstractTextDocumentLayout__PaintContext;
#else
class QAbstractTextDocumentLayout__PaintContext;
#endif
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMargins;
class QMenu;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPagedPaintDevice;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPlainTextDocumentLayout;
class QPlainTextEdit;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QRegularExpression;
class QResizeEvent;
class QShowEvent;
class QSize;
class QSizeF;
class QStyleOptionFrame;
class QTabletEvent;
class QTextBlock;
class QTextCharFormat;
class QTextCursor;
class QTextDocument;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection)
typedef QTextEdit::ExtraSelection QTextEdit__ExtraSelection;
#else
class QTextEdit__ExtraSelection;
#endif
class QTextFormat;
class QTextFrame;
class QTextInlineObject;
class QTimerEvent;
class QUrl;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QAbstractTextDocumentLayout QAbstractTextDocumentLayout;
typedef struct QAbstractTextDocumentLayout__PaintContext QAbstractTextDocumentLayout__PaintContext;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPlainTextDocumentLayout QPlainTextDocumentLayout;
typedef struct QPlainTextEdit QPlainTextEdit;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegularExpression QRegularExpression;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTextBlock QTextBlock;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextEdit__ExtraSelection QTextEdit__ExtraSelection;
typedef struct QTextFormat QTextFormat;
typedef struct QTextFrame QTextFrame;
typedef struct QTextInlineObject QTextInlineObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

struct QPlainTextEdit_VTable {
	void (*destructor)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self);
	QMetaObject* (*metaObject)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self);
	void* (*metacast)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, const char* param1);
	int (*metacall)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, int param1, int param2, void** param3);
	QVariant* (*loadResource)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, int type, QUrl* name);
	QVariant* (*inputMethodQuery)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self, int property);
	bool (*event)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QEvent* e);
	void (*timerEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QTimerEvent* e);
	void (*keyPressEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QKeyEvent* e);
	void (*keyReleaseEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QKeyEvent* e);
	void (*resizeEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QResizeEvent* e);
	void (*paintEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QPaintEvent* e);
	void (*mousePressEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QMouseEvent* e);
	void (*mouseMoveEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QMouseEvent* e);
	void (*mouseReleaseEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QMouseEvent* e);
	void (*mouseDoubleClickEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QMouseEvent* e);
	bool (*focusNextPrevChild)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, bool next);
	void (*contextMenuEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QContextMenuEvent* e);
	void (*dragEnterEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QDragEnterEvent* e);
	void (*dragLeaveEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QDragLeaveEvent* e);
	void (*dragMoveEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QDragMoveEvent* e);
	void (*dropEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QDropEvent* e);
	void (*focusInEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QFocusEvent* e);
	void (*focusOutEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QFocusEvent* e);
	void (*showEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QShowEvent* param1);
	void (*changeEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QEvent* e);
	void (*wheelEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QWheelEvent* e);
	QMimeData* (*createMimeDataFromSelection)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self);
	bool (*canInsertFromMimeData)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self, QMimeData* source);
	void (*insertFromMimeData)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QMimeData* source);
	void (*inputMethodEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QInputMethodEvent* param1);
	void (*scrollContentsBy)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, int dx, int dy);
	void (*doSetTextCursor)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QTextCursor* cursor);
	QSize* (*minimumSizeHint)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self);
	QSize* (*sizeHint)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self);
	void (*setupViewport)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QWidget* viewport);
	bool (*eventFilter)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QObject* param1, QEvent* param2);
	bool (*viewportEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QEvent* param1);
	QSize* (*viewportSizeHint)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self);
	void (*initStyleOption)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self, QStyleOptionFrame* option);
	int (*devType)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self);
	void (*setVisible)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, bool visible);
	int (*heightForWidth)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self, int param1);
	bool (*hasHeightForWidth)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self);
	QPaintEngine* (*paintEngine)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self);
	void (*enterEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QEnterEvent* event);
	void (*leaveEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QEvent* event);
	void (*moveEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QMoveEvent* event);
	void (*closeEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QCloseEvent* event);
	void (*tabletEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QTabletEvent* event);
	void (*actionEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QActionEvent* event);
	void (*hideEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QHideEvent* event);
	bool (*nativeEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, struct miqt_string eventType, void* message, intptr_t* result);
	int (*metric)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self, int param1);
	void (*initPainter)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self, QPainter* painter);
	QPaintDevice* (*redirected)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self, QPoint* offset);
	QPainter* (*sharedPainter)(struct QPlainTextEdit_VTable* vtbl, const QPlainTextEdit* self);
	void (*childEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QChildEvent* event);
	void (*customEvent)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QEvent* event);
	void (*connectNotify)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QPlainTextEdit_VTable* vtbl, QPlainTextEdit* self, QMetaMethod* signal);
};
QPlainTextEdit* QPlainTextEdit_new(struct QPlainTextEdit_VTable* vtbl, QWidget* parent);
QPlainTextEdit* QPlainTextEdit_new2(struct QPlainTextEdit_VTable* vtbl);
QPlainTextEdit* QPlainTextEdit_new3(struct QPlainTextEdit_VTable* vtbl, struct miqt_string text);
QPlainTextEdit* QPlainTextEdit_new4(struct QPlainTextEdit_VTable* vtbl, struct miqt_string text, QWidget* parent);
void QPlainTextEdit_virtbase(QPlainTextEdit* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QPlainTextEdit_metaObject(const QPlainTextEdit* self);
void* QPlainTextEdit_metacast(QPlainTextEdit* self, const char* param1);
int QPlainTextEdit_metacall(QPlainTextEdit* self, int param1, int param2, void** param3);
struct miqt_string QPlainTextEdit_tr(const char* s);
void QPlainTextEdit_setDocument(QPlainTextEdit* self, QTextDocument* document);
QTextDocument* QPlainTextEdit_document(const QPlainTextEdit* self);
void QPlainTextEdit_setPlaceholderText(QPlainTextEdit* self, struct miqt_string placeholderText);
struct miqt_string QPlainTextEdit_placeholderText(const QPlainTextEdit* self);
void QPlainTextEdit_setTextCursor(QPlainTextEdit* self, QTextCursor* cursor);
QTextCursor* QPlainTextEdit_textCursor(const QPlainTextEdit* self);
bool QPlainTextEdit_isReadOnly(const QPlainTextEdit* self);
void QPlainTextEdit_setReadOnly(QPlainTextEdit* self, bool ro);
void QPlainTextEdit_setTextInteractionFlags(QPlainTextEdit* self, int flags);
int QPlainTextEdit_textInteractionFlags(const QPlainTextEdit* self);
void QPlainTextEdit_mergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier);
void QPlainTextEdit_setCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format);
QTextCharFormat* QPlainTextEdit_currentCharFormat(const QPlainTextEdit* self);
bool QPlainTextEdit_tabChangesFocus(const QPlainTextEdit* self);
void QPlainTextEdit_setTabChangesFocus(QPlainTextEdit* self, bool b);
void QPlainTextEdit_setDocumentTitle(QPlainTextEdit* self, struct miqt_string title);
struct miqt_string QPlainTextEdit_documentTitle(const QPlainTextEdit* self);
bool QPlainTextEdit_isUndoRedoEnabled(const QPlainTextEdit* self);
void QPlainTextEdit_setUndoRedoEnabled(QPlainTextEdit* self, bool enable);
void QPlainTextEdit_setMaximumBlockCount(QPlainTextEdit* self, int maximum);
int QPlainTextEdit_maximumBlockCount(const QPlainTextEdit* self);
int QPlainTextEdit_lineWrapMode(const QPlainTextEdit* self);
void QPlainTextEdit_setLineWrapMode(QPlainTextEdit* self, int mode);
int QPlainTextEdit_wordWrapMode(const QPlainTextEdit* self);
void QPlainTextEdit_setWordWrapMode(QPlainTextEdit* self, int policy);
void QPlainTextEdit_setBackgroundVisible(QPlainTextEdit* self, bool visible);
bool QPlainTextEdit_backgroundVisible(const QPlainTextEdit* self);
void QPlainTextEdit_setCenterOnScroll(QPlainTextEdit* self, bool enabled);
bool QPlainTextEdit_centerOnScroll(const QPlainTextEdit* self);
bool QPlainTextEdit_find(QPlainTextEdit* self, struct miqt_string exp);
bool QPlainTextEdit_findWithExp(QPlainTextEdit* self, QRegularExpression* exp);
struct miqt_string QPlainTextEdit_toPlainText(const QPlainTextEdit* self);
void QPlainTextEdit_ensureCursorVisible(QPlainTextEdit* self);
QVariant* QPlainTextEdit_loadResource(QPlainTextEdit* self, int type, QUrl* name);
QMenu* QPlainTextEdit_createStandardContextMenu(QPlainTextEdit* self);
QMenu* QPlainTextEdit_createStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position);
QTextCursor* QPlainTextEdit_cursorForPosition(const QPlainTextEdit* self, QPoint* pos);
QRect* QPlainTextEdit_cursorRect(const QPlainTextEdit* self, QTextCursor* cursor);
QRect* QPlainTextEdit_cursorRect2(const QPlainTextEdit* self);
struct miqt_string QPlainTextEdit_anchorAt(const QPlainTextEdit* self, QPoint* pos);
bool QPlainTextEdit_overwriteMode(const QPlainTextEdit* self);
void QPlainTextEdit_setOverwriteMode(QPlainTextEdit* self, bool overwrite);
double QPlainTextEdit_tabStopDistance(const QPlainTextEdit* self);
void QPlainTextEdit_setTabStopDistance(QPlainTextEdit* self, double distance);
int QPlainTextEdit_cursorWidth(const QPlainTextEdit* self);
void QPlainTextEdit_setCursorWidth(QPlainTextEdit* self, int width);
void QPlainTextEdit_setExtraSelections(QPlainTextEdit* self, struct miqt_array /* of QTextEdit__ExtraSelection* */  selections);
struct miqt_array /* of QTextEdit__ExtraSelection* */  QPlainTextEdit_extraSelections(const QPlainTextEdit* self);
void QPlainTextEdit_moveCursor(QPlainTextEdit* self, int operation);
bool QPlainTextEdit_canPaste(const QPlainTextEdit* self);
void QPlainTextEdit_print(const QPlainTextEdit* self, QPagedPaintDevice* printer);
int QPlainTextEdit_blockCount(const QPlainTextEdit* self);
QVariant* QPlainTextEdit_inputMethodQuery(const QPlainTextEdit* self, int property);
QVariant* QPlainTextEdit_inputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument);
void QPlainTextEdit_setPlainText(QPlainTextEdit* self, struct miqt_string text);
void QPlainTextEdit_cut(QPlainTextEdit* self);
void QPlainTextEdit_copy(QPlainTextEdit* self);
void QPlainTextEdit_paste(QPlainTextEdit* self);
void QPlainTextEdit_undo(QPlainTextEdit* self);
void QPlainTextEdit_redo(QPlainTextEdit* self);
void QPlainTextEdit_clear(QPlainTextEdit* self);
void QPlainTextEdit_selectAll(QPlainTextEdit* self);
void QPlainTextEdit_insertPlainText(QPlainTextEdit* self, struct miqt_string text);
void QPlainTextEdit_appendPlainText(QPlainTextEdit* self, struct miqt_string text);
void QPlainTextEdit_appendHtml(QPlainTextEdit* self, struct miqt_string html);
void QPlainTextEdit_centerCursor(QPlainTextEdit* self);
void QPlainTextEdit_zoomIn(QPlainTextEdit* self);
void QPlainTextEdit_zoomOut(QPlainTextEdit* self);
void QPlainTextEdit_textChanged(QPlainTextEdit* self);
void QPlainTextEdit_connect_textChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_undoAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_connect_undoAvailable(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_redoAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_connect_redoAvailable(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_copyAvailable(QPlainTextEdit* self, bool b);
void QPlainTextEdit_connect_copyAvailable(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_selectionChanged(QPlainTextEdit* self);
void QPlainTextEdit_connect_selectionChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_cursorPositionChanged(QPlainTextEdit* self);
void QPlainTextEdit_connect_cursorPositionChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_updateRequest(QPlainTextEdit* self, QRect* rect, int dy);
void QPlainTextEdit_connect_updateRequest(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_blockCountChanged(QPlainTextEdit* self, int newBlockCount);
void QPlainTextEdit_connect_blockCountChanged(QPlainTextEdit* self, intptr_t slot);
void QPlainTextEdit_modificationChanged(QPlainTextEdit* self, bool param1);
void QPlainTextEdit_connect_modificationChanged(QPlainTextEdit* self, intptr_t slot);
bool QPlainTextEdit_event(QPlainTextEdit* self, QEvent* e);
void QPlainTextEdit_timerEvent(QPlainTextEdit* self, QTimerEvent* e);
void QPlainTextEdit_keyPressEvent(QPlainTextEdit* self, QKeyEvent* e);
void QPlainTextEdit_keyReleaseEvent(QPlainTextEdit* self, QKeyEvent* e);
void QPlainTextEdit_resizeEvent(QPlainTextEdit* self, QResizeEvent* e);
void QPlainTextEdit_paintEvent(QPlainTextEdit* self, QPaintEvent* e);
void QPlainTextEdit_mousePressEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_mouseMoveEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_mouseReleaseEvent(QPlainTextEdit* self, QMouseEvent* e);
void QPlainTextEdit_mouseDoubleClickEvent(QPlainTextEdit* self, QMouseEvent* e);
bool QPlainTextEdit_focusNextPrevChild(QPlainTextEdit* self, bool next);
void QPlainTextEdit_contextMenuEvent(QPlainTextEdit* self, QContextMenuEvent* e);
void QPlainTextEdit_dragEnterEvent(QPlainTextEdit* self, QDragEnterEvent* e);
void QPlainTextEdit_dragLeaveEvent(QPlainTextEdit* self, QDragLeaveEvent* e);
void QPlainTextEdit_dragMoveEvent(QPlainTextEdit* self, QDragMoveEvent* e);
void QPlainTextEdit_dropEvent(QPlainTextEdit* self, QDropEvent* e);
void QPlainTextEdit_focusInEvent(QPlainTextEdit* self, QFocusEvent* e);
void QPlainTextEdit_focusOutEvent(QPlainTextEdit* self, QFocusEvent* e);
void QPlainTextEdit_showEvent(QPlainTextEdit* self, QShowEvent* param1);
void QPlainTextEdit_changeEvent(QPlainTextEdit* self, QEvent* e);
void QPlainTextEdit_wheelEvent(QPlainTextEdit* self, QWheelEvent* e);
QMimeData* QPlainTextEdit_createMimeDataFromSelection(const QPlainTextEdit* self);
bool QPlainTextEdit_canInsertFromMimeData(const QPlainTextEdit* self, QMimeData* source);
void QPlainTextEdit_insertFromMimeData(QPlainTextEdit* self, QMimeData* source);
void QPlainTextEdit_inputMethodEvent(QPlainTextEdit* self, QInputMethodEvent* param1);
void QPlainTextEdit_scrollContentsBy(QPlainTextEdit* self, int dx, int dy);
void QPlainTextEdit_doSetTextCursor(QPlainTextEdit* self, QTextCursor* cursor);
struct miqt_string QPlainTextEdit_tr2(const char* s, const char* c);
struct miqt_string QPlainTextEdit_tr3(const char* s, const char* c, int n);
bool QPlainTextEdit_find2(QPlainTextEdit* self, struct miqt_string exp, int options);
bool QPlainTextEdit_find22(QPlainTextEdit* self, QRegularExpression* exp, int options);
void QPlainTextEdit_moveCursor2(QPlainTextEdit* self, int operation, int mode);
void QPlainTextEdit_zoomIn1(QPlainTextEdit* self, int range);
void QPlainTextEdit_zoomOut1(QPlainTextEdit* self, int range);
QMetaObject* QPlainTextEdit_virtualbase_metaObject(const void* self);
void* QPlainTextEdit_virtualbase_metacast(void* self, const char* param1);
int QPlainTextEdit_virtualbase_metacall(void* self, int param1, int param2, void** param3);
QVariant* QPlainTextEdit_virtualbase_loadResource(void* self, int type, QUrl* name);
QVariant* QPlainTextEdit_virtualbase_inputMethodQuery(const void* self, int property);
bool QPlainTextEdit_virtualbase_event(void* self, QEvent* e);
void QPlainTextEdit_virtualbase_timerEvent(void* self, QTimerEvent* e);
void QPlainTextEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* e);
void QPlainTextEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
void QPlainTextEdit_virtualbase_resizeEvent(void* self, QResizeEvent* e);
void QPlainTextEdit_virtualbase_paintEvent(void* self, QPaintEvent* e);
void QPlainTextEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
void QPlainTextEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);
void QPlainTextEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
void QPlainTextEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e);
bool QPlainTextEdit_virtualbase_focusNextPrevChild(void* self, bool next);
void QPlainTextEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e);
void QPlainTextEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e);
void QPlainTextEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);
void QPlainTextEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);
void QPlainTextEdit_virtualbase_dropEvent(void* self, QDropEvent* e);
void QPlainTextEdit_virtualbase_focusInEvent(void* self, QFocusEvent* e);
void QPlainTextEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* e);
void QPlainTextEdit_virtualbase_showEvent(void* self, QShowEvent* param1);
void QPlainTextEdit_virtualbase_changeEvent(void* self, QEvent* e);
void QPlainTextEdit_virtualbase_wheelEvent(void* self, QWheelEvent* e);
QMimeData* QPlainTextEdit_virtualbase_createMimeDataFromSelection(const void* self);
bool QPlainTextEdit_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source);
void QPlainTextEdit_virtualbase_insertFromMimeData(void* self, QMimeData* source);
void QPlainTextEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
void QPlainTextEdit_virtualbase_scrollContentsBy(void* self, int dx, int dy);
void QPlainTextEdit_virtualbase_doSetTextCursor(void* self, QTextCursor* cursor);
QSize* QPlainTextEdit_virtualbase_minimumSizeHint(const void* self);
QSize* QPlainTextEdit_virtualbase_sizeHint(const void* self);
void QPlainTextEdit_virtualbase_setupViewport(void* self, QWidget* viewport);
bool QPlainTextEdit_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QPlainTextEdit_virtualbase_viewportEvent(void* self, QEvent* param1);
QSize* QPlainTextEdit_virtualbase_viewportSizeHint(const void* self);
void QPlainTextEdit_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
int QPlainTextEdit_virtualbase_devType(const void* self);
void QPlainTextEdit_virtualbase_setVisible(void* self, bool visible);
int QPlainTextEdit_virtualbase_heightForWidth(const void* self, int param1);
bool QPlainTextEdit_virtualbase_hasHeightForWidth(const void* self);
QPaintEngine* QPlainTextEdit_virtualbase_paintEngine(const void* self);
void QPlainTextEdit_virtualbase_enterEvent(void* self, QEnterEvent* event);
void QPlainTextEdit_virtualbase_leaveEvent(void* self, QEvent* event);
void QPlainTextEdit_virtualbase_moveEvent(void* self, QMoveEvent* event);
void QPlainTextEdit_virtualbase_closeEvent(void* self, QCloseEvent* event);
void QPlainTextEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event);
void QPlainTextEdit_virtualbase_actionEvent(void* self, QActionEvent* event);
void QPlainTextEdit_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QPlainTextEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
int QPlainTextEdit_virtualbase_metric(const void* self, int param1);
void QPlainTextEdit_virtualbase_initPainter(const void* self, QPainter* painter);
QPaintDevice* QPlainTextEdit_virtualbase_redirected(const void* self, QPoint* offset);
QPainter* QPlainTextEdit_virtualbase_sharedPainter(const void* self);
void QPlainTextEdit_virtualbase_childEvent(void* self, QChildEvent* event);
void QPlainTextEdit_virtualbase_customEvent(void* self, QEvent* event);
void QPlainTextEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QPlainTextEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QTextBlock* QPlainTextEdit_protectedbase_firstVisibleBlock(bool* _dynamic_cast_ok, const void* self);
QPointF* QPlainTextEdit_protectedbase_contentOffset(bool* _dynamic_cast_ok, const void* self);
QRectF* QPlainTextEdit_protectedbase_blockBoundingRect(bool* _dynamic_cast_ok, const void* self, QTextBlock* block);
QRectF* QPlainTextEdit_protectedbase_blockBoundingGeometry(bool* _dynamic_cast_ok, const void* self, QTextBlock* block);
QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_protectedbase_getPaintContext(bool* _dynamic_cast_ok, const void* self);
void QPlainTextEdit_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range);
void QPlainTextEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* QPlainTextEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void QPlainTextEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QPlainTextEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QPlainTextEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QPlainTextEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QPlainTextEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QPlainTextEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QPlainTextEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPlainTextEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPlainTextEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPlainTextEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
const QMetaObject* QPlainTextEdit_staticMetaObject();
void QPlainTextEdit_delete(QPlainTextEdit* self);

struct QPlainTextDocumentLayout_VTable {
	void (*destructor)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self);
	QMetaObject* (*metaObject)(struct QPlainTextDocumentLayout_VTable* vtbl, const QPlainTextDocumentLayout* self);
	void* (*metacast)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, const char* param1);
	int (*metacall)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, int param1, int param2, void** param3);
	void (*draw)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2);
	int (*hitTest)(struct QPlainTextDocumentLayout_VTable* vtbl, const QPlainTextDocumentLayout* self, QPointF* param1, int param2);
	int (*pageCount)(struct QPlainTextDocumentLayout_VTable* vtbl, const QPlainTextDocumentLayout* self);
	QSizeF* (*documentSize)(struct QPlainTextDocumentLayout_VTable* vtbl, const QPlainTextDocumentLayout* self);
	QRectF* (*frameBoundingRect)(struct QPlainTextDocumentLayout_VTable* vtbl, const QPlainTextDocumentLayout* self, QTextFrame* param1);
	QRectF* (*blockBoundingRect)(struct QPlainTextDocumentLayout_VTable* vtbl, const QPlainTextDocumentLayout* self, QTextBlock* block);
	void (*documentChanged)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, int from, int param2, int charsAdded);
	void (*resizeInlineObject)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
	void (*positionInlineObject)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
	void (*drawInlineObject)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format);
	bool (*event)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QEvent* event);
	bool (*eventFilter)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QObject* watched, QEvent* event);
	void (*timerEvent)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QTimerEvent* event);
	void (*childEvent)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QChildEvent* event);
	void (*customEvent)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QEvent* event);
	void (*connectNotify)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QPlainTextDocumentLayout_VTable* vtbl, QPlainTextDocumentLayout* self, QMetaMethod* signal);
};
QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(struct QPlainTextDocumentLayout_VTable* vtbl, QTextDocument* document);
void QPlainTextDocumentLayout_virtbase(QPlainTextDocumentLayout* src, QAbstractTextDocumentLayout** outptr_QAbstractTextDocumentLayout);
QMetaObject* QPlainTextDocumentLayout_metaObject(const QPlainTextDocumentLayout* self);
void* QPlainTextDocumentLayout_metacast(QPlainTextDocumentLayout* self, const char* param1);
int QPlainTextDocumentLayout_metacall(QPlainTextDocumentLayout* self, int param1, int param2, void** param3);
struct miqt_string QPlainTextDocumentLayout_tr(const char* s);
void QPlainTextDocumentLayout_draw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2);
int QPlainTextDocumentLayout_hitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2);
int QPlainTextDocumentLayout_pageCount(const QPlainTextDocumentLayout* self);
QSizeF* QPlainTextDocumentLayout_documentSize(const QPlainTextDocumentLayout* self);
QRectF* QPlainTextDocumentLayout_frameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1);
QRectF* QPlainTextDocumentLayout_blockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block);
void QPlainTextDocumentLayout_ensureBlockLayout(const QPlainTextDocumentLayout* self, QTextBlock* block);
void QPlainTextDocumentLayout_setCursorWidth(QPlainTextDocumentLayout* self, int width);
int QPlainTextDocumentLayout_cursorWidth(const QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_requestUpdate(QPlainTextDocumentLayout* self);
void QPlainTextDocumentLayout_documentChanged(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded);
struct miqt_string QPlainTextDocumentLayout_tr2(const char* s, const char* c);
struct miqt_string QPlainTextDocumentLayout_tr3(const char* s, const char* c, int n);
QMetaObject* QPlainTextDocumentLayout_virtualbase_metaObject(const void* self);
void* QPlainTextDocumentLayout_virtualbase_metacast(void* self, const char* param1);
int QPlainTextDocumentLayout_virtualbase_metacall(void* self, int param1, int param2, void** param3);
void QPlainTextDocumentLayout_virtualbase_draw(void* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2);
int QPlainTextDocumentLayout_virtualbase_hitTest(const void* self, QPointF* param1, int param2);
int QPlainTextDocumentLayout_virtualbase_pageCount(const void* self);
QSizeF* QPlainTextDocumentLayout_virtualbase_documentSize(const void* self);
QRectF* QPlainTextDocumentLayout_virtualbase_frameBoundingRect(const void* self, QTextFrame* param1);
QRectF* QPlainTextDocumentLayout_virtualbase_blockBoundingRect(const void* self, QTextBlock* block);
void QPlainTextDocumentLayout_virtualbase_documentChanged(void* self, int from, int param2, int charsAdded);
void QPlainTextDocumentLayout_virtualbase_resizeInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QPlainTextDocumentLayout_virtualbase_positionInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);
void QPlainTextDocumentLayout_virtualbase_drawInlineObject(void* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format);
bool QPlainTextDocumentLayout_virtualbase_event(void* self, QEvent* event);
bool QPlainTextDocumentLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
void QPlainTextDocumentLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);
void QPlainTextDocumentLayout_virtualbase_childEvent(void* self, QChildEvent* event);
void QPlainTextDocumentLayout_virtualbase_customEvent(void* self, QEvent* event);
void QPlainTextDocumentLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QPlainTextDocumentLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
int QPlainTextDocumentLayout_protectedbase_formatIndex(bool* _dynamic_cast_ok, void* self, int pos);
QTextCharFormat* QPlainTextDocumentLayout_protectedbase_format(bool* _dynamic_cast_ok, void* self, int pos);
QObject* QPlainTextDocumentLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPlainTextDocumentLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPlainTextDocumentLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPlainTextDocumentLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
const QMetaObject* QPlainTextDocumentLayout_staticMetaObject();
void QPlainTextDocumentLayout_delete(QPlainTextDocumentLayout* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
