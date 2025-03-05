#pragma once
#ifndef SEAQT_QTWIDGETS_GEN_QTREEVIEW_H
#define SEAQT_QTWIDGETS_GEN_QTREEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractItemModel;
class QAbstractItemView;
class QAbstractScrollArea;
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
class QHeaderView;
class QHideEvent;
class QInputMethodEvent;
class QItemSelection;
class QItemSelectionModel;
class QKeyEvent;
class QMargins;
class QMetaMethod;
class QMetaObject;
class QModelIndex;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QRect;
class QRegion;
class QResizeEvent;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QStyleOptionViewItem;
class QTabletEvent;
class QTimerEvent;
class QTreeView;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
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
typedef struct QHeaderView QHeaderView;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTreeView QTreeView;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QTreeView* QTreeView_new(QWidget* parent);
QTreeView* QTreeView_new2();
void QTreeView_virtbase(QTreeView* src, QAbstractItemView** outptr_QAbstractItemView);
QMetaObject* QTreeView_metaObject(const QTreeView* self);
void* QTreeView_metacast(QTreeView* self, const char* param1);
int QTreeView_metacall(QTreeView* self, int param1, int param2, void** param3);
struct miqt_string QTreeView_tr(const char* s);
void QTreeView_setModel(QTreeView* self, QAbstractItemModel* model);
void QTreeView_setRootIndex(QTreeView* self, QModelIndex* index);
void QTreeView_setSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel);
QHeaderView* QTreeView_header(const QTreeView* self);
void QTreeView_setHeader(QTreeView* self, QHeaderView* header);
int QTreeView_autoExpandDelay(const QTreeView* self);
void QTreeView_setAutoExpandDelay(QTreeView* self, int delay);
int QTreeView_indentation(const QTreeView* self);
void QTreeView_setIndentation(QTreeView* self, int i);
void QTreeView_resetIndentation(QTreeView* self);
bool QTreeView_rootIsDecorated(const QTreeView* self);
void QTreeView_setRootIsDecorated(QTreeView* self, bool show);
bool QTreeView_uniformRowHeights(const QTreeView* self);
void QTreeView_setUniformRowHeights(QTreeView* self, bool uniform);
bool QTreeView_itemsExpandable(const QTreeView* self);
void QTreeView_setItemsExpandable(QTreeView* self, bool enable);
bool QTreeView_expandsOnDoubleClick(const QTreeView* self);
void QTreeView_setExpandsOnDoubleClick(QTreeView* self, bool enable);
int QTreeView_columnViewportPosition(const QTreeView* self, int column);
int QTreeView_columnWidth(const QTreeView* self, int column);
void QTreeView_setColumnWidth(QTreeView* self, int column, int width);
int QTreeView_columnAt(const QTreeView* self, int x);
bool QTreeView_isColumnHidden(const QTreeView* self, int column);
void QTreeView_setColumnHidden(QTreeView* self, int column, bool hide);
bool QTreeView_isHeaderHidden(const QTreeView* self);
void QTreeView_setHeaderHidden(QTreeView* self, bool hide);
bool QTreeView_isRowHidden(const QTreeView* self, int row, QModelIndex* parent);
void QTreeView_setRowHidden(QTreeView* self, int row, QModelIndex* parent, bool hide);
bool QTreeView_isFirstColumnSpanned(const QTreeView* self, int row, QModelIndex* parent);
void QTreeView_setFirstColumnSpanned(QTreeView* self, int row, QModelIndex* parent, bool span);
bool QTreeView_isExpanded(const QTreeView* self, QModelIndex* index);
void QTreeView_setExpanded(QTreeView* self, QModelIndex* index, bool expand);
void QTreeView_setSortingEnabled(QTreeView* self, bool enable);
bool QTreeView_isSortingEnabled(const QTreeView* self);
void QTreeView_setAnimated(QTreeView* self, bool enable);
bool QTreeView_isAnimated(const QTreeView* self);
void QTreeView_setAllColumnsShowFocus(QTreeView* self, bool enable);
bool QTreeView_allColumnsShowFocus(const QTreeView* self);
void QTreeView_setWordWrap(QTreeView* self, bool on);
bool QTreeView_wordWrap(const QTreeView* self);
void QTreeView_setTreePosition(QTreeView* self, int logicalIndex);
int QTreeView_treePosition(const QTreeView* self);
void QTreeView_keyboardSearch(QTreeView* self, struct miqt_string search);
QRect* QTreeView_visualRect(const QTreeView* self, QModelIndex* index);
void QTreeView_scrollTo(QTreeView* self, QModelIndex* index, int hint);
QModelIndex* QTreeView_indexAt(const QTreeView* self, QPoint* p);
QModelIndex* QTreeView_indexAbove(const QTreeView* self, QModelIndex* index);
QModelIndex* QTreeView_indexBelow(const QTreeView* self, QModelIndex* index);
void QTreeView_doItemsLayout(QTreeView* self);
void QTreeView_reset(QTreeView* self);
void QTreeView_dataChanged(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QTreeView_selectAll(QTreeView* self);
void QTreeView_expanded(QTreeView* self, QModelIndex* index);
void QTreeView_connect_expanded(QTreeView* self, intptr_t slot);
void QTreeView_collapsed(QTreeView* self, QModelIndex* index);
void QTreeView_connect_collapsed(QTreeView* self, intptr_t slot);
void QTreeView_hideColumn(QTreeView* self, int column);
void QTreeView_showColumn(QTreeView* self, int column);
void QTreeView_expand(QTreeView* self, QModelIndex* index);
void QTreeView_collapse(QTreeView* self, QModelIndex* index);
void QTreeView_resizeColumnToContents(QTreeView* self, int column);
void QTreeView_sortByColumn(QTreeView* self, int column, int order);
void QTreeView_expandAll(QTreeView* self);
void QTreeView_expandRecursively(QTreeView* self, QModelIndex* index);
void QTreeView_collapseAll(QTreeView* self);
void QTreeView_expandToDepth(QTreeView* self, int depth);
void QTreeView_verticalScrollbarValueChanged(QTreeView* self, int value);
void QTreeView_scrollContentsBy(QTreeView* self, int dx, int dy);
void QTreeView_rowsInserted(QTreeView* self, QModelIndex* parent, int start, int end);
void QTreeView_rowsAboutToBeRemoved(QTreeView* self, QModelIndex* parent, int start, int end);
QModelIndex* QTreeView_moveCursor(QTreeView* self, int cursorAction, int modifiers);
int QTreeView_horizontalOffset(const QTreeView* self);
int QTreeView_verticalOffset(const QTreeView* self);
void QTreeView_setSelection(QTreeView* self, QRect* rect, int command);
QRegion* QTreeView_visualRegionForSelection(const QTreeView* self, QItemSelection* selection);
struct miqt_array /* of QModelIndex* */  QTreeView_selectedIndexes(const QTreeView* self);
void QTreeView_changeEvent(QTreeView* self, QEvent* event);
void QTreeView_timerEvent(QTreeView* self, QTimerEvent* event);
void QTreeView_paintEvent(QTreeView* self, QPaintEvent* event);
void QTreeView_drawRow(const QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index);
void QTreeView_drawBranches(const QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index);
void QTreeView_mousePressEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_mouseReleaseEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_mouseDoubleClickEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_mouseMoveEvent(QTreeView* self, QMouseEvent* event);
void QTreeView_keyPressEvent(QTreeView* self, QKeyEvent* event);
void QTreeView_dragMoveEvent(QTreeView* self, QDragMoveEvent* event);
bool QTreeView_viewportEvent(QTreeView* self, QEvent* event);
void QTreeView_updateGeometries(QTreeView* self);
QSize* QTreeView_viewportSizeHint(const QTreeView* self);
int QTreeView_sizeHintForColumn(const QTreeView* self, int column);
void QTreeView_horizontalScrollbarAction(QTreeView* self, int action);
bool QTreeView_isIndexHidden(const QTreeView* self, QModelIndex* index);
void QTreeView_selectionChanged(QTreeView* self, QItemSelection* selected, QItemSelection* deselected);
void QTreeView_currentChanged(QTreeView* self, QModelIndex* current, QModelIndex* previous);
struct miqt_string QTreeView_tr2(const char* s, const char* c);
struct miqt_string QTreeView_tr3(const char* s, const char* c, int n);
void QTreeView_expandRecursively2(QTreeView* self, QModelIndex* index, int depth);
bool QTreeView_override_virtual_metaObject(void* self, intptr_t slot);
QMetaObject* QTreeView_virtualbase_metaObject(const void* self);
bool QTreeView_override_virtual_metacast(void* self, intptr_t slot);
void* QTreeView_virtualbase_metacast(void* self, const char* param1);
bool QTreeView_override_virtual_metacall(void* self, intptr_t slot);
int QTreeView_virtualbase_metacall(void* self, int param1, int param2, void** param3);
bool QTreeView_override_virtual_setModel(void* self, intptr_t slot);
void QTreeView_virtualbase_setModel(void* self, QAbstractItemModel* model);
bool QTreeView_override_virtual_setRootIndex(void* self, intptr_t slot);
void QTreeView_virtualbase_setRootIndex(void* self, QModelIndex* index);
bool QTreeView_override_virtual_setSelectionModel(void* self, intptr_t slot);
void QTreeView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);
bool QTreeView_override_virtual_keyboardSearch(void* self, intptr_t slot);
void QTreeView_virtualbase_keyboardSearch(void* self, struct miqt_string search);
bool QTreeView_override_virtual_visualRect(void* self, intptr_t slot);
QRect* QTreeView_virtualbase_visualRect(const void* self, QModelIndex* index);
bool QTreeView_override_virtual_scrollTo(void* self, intptr_t slot);
void QTreeView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);
bool QTreeView_override_virtual_indexAt(void* self, intptr_t slot);
QModelIndex* QTreeView_virtualbase_indexAt(const void* self, QPoint* p);
bool QTreeView_override_virtual_doItemsLayout(void* self, intptr_t slot);
void QTreeView_virtualbase_doItemsLayout(void* self);
bool QTreeView_override_virtual_reset(void* self, intptr_t slot);
void QTreeView_virtualbase_reset(void* self);
bool QTreeView_override_virtual_dataChanged(void* self, intptr_t slot);
void QTreeView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
bool QTreeView_override_virtual_selectAll(void* self, intptr_t slot);
void QTreeView_virtualbase_selectAll(void* self);
bool QTreeView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot);
void QTreeView_virtualbase_verticalScrollbarValueChanged(void* self, int value);
bool QTreeView_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void QTreeView_virtualbase_scrollContentsBy(void* self, int dx, int dy);
bool QTreeView_override_virtual_rowsInserted(void* self, intptr_t slot);
void QTreeView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);
bool QTreeView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot);
void QTreeView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
bool QTreeView_override_virtual_moveCursor(void* self, intptr_t slot);
QModelIndex* QTreeView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers);
bool QTreeView_override_virtual_horizontalOffset(void* self, intptr_t slot);
int QTreeView_virtualbase_horizontalOffset(const void* self);
bool QTreeView_override_virtual_verticalOffset(void* self, intptr_t slot);
int QTreeView_virtualbase_verticalOffset(const void* self);
bool QTreeView_override_virtual_setSelection(void* self, intptr_t slot);
void QTreeView_virtualbase_setSelection(void* self, QRect* rect, int command);
bool QTreeView_override_virtual_visualRegionForSelection(void* self, intptr_t slot);
QRegion* QTreeView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);
bool QTreeView_override_virtual_selectedIndexes(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QTreeView_virtualbase_selectedIndexes(const void* self);
bool QTreeView_override_virtual_changeEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_changeEvent(void* self, QEvent* event);
bool QTreeView_override_virtual_timerEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTreeView_override_virtual_paintEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QTreeView_override_virtual_drawRow(void* self, intptr_t slot);
void QTreeView_virtualbase_drawRow(const void* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index);
bool QTreeView_override_virtual_drawBranches(void* self, intptr_t slot);
void QTreeView_virtualbase_drawBranches(const void* self, QPainter* painter, QRect* rect, QModelIndex* index);
bool QTreeView_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QTreeView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QTreeView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QTreeView_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QTreeView_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QTreeView_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QTreeView_override_virtual_viewportEvent(void* self, intptr_t slot);
bool QTreeView_virtualbase_viewportEvent(void* self, QEvent* event);
bool QTreeView_override_virtual_updateGeometries(void* self, intptr_t slot);
void QTreeView_virtualbase_updateGeometries(void* self);
bool QTreeView_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* QTreeView_virtualbase_viewportSizeHint(const void* self);
bool QTreeView_override_virtual_sizeHintForColumn(void* self, intptr_t slot);
int QTreeView_virtualbase_sizeHintForColumn(const void* self, int column);
bool QTreeView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot);
void QTreeView_virtualbase_horizontalScrollbarAction(void* self, int action);
bool QTreeView_override_virtual_isIndexHidden(void* self, intptr_t slot);
bool QTreeView_virtualbase_isIndexHidden(const void* self, QModelIndex* index);
bool QTreeView_override_virtual_selectionChanged(void* self, intptr_t slot);
void QTreeView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
bool QTreeView_override_virtual_currentChanged(void* self, intptr_t slot);
void QTreeView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);
bool QTreeView_override_virtual_sizeHintForRow(void* self, intptr_t slot);
int QTreeView_virtualbase_sizeHintForRow(const void* self, int row);
bool QTreeView_override_virtual_itemDelegateForIndex(void* self, intptr_t slot);
QAbstractItemDelegate* QTreeView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index);
bool QTreeView_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QTreeView_virtualbase_inputMethodQuery(const void* self, int query);
bool QTreeView_override_virtual_updateEditorData(void* self, intptr_t slot);
void QTreeView_virtualbase_updateEditorData(void* self);
bool QTreeView_override_virtual_updateEditorGeometries(void* self, intptr_t slot);
void QTreeView_virtualbase_updateEditorGeometries(void* self);
bool QTreeView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot);
void QTreeView_virtualbase_verticalScrollbarAction(void* self, int action);
bool QTreeView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot);
void QTreeView_virtualbase_horizontalScrollbarValueChanged(void* self, int value);
bool QTreeView_override_virtual_closeEditor(void* self, intptr_t slot);
void QTreeView_virtualbase_closeEditor(void* self, QWidget* editor, int hint);
bool QTreeView_override_virtual_commitData(void* self, intptr_t slot);
void QTreeView_virtualbase_commitData(void* self, QWidget* editor);
bool QTreeView_override_virtual_editorDestroyed(void* self, intptr_t slot);
void QTreeView_virtualbase_editorDestroyed(void* self, QObject* editor);
bool QTreeView_override_virtual_edit2(void* self, intptr_t slot);
bool QTreeView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);
bool QTreeView_override_virtual_selectionCommand(void* self, intptr_t slot);
int QTreeView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);
bool QTreeView_override_virtual_startDrag(void* self, intptr_t slot);
void QTreeView_virtualbase_startDrag(void* self, int supportedActions);
bool QTreeView_override_virtual_initViewItemOption(void* self, intptr_t slot);
void QTreeView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option);
bool QTreeView_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QTreeView_virtualbase_focusNextPrevChild(void* self, bool next);
bool QTreeView_override_virtual_event(void* self, intptr_t slot);
bool QTreeView_virtualbase_event(void* self, QEvent* event);
bool QTreeView_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QTreeView_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QTreeView_override_virtual_dropEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QTreeView_override_virtual_focusInEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QTreeView_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QTreeView_override_virtual_resizeEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QTreeView_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QTreeView_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTreeView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
bool QTreeView_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QTreeView_virtualbase_minimumSizeHint(const void* self);
bool QTreeView_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QTreeView_virtualbase_sizeHint(const void* self);
bool QTreeView_override_virtual_setupViewport(void* self, intptr_t slot);
void QTreeView_virtualbase_setupViewport(void* self, QWidget* viewport);
bool QTreeView_override_virtual_wheelEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QTreeView_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
bool QTreeView_override_virtual_initStyleOption(void* self, intptr_t slot);
void QTreeView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool QTreeView_override_virtual_devType(void* self, intptr_t slot);
int QTreeView_virtualbase_devType(const void* self);
bool QTreeView_override_virtual_setVisible(void* self, intptr_t slot);
void QTreeView_virtualbase_setVisible(void* self, bool visible);
bool QTreeView_override_virtual_heightForWidth(void* self, intptr_t slot);
int QTreeView_virtualbase_heightForWidth(const void* self, int param1);
bool QTreeView_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QTreeView_virtualbase_hasHeightForWidth(const void* self);
bool QTreeView_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QTreeView_virtualbase_paintEngine(const void* self);
bool QTreeView_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QTreeView_override_virtual_enterEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QTreeView_override_virtual_leaveEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_leaveEvent(void* self, QEvent* event);
bool QTreeView_override_virtual_moveEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QTreeView_override_virtual_closeEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QTreeView_override_virtual_tabletEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QTreeView_override_virtual_actionEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QTreeView_override_virtual_showEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_showEvent(void* self, QShowEvent* event);
bool QTreeView_override_virtual_hideEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QTreeView_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QTreeView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QTreeView_override_virtual_metric(void* self, intptr_t slot);
int QTreeView_virtualbase_metric(const void* self, int param1);
bool QTreeView_override_virtual_initPainter(void* self, intptr_t slot);
void QTreeView_virtualbase_initPainter(const void* self, QPainter* painter);
bool QTreeView_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QTreeView_virtualbase_redirected(const void* self, QPoint* offset);
bool QTreeView_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QTreeView_virtualbase_sharedPainter(const void* self);
bool QTreeView_override_virtual_childEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTreeView_override_virtual_customEvent(void* self, intptr_t slot);
void QTreeView_virtualbase_customEvent(void* self, QEvent* event);
bool QTreeView_override_virtual_connectNotify(void* self, intptr_t slot);
void QTreeView_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTreeView_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTreeView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTreeView_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldSize, int newSize);
void QTreeView_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
void QTreeView_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self);
void QTreeView_protectedbase_reexpand(bool* _dynamic_cast_ok, void* self);
void QTreeView_protectedbase_rowsRemoved(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QTreeView_protectedbase_drawTree(bool* _dynamic_cast_ok, const void* self, QPainter* painter, QRegion* region);
int QTreeView_protectedbase_indexRowSizeHint(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
int QTreeView_protectedbase_rowHeight(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
int QTreeView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
void QTreeView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
void QTreeView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
void QTreeView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
void QTreeView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
void QTreeView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
QPoint* QTreeView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
void QTreeView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
void QTreeView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
void QTreeView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
int QTreeView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
void QTreeView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* QTreeView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void QTreeView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QTreeView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QTreeView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QTreeView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QTreeView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QTreeView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QTreeView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTreeView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTreeView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTreeView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
const QMetaObject* QTreeView_staticMetaObject();
void QTreeView_delete(QTreeView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
