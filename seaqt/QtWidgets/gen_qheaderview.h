#pragma once
#ifndef SEAQT_QTWIDGETS_GEN_QHEADERVIEW_H
#define SEAQT_QTWIDGETS_GEN_QHEADERVIEW_H

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
class QStyleOptionHeader;
class QStyleOptionViewItem;
class QTabletEvent;
class QTimerEvent;
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
typedef struct QStyleOptionHeader QStyleOptionHeader;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

struct QHeaderView_VTable {
	void (*destructor)(struct QHeaderView_VTable* vtbl, QHeaderView* self);
	QMetaObject* (*metaObject)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	void* (*metacast)(struct QHeaderView_VTable* vtbl, QHeaderView* self, const char* param1);
	int (*metacall)(struct QHeaderView_VTable* vtbl, QHeaderView* self, int param1, int param2, void** param3);
	void (*setModel)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QAbstractItemModel* model);
	QSize* (*sizeHint)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	void (*setVisible)(struct QHeaderView_VTable* vtbl, QHeaderView* self, bool v);
	void (*doItemsLayout)(struct QHeaderView_VTable* vtbl, QHeaderView* self);
	void (*reset)(struct QHeaderView_VTable* vtbl, QHeaderView* self);
	void (*currentChanged)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QModelIndex* current, QModelIndex* old);
	bool (*event)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QEvent* e);
	void (*paintEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QPaintEvent* e);
	void (*mousePressEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QMouseEvent* e);
	void (*mouseMoveEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QMouseEvent* e);
	void (*mouseReleaseEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QMouseEvent* e);
	void (*mouseDoubleClickEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QMouseEvent* e);
	bool (*viewportEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QEvent* e);
	void (*paintSection)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex);
	QSize* (*sectionSizeFromContents)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, int logicalIndex);
	int (*horizontalOffset)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	int (*verticalOffset)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	void (*updateGeometries)(struct QHeaderView_VTable* vtbl, QHeaderView* self);
	void (*scrollContentsBy)(struct QHeaderView_VTable* vtbl, QHeaderView* self, int dx, int dy);
	void (*dataChanged)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
	void (*rowsInserted)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QModelIndex* parent, int start, int end);
	QRect* (*visualRect)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QModelIndex* index);
	void (*scrollTo)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QModelIndex* index, int hint);
	QModelIndex* (*indexAt)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QPoint* p);
	bool (*isIndexHidden)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QModelIndex* index);
	QModelIndex* (*moveCursor)(struct QHeaderView_VTable* vtbl, QHeaderView* self, int param1, int param2);
	void (*setSelection)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QRect* rect, int flags);
	QRegion* (*visualRegionForSelection)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QItemSelection* selection);
	void (*initStyleOptionForIndex)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
	void (*initStyleOption)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QStyleOptionHeader* option);
	void (*setSelectionModel)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QItemSelectionModel* selectionModel);
	void (*keyboardSearch)(struct QHeaderView_VTable* vtbl, QHeaderView* self, struct miqt_string search);
	int (*sizeHintForRow)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, int row);
	int (*sizeHintForColumn)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, int column);
	QAbstractItemDelegate* (*itemDelegateForIndex)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QModelIndex* index);
	QVariant* (*inputMethodQuery)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, int query);
	void (*setRootIndex)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QModelIndex* index);
	void (*selectAll)(struct QHeaderView_VTable* vtbl, QHeaderView* self);
	void (*rowsAboutToBeRemoved)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QModelIndex* parent, int start, int end);
	void (*selectionChanged)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QItemSelection* selected, QItemSelection* deselected);
	void (*updateEditorData)(struct QHeaderView_VTable* vtbl, QHeaderView* self);
	void (*updateEditorGeometries)(struct QHeaderView_VTable* vtbl, QHeaderView* self);
	void (*verticalScrollbarAction)(struct QHeaderView_VTable* vtbl, QHeaderView* self, int action);
	void (*horizontalScrollbarAction)(struct QHeaderView_VTable* vtbl, QHeaderView* self, int action);
	void (*verticalScrollbarValueChanged)(struct QHeaderView_VTable* vtbl, QHeaderView* self, int value);
	void (*horizontalScrollbarValueChanged)(struct QHeaderView_VTable* vtbl, QHeaderView* self, int value);
	void (*closeEditor)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QWidget* editor, int hint);
	void (*commitData)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QWidget* editor);
	void (*editorDestroyed)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QObject* editor);
	struct miqt_array /* of QModelIndex* */  (*selectedIndexes)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	bool (*edit2)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QModelIndex* index, int trigger, QEvent* event);
	int (*selectionCommand)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QModelIndex* index, QEvent* event);
	void (*startDrag)(struct QHeaderView_VTable* vtbl, QHeaderView* self, int supportedActions);
	void (*initViewItemOption)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QStyleOptionViewItem* option);
	bool (*focusNextPrevChild)(struct QHeaderView_VTable* vtbl, QHeaderView* self, bool next);
	void (*dragEnterEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QDragEnterEvent* event);
	void (*dragMoveEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QDragMoveEvent* event);
	void (*dragLeaveEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QDragLeaveEvent* event);
	void (*dropEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QDropEvent* event);
	void (*focusInEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QFocusEvent* event);
	void (*focusOutEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QFocusEvent* event);
	void (*keyPressEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QKeyEvent* event);
	void (*resizeEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QResizeEvent* event);
	void (*timerEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QTimerEvent* event);
	void (*inputMethodEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QInputMethodEvent* event);
	bool (*eventFilter)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QObject* object, QEvent* event);
	QSize* (*viewportSizeHint)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	QSize* (*minimumSizeHint)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	void (*setupViewport)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QWidget* viewport);
	void (*wheelEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QWheelEvent* param1);
	void (*contextMenuEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QContextMenuEvent* param1);
	void (*changeEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QEvent* param1);
	int (*devType)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	int (*heightForWidth)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, int param1);
	bool (*hasHeightForWidth)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	QPaintEngine* (*paintEngine)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	void (*keyReleaseEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QKeyEvent* event);
	void (*enterEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QEnterEvent* event);
	void (*leaveEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QEvent* event);
	void (*moveEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QMoveEvent* event);
	void (*closeEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QCloseEvent* event);
	void (*tabletEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QTabletEvent* event);
	void (*actionEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QActionEvent* event);
	void (*showEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QShowEvent* event);
	void (*hideEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QHideEvent* event);
	bool (*nativeEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, struct miqt_string eventType, void* message, intptr_t* result);
	int (*metric)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, int param1);
	void (*initPainter)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QPainter* painter);
	QPaintDevice* (*redirected)(struct QHeaderView_VTable* vtbl, const QHeaderView* self, QPoint* offset);
	QPainter* (*sharedPainter)(struct QHeaderView_VTable* vtbl, const QHeaderView* self);
	void (*childEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QChildEvent* event);
	void (*customEvent)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QEvent* event);
	void (*connectNotify)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QHeaderView_VTable* vtbl, QHeaderView* self, QMetaMethod* signal);
};
QHeaderView* QHeaderView_new(struct QHeaderView_VTable* vtbl, int orientation);
QHeaderView* QHeaderView_new2(struct QHeaderView_VTable* vtbl, int orientation, QWidget* parent);
void QHeaderView_virtbase(QHeaderView* src, QAbstractItemView** outptr_QAbstractItemView);
QMetaObject* QHeaderView_metaObject(const QHeaderView* self);
void* QHeaderView_metacast(QHeaderView* self, const char* param1);
int QHeaderView_metacall(QHeaderView* self, int param1, int param2, void** param3);
struct miqt_string QHeaderView_tr(const char* s);
void QHeaderView_setModel(QHeaderView* self, QAbstractItemModel* model);
int QHeaderView_orientation(const QHeaderView* self);
int QHeaderView_offset(const QHeaderView* self);
int QHeaderView_length(const QHeaderView* self);
QSize* QHeaderView_sizeHint(const QHeaderView* self);
void QHeaderView_setVisible(QHeaderView* self, bool v);
int QHeaderView_sectionSizeHint(const QHeaderView* self, int logicalIndex);
int QHeaderView_visualIndexAt(const QHeaderView* self, int position);
int QHeaderView_logicalIndexAt(const QHeaderView* self, int position);
int QHeaderView_logicalIndexAt2(const QHeaderView* self, int x, int y);
int QHeaderView_logicalIndexAtWithPos(const QHeaderView* self, QPoint* pos);
int QHeaderView_sectionSize(const QHeaderView* self, int logicalIndex);
int QHeaderView_sectionPosition(const QHeaderView* self, int logicalIndex);
int QHeaderView_sectionViewportPosition(const QHeaderView* self, int logicalIndex);
void QHeaderView_moveSection(QHeaderView* self, int from, int to);
void QHeaderView_swapSections(QHeaderView* self, int first, int second);
void QHeaderView_resizeSection(QHeaderView* self, int logicalIndex, int size);
void QHeaderView_resizeSections(QHeaderView* self, int mode);
bool QHeaderView_isSectionHidden(const QHeaderView* self, int logicalIndex);
void QHeaderView_setSectionHidden(QHeaderView* self, int logicalIndex, bool hide);
int QHeaderView_hiddenSectionCount(const QHeaderView* self);
void QHeaderView_hideSection(QHeaderView* self, int logicalIndex);
void QHeaderView_showSection(QHeaderView* self, int logicalIndex);
int QHeaderView_count(const QHeaderView* self);
int QHeaderView_visualIndex(const QHeaderView* self, int logicalIndex);
int QHeaderView_logicalIndex(const QHeaderView* self, int visualIndex);
void QHeaderView_setSectionsMovable(QHeaderView* self, bool movable);
bool QHeaderView_sectionsMovable(const QHeaderView* self);
void QHeaderView_setFirstSectionMovable(QHeaderView* self, bool movable);
bool QHeaderView_isFirstSectionMovable(const QHeaderView* self);
void QHeaderView_setSectionsClickable(QHeaderView* self, bool clickable);
bool QHeaderView_sectionsClickable(const QHeaderView* self);
void QHeaderView_setHighlightSections(QHeaderView* self, bool highlight);
bool QHeaderView_highlightSections(const QHeaderView* self);
int QHeaderView_sectionResizeMode(const QHeaderView* self, int logicalIndex);
void QHeaderView_setSectionResizeMode(QHeaderView* self, int mode);
void QHeaderView_setSectionResizeMode2(QHeaderView* self, int logicalIndex, int mode);
void QHeaderView_setResizeContentsPrecision(QHeaderView* self, int precision);
int QHeaderView_resizeContentsPrecision(const QHeaderView* self);
int QHeaderView_stretchSectionCount(const QHeaderView* self);
void QHeaderView_setSortIndicatorShown(QHeaderView* self, bool show);
bool QHeaderView_isSortIndicatorShown(const QHeaderView* self);
void QHeaderView_setSortIndicator(QHeaderView* self, int logicalIndex, int order);
int QHeaderView_sortIndicatorSection(const QHeaderView* self);
int QHeaderView_sortIndicatorOrder(const QHeaderView* self);
void QHeaderView_setSortIndicatorClearable(QHeaderView* self, bool clearable);
bool QHeaderView_isSortIndicatorClearable(const QHeaderView* self);
bool QHeaderView_stretchLastSection(const QHeaderView* self);
void QHeaderView_setStretchLastSection(QHeaderView* self, bool stretch);
bool QHeaderView_cascadingSectionResizes(const QHeaderView* self);
void QHeaderView_setCascadingSectionResizes(QHeaderView* self, bool enable);
int QHeaderView_defaultSectionSize(const QHeaderView* self);
void QHeaderView_setDefaultSectionSize(QHeaderView* self, int size);
void QHeaderView_resetDefaultSectionSize(QHeaderView* self);
int QHeaderView_minimumSectionSize(const QHeaderView* self);
void QHeaderView_setMinimumSectionSize(QHeaderView* self, int size);
int QHeaderView_maximumSectionSize(const QHeaderView* self);
void QHeaderView_setMaximumSectionSize(QHeaderView* self, int size);
int QHeaderView_defaultAlignment(const QHeaderView* self);
void QHeaderView_setDefaultAlignment(QHeaderView* self, int alignment);
void QHeaderView_doItemsLayout(QHeaderView* self);
bool QHeaderView_sectionsMoved(const QHeaderView* self);
bool QHeaderView_sectionsHidden(const QHeaderView* self);
struct miqt_string QHeaderView_saveState(const QHeaderView* self);
bool QHeaderView_restoreState(QHeaderView* self, struct miqt_string state);
void QHeaderView_reset(QHeaderView* self);
void QHeaderView_setOffset(QHeaderView* self, int offset);
void QHeaderView_setOffsetToSectionPosition(QHeaderView* self, int visualIndex);
void QHeaderView_setOffsetToLastSection(QHeaderView* self);
void QHeaderView_headerDataChanged(QHeaderView* self, int orientation, int logicalFirst, int logicalLast);
void QHeaderView_sectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex);
void QHeaderView_connect_sectionMoved(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, int, int, int), void (*release)(intptr_t));
void QHeaderView_sectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize);
void QHeaderView_connect_sectionResized(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, int, int, int), void (*release)(intptr_t));
void QHeaderView_sectionPressed(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_sectionPressed(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t));
void QHeaderView_sectionClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_sectionClicked(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t));
void QHeaderView_sectionEntered(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_sectionEntered(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t));
void QHeaderView_sectionDoubleClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_sectionDoubleClicked(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t));
void QHeaderView_sectionCountChanged(QHeaderView* self, int oldCount, int newCount);
void QHeaderView_connect_sectionCountChanged(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, int, int), void (*release)(intptr_t));
void QHeaderView_sectionHandleDoubleClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_sectionHandleDoubleClicked(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t));
void QHeaderView_geometriesChanged(QHeaderView* self);
void QHeaderView_connect_geometriesChanged(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
void QHeaderView_sortIndicatorChanged(QHeaderView* self, int logicalIndex, int order);
void QHeaderView_connect_sortIndicatorChanged(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, int, int), void (*release)(intptr_t));
void QHeaderView_sortIndicatorClearableChanged(QHeaderView* self, bool clearable);
void QHeaderView_connect_sortIndicatorClearableChanged(QHeaderView* self, intptr_t slot, void (*callback)(intptr_t, bool), void (*release)(intptr_t));
void QHeaderView_currentChanged(QHeaderView* self, QModelIndex* current, QModelIndex* old);
bool QHeaderView_event(QHeaderView* self, QEvent* e);
void QHeaderView_paintEvent(QHeaderView* self, QPaintEvent* e);
void QHeaderView_mousePressEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_mouseMoveEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_mouseReleaseEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_mouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e);
bool QHeaderView_viewportEvent(QHeaderView* self, QEvent* e);
void QHeaderView_paintSection(const QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex);
QSize* QHeaderView_sectionSizeFromContents(const QHeaderView* self, int logicalIndex);
int QHeaderView_horizontalOffset(const QHeaderView* self);
int QHeaderView_verticalOffset(const QHeaderView* self);
void QHeaderView_updateGeometries(QHeaderView* self);
void QHeaderView_scrollContentsBy(QHeaderView* self, int dx, int dy);
void QHeaderView_dataChanged(QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QHeaderView_rowsInserted(QHeaderView* self, QModelIndex* parent, int start, int end);
QRect* QHeaderView_visualRect(const QHeaderView* self, QModelIndex* index);
void QHeaderView_scrollTo(QHeaderView* self, QModelIndex* index, int hint);
QModelIndex* QHeaderView_indexAt(const QHeaderView* self, QPoint* p);
bool QHeaderView_isIndexHidden(const QHeaderView* self, QModelIndex* index);
QModelIndex* QHeaderView_moveCursor(QHeaderView* self, int param1, int param2);
void QHeaderView_setSelection(QHeaderView* self, QRect* rect, int flags);
QRegion* QHeaderView_visualRegionForSelection(const QHeaderView* self, QItemSelection* selection);
void QHeaderView_initStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
void QHeaderView_initStyleOption(const QHeaderView* self, QStyleOptionHeader* option);
struct miqt_string QHeaderView_tr2(const char* s, const char* c);
struct miqt_string QHeaderView_tr3(const char* s, const char* c, int n);
QMetaObject* QHeaderView_virtualbase_metaObject(const void* self);
void* QHeaderView_virtualbase_metacast(void* self, const char* param1);
int QHeaderView_virtualbase_metacall(void* self, int param1, int param2, void** param3);
void QHeaderView_virtualbase_setModel(void* self, QAbstractItemModel* model);
QSize* QHeaderView_virtualbase_sizeHint(const void* self);
void QHeaderView_virtualbase_setVisible(void* self, bool v);
void QHeaderView_virtualbase_doItemsLayout(void* self);
void QHeaderView_virtualbase_reset(void* self);
void QHeaderView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* old);
bool QHeaderView_virtualbase_event(void* self, QEvent* e);
void QHeaderView_virtualbase_paintEvent(void* self, QPaintEvent* e);
void QHeaderView_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
void QHeaderView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);
void QHeaderView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
void QHeaderView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e);
bool QHeaderView_virtualbase_viewportEvent(void* self, QEvent* e);
void QHeaderView_virtualbase_paintSection(const void* self, QPainter* painter, QRect* rect, int logicalIndex);
QSize* QHeaderView_virtualbase_sectionSizeFromContents(const void* self, int logicalIndex);
int QHeaderView_virtualbase_horizontalOffset(const void* self);
int QHeaderView_virtualbase_verticalOffset(const void* self);
void QHeaderView_virtualbase_updateGeometries(void* self);
void QHeaderView_virtualbase_scrollContentsBy(void* self, int dx, int dy);
void QHeaderView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QHeaderView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);
QRect* QHeaderView_virtualbase_visualRect(const void* self, QModelIndex* index);
void QHeaderView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);
QModelIndex* QHeaderView_virtualbase_indexAt(const void* self, QPoint* p);
bool QHeaderView_virtualbase_isIndexHidden(const void* self, QModelIndex* index);
QModelIndex* QHeaderView_virtualbase_moveCursor(void* self, int param1, int param2);
void QHeaderView_virtualbase_setSelection(void* self, QRect* rect, int flags);
QRegion* QHeaderView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);
void QHeaderView_virtualbase_initStyleOptionForIndex(const void* self, QStyleOptionHeader* option, int logicalIndex);
void QHeaderView_virtualbase_initStyleOption(const void* self, QStyleOptionHeader* option);
void QHeaderView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);
void QHeaderView_virtualbase_keyboardSearch(void* self, struct miqt_string search);
int QHeaderView_virtualbase_sizeHintForRow(const void* self, int row);
int QHeaderView_virtualbase_sizeHintForColumn(const void* self, int column);
QAbstractItemDelegate* QHeaderView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index);
QVariant* QHeaderView_virtualbase_inputMethodQuery(const void* self, int query);
void QHeaderView_virtualbase_setRootIndex(void* self, QModelIndex* index);
void QHeaderView_virtualbase_selectAll(void* self);
void QHeaderView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
void QHeaderView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
void QHeaderView_virtualbase_updateEditorData(void* self);
void QHeaderView_virtualbase_updateEditorGeometries(void* self);
void QHeaderView_virtualbase_verticalScrollbarAction(void* self, int action);
void QHeaderView_virtualbase_horizontalScrollbarAction(void* self, int action);
void QHeaderView_virtualbase_verticalScrollbarValueChanged(void* self, int value);
void QHeaderView_virtualbase_horizontalScrollbarValueChanged(void* self, int value);
void QHeaderView_virtualbase_closeEditor(void* self, QWidget* editor, int hint);
void QHeaderView_virtualbase_commitData(void* self, QWidget* editor);
void QHeaderView_virtualbase_editorDestroyed(void* self, QObject* editor);
struct miqt_array /* of QModelIndex* */  QHeaderView_virtualbase_selectedIndexes(const void* self);
bool QHeaderView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);
int QHeaderView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);
void QHeaderView_virtualbase_startDrag(void* self, int supportedActions);
void QHeaderView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option);
bool QHeaderView_virtualbase_focusNextPrevChild(void* self, bool next);
void QHeaderView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
void QHeaderView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
void QHeaderView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
void QHeaderView_virtualbase_dropEvent(void* self, QDropEvent* event);
void QHeaderView_virtualbase_focusInEvent(void* self, QFocusEvent* event);
void QHeaderView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
void QHeaderView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
void QHeaderView_virtualbase_resizeEvent(void* self, QResizeEvent* event);
void QHeaderView_virtualbase_timerEvent(void* self, QTimerEvent* event);
void QHeaderView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QHeaderView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
QSize* QHeaderView_virtualbase_viewportSizeHint(const void* self);
QSize* QHeaderView_virtualbase_minimumSizeHint(const void* self);
void QHeaderView_virtualbase_setupViewport(void* self, QWidget* viewport);
void QHeaderView_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
void QHeaderView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
void QHeaderView_virtualbase_changeEvent(void* self, QEvent* param1);
int QHeaderView_virtualbase_devType(const void* self);
int QHeaderView_virtualbase_heightForWidth(const void* self, int param1);
bool QHeaderView_virtualbase_hasHeightForWidth(const void* self);
QPaintEngine* QHeaderView_virtualbase_paintEngine(const void* self);
void QHeaderView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
void QHeaderView_virtualbase_enterEvent(void* self, QEnterEvent* event);
void QHeaderView_virtualbase_leaveEvent(void* self, QEvent* event);
void QHeaderView_virtualbase_moveEvent(void* self, QMoveEvent* event);
void QHeaderView_virtualbase_closeEvent(void* self, QCloseEvent* event);
void QHeaderView_virtualbase_tabletEvent(void* self, QTabletEvent* event);
void QHeaderView_virtualbase_actionEvent(void* self, QActionEvent* event);
void QHeaderView_virtualbase_showEvent(void* self, QShowEvent* event);
void QHeaderView_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QHeaderView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
int QHeaderView_virtualbase_metric(const void* self, int param1);
void QHeaderView_virtualbase_initPainter(const void* self, QPainter* painter);
QPaintDevice* QHeaderView_virtualbase_redirected(const void* self, QPoint* offset);
QPainter* QHeaderView_virtualbase_sharedPainter(const void* self);
void QHeaderView_virtualbase_childEvent(void* self, QChildEvent* event);
void QHeaderView_virtualbase_customEvent(void* self, QEvent* event);
void QHeaderView_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QHeaderView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QHeaderView_protectedbase_updateSection(void* self, int logicalIndex);
void QHeaderView_protectedbase_resizeSections2(void* self);
void QHeaderView_protectedbase_sectionsInserted(void* self, QModelIndex* parent, int logicalFirst, int logicalLast);
void QHeaderView_protectedbase_sectionsAboutToBeRemoved(void* self, QModelIndex* parent, int logicalFirst, int logicalLast);
void QHeaderView_protectedbase_initialize(void* self);
void QHeaderView_protectedbase_initializeSections(void* self);
void QHeaderView_protectedbase_initializeSections2(void* self, int start, int end);
int QHeaderView_protectedbase_state(const void* self);
void QHeaderView_protectedbase_setState(void* self, int state);
void QHeaderView_protectedbase_scheduleDelayedItemsLayout(void* self);
void QHeaderView_protectedbase_executeDelayedItemsLayout(void* self);
void QHeaderView_protectedbase_setDirtyRegion(void* self, QRegion* region);
void QHeaderView_protectedbase_scrollDirtyRegion(void* self, int dx, int dy);
QPoint* QHeaderView_protectedbase_dirtyRegionOffset(const void* self);
void QHeaderView_protectedbase_startAutoScroll(void* self);
void QHeaderView_protectedbase_stopAutoScroll(void* self);
void QHeaderView_protectedbase_doAutoScroll(void* self);
int QHeaderView_protectedbase_dropIndicatorPosition(const void* self);
void QHeaderView_protectedbase_setViewportMargins(void* self, int left, int top, int right, int bottom);
QMargins* QHeaderView_protectedbase_viewportMargins(const void* self);
void QHeaderView_protectedbase_drawFrame(void* self, QPainter* param1);
void QHeaderView_protectedbase_updateMicroFocus(void* self);
void QHeaderView_protectedbase_create(void* self);
void QHeaderView_protectedbase_destroy(void* self);
bool QHeaderView_protectedbase_focusNextChild(void* self);
bool QHeaderView_protectedbase_focusPreviousChild(void* self);
QObject* QHeaderView_protectedbase_sender(const void* self);
int QHeaderView_protectedbase_senderSignalIndex(const void* self);
int QHeaderView_protectedbase_receivers(const void* self, const char* signal);
bool QHeaderView_protectedbase_isSignalConnected(const void* self, QMetaMethod* signal);
const QMetaObject* QHeaderView_staticMetaObject();
void QHeaderView_delete(QHeaderView* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
