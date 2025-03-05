#pragma once
#ifndef SEAQT_QTWIDGETS_GEN_QTABLEWIDGET_H
#define SEAQT_QTWIDGETS_GEN_QTABLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemView;
class QAbstractScrollArea;
class QActionEvent;
class QBrush;
class QChildEvent;
class QCloseEvent;
class QColor;
class QContextMenuEvent;
class QDataStream;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFont;
class QFrame;
class QHideEvent;
class QIcon;
class QInputMethodEvent;
class QItemSelection;
class QItemSelectionModel;
class QKeyEvent;
class QMargins;
class QMetaMethod;
class QMetaObject;
class QMimeData;
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
class QTableView;
class QTableWidget;
class QTableWidgetItem;
class QTableWidgetSelectionRange;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDataStream QDataStream;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
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
typedef struct QTableView QTableView;
typedef struct QTableWidget QTableWidget;
typedef struct QTableWidgetItem QTableWidgetItem;
typedef struct QTableWidgetSelectionRange QTableWidgetSelectionRange;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new();
QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(int top, int left, int bottom, int right);
QTableWidgetSelectionRange* QTableWidgetSelectionRange_new3(QTableWidgetSelectionRange* other);
void QTableWidgetSelectionRange_operatorAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other);
int QTableWidgetSelectionRange_topRow(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_bottomRow(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_leftColumn(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_rightColumn(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_rowCount(const QTableWidgetSelectionRange* self);
int QTableWidgetSelectionRange_columnCount(const QTableWidgetSelectionRange* self);
void QTableWidgetSelectionRange_delete(QTableWidgetSelectionRange* self);

struct QTableWidgetItem_VTable {
	void (*destructor)(struct QTableWidgetItem_VTable* vtbl, QTableWidgetItem* self);
	QTableWidgetItem* (*clone)(struct QTableWidgetItem_VTable* vtbl, const QTableWidgetItem* self);
	QVariant* (*data)(struct QTableWidgetItem_VTable* vtbl, const QTableWidgetItem* self, int role);
	void (*setData)(struct QTableWidgetItem_VTable* vtbl, QTableWidgetItem* self, int role, QVariant* value);
	bool (*operatorLesser)(struct QTableWidgetItem_VTable* vtbl, const QTableWidgetItem* self, QTableWidgetItem* other);
	void (*read)(struct QTableWidgetItem_VTable* vtbl, QTableWidgetItem* self, QDataStream* in);
	void (*write)(struct QTableWidgetItem_VTable* vtbl, const QTableWidgetItem* self, QDataStream* out);
};
QTableWidgetItem* QTableWidgetItem_new(struct QTableWidgetItem_VTable* vtbl);
QTableWidgetItem* QTableWidgetItem_new2(struct QTableWidgetItem_VTable* vtbl, struct miqt_string text);
QTableWidgetItem* QTableWidgetItem_new3(struct QTableWidgetItem_VTable* vtbl, QIcon* icon, struct miqt_string text);
QTableWidgetItem* QTableWidgetItem_new4(struct QTableWidgetItem_VTable* vtbl, QTableWidgetItem* other);
QTableWidgetItem* QTableWidgetItem_new5(struct QTableWidgetItem_VTable* vtbl, int type);
QTableWidgetItem* QTableWidgetItem_new6(struct QTableWidgetItem_VTable* vtbl, struct miqt_string text, int type);
QTableWidgetItem* QTableWidgetItem_new7(struct QTableWidgetItem_VTable* vtbl, QIcon* icon, struct miqt_string text, int type);
QTableWidgetItem* QTableWidgetItem_clone(const QTableWidgetItem* self);
QTableWidget* QTableWidgetItem_tableWidget(const QTableWidgetItem* self);
int QTableWidgetItem_row(const QTableWidgetItem* self);
int QTableWidgetItem_column(const QTableWidgetItem* self);
void QTableWidgetItem_setSelected(QTableWidgetItem* self, bool select);
bool QTableWidgetItem_isSelected(const QTableWidgetItem* self);
int QTableWidgetItem_flags(const QTableWidgetItem* self);
void QTableWidgetItem_setFlags(QTableWidgetItem* self, int flags);
struct miqt_string QTableWidgetItem_text(const QTableWidgetItem* self);
void QTableWidgetItem_setText(QTableWidgetItem* self, struct miqt_string text);
QIcon* QTableWidgetItem_icon(const QTableWidgetItem* self);
void QTableWidgetItem_setIcon(QTableWidgetItem* self, QIcon* icon);
struct miqt_string QTableWidgetItem_statusTip(const QTableWidgetItem* self);
void QTableWidgetItem_setStatusTip(QTableWidgetItem* self, struct miqt_string statusTip);
struct miqt_string QTableWidgetItem_toolTip(const QTableWidgetItem* self);
void QTableWidgetItem_setToolTip(QTableWidgetItem* self, struct miqt_string toolTip);
struct miqt_string QTableWidgetItem_whatsThis(const QTableWidgetItem* self);
void QTableWidgetItem_setWhatsThis(QTableWidgetItem* self, struct miqt_string whatsThis);
QFont* QTableWidgetItem_font(const QTableWidgetItem* self);
void QTableWidgetItem_setFont(QTableWidgetItem* self, QFont* font);
int QTableWidgetItem_textAlignment(const QTableWidgetItem* self);
void QTableWidgetItem_setTextAlignment(QTableWidgetItem* self, int alignment);
QColor* QTableWidgetItem_backgroundColor(const QTableWidgetItem* self);
void QTableWidgetItem_setBackgroundColor(QTableWidgetItem* self, QColor* color);
QBrush* QTableWidgetItem_background(const QTableWidgetItem* self);
void QTableWidgetItem_setBackground(QTableWidgetItem* self, QBrush* brush);
QColor* QTableWidgetItem_textColor(const QTableWidgetItem* self);
void QTableWidgetItem_setTextColor(QTableWidgetItem* self, QColor* color);
QBrush* QTableWidgetItem_foreground(const QTableWidgetItem* self);
void QTableWidgetItem_setForeground(QTableWidgetItem* self, QBrush* brush);
int QTableWidgetItem_checkState(const QTableWidgetItem* self);
void QTableWidgetItem_setCheckState(QTableWidgetItem* self, int state);
QSize* QTableWidgetItem_sizeHint(const QTableWidgetItem* self);
void QTableWidgetItem_setSizeHint(QTableWidgetItem* self, QSize* size);
QVariant* QTableWidgetItem_data(const QTableWidgetItem* self, int role);
void QTableWidgetItem_setData(QTableWidgetItem* self, int role, QVariant* value);
bool QTableWidgetItem_operatorLesser(const QTableWidgetItem* self, QTableWidgetItem* other);
void QTableWidgetItem_read(QTableWidgetItem* self, QDataStream* in);
void QTableWidgetItem_write(const QTableWidgetItem* self, QDataStream* out);
void QTableWidgetItem_operatorAssign(QTableWidgetItem* self, QTableWidgetItem* other);
int QTableWidgetItem_type(const QTableWidgetItem* self);
QTableWidgetItem* QTableWidgetItem_virtualbase_clone(const void* self);
QVariant* QTableWidgetItem_virtualbase_data(const void* self, int role);
void QTableWidgetItem_virtualbase_setData(void* self, int role, QVariant* value);
bool QTableWidgetItem_virtualbase_operatorLesser(const void* self, QTableWidgetItem* other);
void QTableWidgetItem_virtualbase_read(void* self, QDataStream* in);
void QTableWidgetItem_virtualbase_write(const void* self, QDataStream* out);
void QTableWidgetItem_delete(QTableWidgetItem* self);

struct QTableWidget_VTable {
	void (*destructor)(struct QTableWidget_VTable* vtbl, QTableWidget* self);
	QMetaObject* (*metaObject)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	void* (*metacast)(struct QTableWidget_VTable* vtbl, QTableWidget* self, const char* param1);
	int (*metacall)(struct QTableWidget_VTable* vtbl, QTableWidget* self, int param1, int param2, void** param3);
	bool (*event)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QEvent* e);
	struct miqt_array /* of struct miqt_string */  (*mimeTypes)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	QMimeData* (*mimeData)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, struct miqt_array /* of QTableWidgetItem* */  items);
	bool (*dropMimeData)(struct QTableWidget_VTable* vtbl, QTableWidget* self, int row, int column, QMimeData* data, int action);
	int (*supportedDropActions)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	void (*dropEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QDropEvent* event);
	void (*setRootIndex)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QModelIndex* index);
	void (*setSelectionModel)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QItemSelectionModel* selectionModel);
	void (*doItemsLayout)(struct QTableWidget_VTable* vtbl, QTableWidget* self);
	QRect* (*visualRect)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, QModelIndex* index);
	void (*scrollTo)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QModelIndex* index, int hint);
	QModelIndex* (*indexAt)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, QPoint* p);
	void (*scrollContentsBy)(struct QTableWidget_VTable* vtbl, QTableWidget* self, int dx, int dy);
	QStyleOptionViewItem* (*viewOptions)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	void (*paintEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QPaintEvent* e);
	void (*timerEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QTimerEvent* event);
	int (*horizontalOffset)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	int (*verticalOffset)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	QModelIndex* (*moveCursor)(struct QTableWidget_VTable* vtbl, QTableWidget* self, int cursorAction, int modifiers);
	void (*setSelection)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QRect* rect, int command);
	QRegion* (*visualRegionForSelection)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, QItemSelection* selection);
	struct miqt_array /* of QModelIndex* */  (*selectedIndexes)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	void (*updateGeometries)(struct QTableWidget_VTable* vtbl, QTableWidget* self);
	QSize* (*viewportSizeHint)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	int (*sizeHintForRow)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, int row);
	int (*sizeHintForColumn)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, int column);
	void (*verticalScrollbarAction)(struct QTableWidget_VTable* vtbl, QTableWidget* self, int action);
	void (*horizontalScrollbarAction)(struct QTableWidget_VTable* vtbl, QTableWidget* self, int action);
	bool (*isIndexHidden)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, QModelIndex* index);
	void (*selectionChanged)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QItemSelection* selected, QItemSelection* deselected);
	void (*currentChanged)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QModelIndex* current, QModelIndex* previous);
	void (*keyboardSearch)(struct QTableWidget_VTable* vtbl, QTableWidget* self, struct miqt_string search);
	QVariant* (*inputMethodQuery)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, int query);
	void (*reset)(struct QTableWidget_VTable* vtbl, QTableWidget* self);
	void (*selectAll)(struct QTableWidget_VTable* vtbl, QTableWidget* self);
	void (*dataChanged)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
	void (*rowsInserted)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QModelIndex* parent, int start, int end);
	void (*rowsAboutToBeRemoved)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QModelIndex* parent, int start, int end);
	void (*updateEditorData)(struct QTableWidget_VTable* vtbl, QTableWidget* self);
	void (*updateEditorGeometries)(struct QTableWidget_VTable* vtbl, QTableWidget* self);
	void (*verticalScrollbarValueChanged)(struct QTableWidget_VTable* vtbl, QTableWidget* self, int value);
	void (*horizontalScrollbarValueChanged)(struct QTableWidget_VTable* vtbl, QTableWidget* self, int value);
	void (*closeEditor)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QWidget* editor, int hint);
	void (*commitData)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QWidget* editor);
	void (*editorDestroyed)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QObject* editor);
	bool (*edit2)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QModelIndex* index, int trigger, QEvent* event);
	int (*selectionCommand)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, QModelIndex* index, QEvent* event);
	void (*startDrag)(struct QTableWidget_VTable* vtbl, QTableWidget* self, int supportedActions);
	bool (*focusNextPrevChild)(struct QTableWidget_VTable* vtbl, QTableWidget* self, bool next);
	bool (*viewportEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QEvent* event);
	void (*mousePressEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QMouseEvent* event);
	void (*mouseMoveEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QMouseEvent* event);
	void (*mouseReleaseEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QMouseEvent* event);
	void (*mouseDoubleClickEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QMouseEvent* event);
	void (*dragEnterEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QDragEnterEvent* event);
	void (*dragMoveEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QDragMoveEvent* event);
	void (*dragLeaveEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QDragLeaveEvent* event);
	void (*focusInEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QFocusEvent* event);
	void (*focusOutEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QFocusEvent* event);
	void (*keyPressEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QKeyEvent* event);
	void (*resizeEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QResizeEvent* event);
	void (*inputMethodEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QInputMethodEvent* event);
	bool (*eventFilter)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QObject* object, QEvent* event);
	QSize* (*minimumSizeHint)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	QSize* (*sizeHint)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	void (*setupViewport)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QWidget* viewport);
	void (*wheelEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QWheelEvent* param1);
	void (*contextMenuEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QContextMenuEvent* param1);
	void (*changeEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QEvent* param1);
	int (*devType)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	void (*setVisible)(struct QTableWidget_VTable* vtbl, QTableWidget* self, bool visible);
	int (*heightForWidth)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, int param1);
	bool (*hasHeightForWidth)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	QPaintEngine* (*paintEngine)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	void (*keyReleaseEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QKeyEvent* event);
	void (*enterEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QEvent* event);
	void (*leaveEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QEvent* event);
	void (*moveEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QMoveEvent* event);
	void (*closeEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QCloseEvent* event);
	void (*tabletEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QTabletEvent* event);
	void (*actionEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QActionEvent* event);
	void (*showEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QShowEvent* event);
	void (*hideEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QHideEvent* event);
	bool (*nativeEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, struct miqt_string eventType, void* message, long* result);
	int (*metric)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, int param1);
	void (*initPainter)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, QPainter* painter);
	QPaintDevice* (*redirected)(struct QTableWidget_VTable* vtbl, const QTableWidget* self, QPoint* offset);
	QPainter* (*sharedPainter)(struct QTableWidget_VTable* vtbl, const QTableWidget* self);
	void (*childEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QChildEvent* event);
	void (*customEvent)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QEvent* event);
	void (*connectNotify)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QTableWidget_VTable* vtbl, QTableWidget* self, QMetaMethod* signal);
};
QTableWidget* QTableWidget_new(struct QTableWidget_VTable* vtbl, QWidget* parent);
QTableWidget* QTableWidget_new2(struct QTableWidget_VTable* vtbl);
QTableWidget* QTableWidget_new3(struct QTableWidget_VTable* vtbl, int rows, int columns);
QTableWidget* QTableWidget_new4(struct QTableWidget_VTable* vtbl, int rows, int columns, QWidget* parent);
void QTableWidget_virtbase(QTableWidget* src, QTableView** outptr_QTableView);
QMetaObject* QTableWidget_metaObject(const QTableWidget* self);
void* QTableWidget_metacast(QTableWidget* self, const char* param1);
int QTableWidget_metacall(QTableWidget* self, int param1, int param2, void** param3);
struct miqt_string QTableWidget_tr(const char* s);
struct miqt_string QTableWidget_trUtf8(const char* s);
void QTableWidget_setRowCount(QTableWidget* self, int rows);
int QTableWidget_rowCount(const QTableWidget* self);
void QTableWidget_setColumnCount(QTableWidget* self, int columns);
int QTableWidget_columnCount(const QTableWidget* self);
int QTableWidget_row(const QTableWidget* self, QTableWidgetItem* item);
int QTableWidget_column(const QTableWidget* self, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_item(const QTableWidget* self, int row, int column);
void QTableWidget_setItem(QTableWidget* self, int row, int column, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_takeItem(QTableWidget* self, int row, int column);
QTableWidgetItem* QTableWidget_verticalHeaderItem(const QTableWidget* self, int row);
void QTableWidget_setVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_takeVerticalHeaderItem(QTableWidget* self, int row);
QTableWidgetItem* QTableWidget_horizontalHeaderItem(const QTableWidget* self, int column);
void QTableWidget_setHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_takeHorizontalHeaderItem(QTableWidget* self, int column);
void QTableWidget_setVerticalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels);
void QTableWidget_setHorizontalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels);
int QTableWidget_currentRow(const QTableWidget* self);
int QTableWidget_currentColumn(const QTableWidget* self);
QTableWidgetItem* QTableWidget_currentItem(const QTableWidget* self);
void QTableWidget_setCurrentItem(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_setCurrentItem2(QTableWidget* self, QTableWidgetItem* item, int command);
void QTableWidget_setCurrentCell(QTableWidget* self, int row, int column);
void QTableWidget_setCurrentCell2(QTableWidget* self, int row, int column, int command);
void QTableWidget_sortItems(QTableWidget* self, int column);
void QTableWidget_setSortingEnabled(QTableWidget* self, bool enable);
bool QTableWidget_isSortingEnabled(const QTableWidget* self);
void QTableWidget_editItem(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_openPersistentEditor(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_closePersistentEditor(QTableWidget* self, QTableWidgetItem* item);
bool QTableWidget_isPersistentEditorOpen(const QTableWidget* self, QTableWidgetItem* item);
QWidget* QTableWidget_cellWidget(const QTableWidget* self, int row, int column);
void QTableWidget_setCellWidget(QTableWidget* self, int row, int column, QWidget* widget);
void QTableWidget_removeCellWidget(QTableWidget* self, int row, int column);
bool QTableWidget_isItemSelected(const QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_setItemSelected(QTableWidget* self, QTableWidgetItem* item, bool select);
void QTableWidget_setRangeSelected(QTableWidget* self, QTableWidgetSelectionRange* range, bool select);
struct miqt_array /* of QTableWidgetSelectionRange* */  QTableWidget_selectedRanges(const QTableWidget* self);
struct miqt_array /* of QTableWidgetItem* */  QTableWidget_selectedItems(const QTableWidget* self);
struct miqt_array /* of QTableWidgetItem* */  QTableWidget_findItems(const QTableWidget* self, struct miqt_string text, int flags);
int QTableWidget_visualRow(const QTableWidget* self, int logicalRow);
int QTableWidget_visualColumn(const QTableWidget* self, int logicalColumn);
QTableWidgetItem* QTableWidget_itemAt(const QTableWidget* self, QPoint* p);
QTableWidgetItem* QTableWidget_itemAt2(const QTableWidget* self, int x, int y);
QRect* QTableWidget_visualItemRect(const QTableWidget* self, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_itemPrototype(const QTableWidget* self);
void QTableWidget_setItemPrototype(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_scrollToItem(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_insertRow(QTableWidget* self, int row);
void QTableWidget_insertColumn(QTableWidget* self, int column);
void QTableWidget_removeRow(QTableWidget* self, int row);
void QTableWidget_removeColumn(QTableWidget* self, int column);
void QTableWidget_clear(QTableWidget* self);
void QTableWidget_clearContents(QTableWidget* self);
void QTableWidget_itemPressed(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_itemPressed(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, QTableWidgetItem*), void (*release)(intptr_t));
void QTableWidget_itemClicked(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_itemClicked(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, QTableWidgetItem*), void (*release)(intptr_t));
void QTableWidget_itemDoubleClicked(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_itemDoubleClicked(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, QTableWidgetItem*), void (*release)(intptr_t));
void QTableWidget_itemActivated(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_itemActivated(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, QTableWidgetItem*), void (*release)(intptr_t));
void QTableWidget_itemEntered(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_itemEntered(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, QTableWidgetItem*), void (*release)(intptr_t));
void QTableWidget_itemChanged(QTableWidget* self, QTableWidgetItem* item);
void QTableWidget_connect_itemChanged(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, QTableWidgetItem*), void (*release)(intptr_t));
void QTableWidget_currentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous);
void QTableWidget_connect_currentItemChanged(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, QTableWidgetItem*, QTableWidgetItem*), void (*release)(intptr_t));
void QTableWidget_itemSelectionChanged(QTableWidget* self);
void QTableWidget_connect_itemSelectionChanged(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
void QTableWidget_cellPressed(QTableWidget* self, int row, int column);
void QTableWidget_connect_cellPressed(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, int, int), void (*release)(intptr_t));
void QTableWidget_cellClicked(QTableWidget* self, int row, int column);
void QTableWidget_connect_cellClicked(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, int, int), void (*release)(intptr_t));
void QTableWidget_cellDoubleClicked(QTableWidget* self, int row, int column);
void QTableWidget_connect_cellDoubleClicked(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, int, int), void (*release)(intptr_t));
void QTableWidget_cellActivated(QTableWidget* self, int row, int column);
void QTableWidget_connect_cellActivated(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, int, int), void (*release)(intptr_t));
void QTableWidget_cellEntered(QTableWidget* self, int row, int column);
void QTableWidget_connect_cellEntered(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, int, int), void (*release)(intptr_t));
void QTableWidget_cellChanged(QTableWidget* self, int row, int column);
void QTableWidget_connect_cellChanged(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, int, int), void (*release)(intptr_t));
void QTableWidget_currentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn);
void QTableWidget_connect_currentCellChanged(QTableWidget* self, intptr_t slot, void (*callback)(intptr_t, int, int, int, int), void (*release)(intptr_t));
bool QTableWidget_event(QTableWidget* self, QEvent* e);
struct miqt_array /* of struct miqt_string */  QTableWidget_mimeTypes(const QTableWidget* self);
QMimeData* QTableWidget_mimeData(const QTableWidget* self, struct miqt_array /* of QTableWidgetItem* */  items);
bool QTableWidget_dropMimeData(QTableWidget* self, int row, int column, QMimeData* data, int action);
int QTableWidget_supportedDropActions(const QTableWidget* self);
void QTableWidget_dropEvent(QTableWidget* self, QDropEvent* event);
struct miqt_string QTableWidget_tr2(const char* s, const char* c);
struct miqt_string QTableWidget_tr3(const char* s, const char* c, int n);
struct miqt_string QTableWidget_trUtf82(const char* s, const char* c);
struct miqt_string QTableWidget_trUtf83(const char* s, const char* c, int n);
void QTableWidget_sortItems2(QTableWidget* self, int column, int order);
void QTableWidget_scrollToItem2(QTableWidget* self, QTableWidgetItem* item, int hint);
QMetaObject* QTableWidget_virtualbase_metaObject(const void* self);
void* QTableWidget_virtualbase_metacast(void* self, const char* param1);
int QTableWidget_virtualbase_metacall(void* self, int param1, int param2, void** param3);
bool QTableWidget_virtualbase_event(void* self, QEvent* e);
struct miqt_array /* of struct miqt_string */  QTableWidget_virtualbase_mimeTypes(const void* self);
QMimeData* QTableWidget_virtualbase_mimeData(const void* self, struct miqt_array /* of QTableWidgetItem* */  items);
bool QTableWidget_virtualbase_dropMimeData(void* self, int row, int column, QMimeData* data, int action);
int QTableWidget_virtualbase_supportedDropActions(const void* self);
void QTableWidget_virtualbase_dropEvent(void* self, QDropEvent* event);
void QTableWidget_virtualbase_setRootIndex(void* self, QModelIndex* index);
void QTableWidget_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);
void QTableWidget_virtualbase_doItemsLayout(void* self);
QRect* QTableWidget_virtualbase_visualRect(const void* self, QModelIndex* index);
void QTableWidget_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);
QModelIndex* QTableWidget_virtualbase_indexAt(const void* self, QPoint* p);
void QTableWidget_virtualbase_scrollContentsBy(void* self, int dx, int dy);
QStyleOptionViewItem* QTableWidget_virtualbase_viewOptions(const void* self);
void QTableWidget_virtualbase_paintEvent(void* self, QPaintEvent* e);
void QTableWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);
int QTableWidget_virtualbase_horizontalOffset(const void* self);
int QTableWidget_virtualbase_verticalOffset(const void* self);
QModelIndex* QTableWidget_virtualbase_moveCursor(void* self, int cursorAction, int modifiers);
void QTableWidget_virtualbase_setSelection(void* self, QRect* rect, int command);
QRegion* QTableWidget_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);
struct miqt_array /* of QModelIndex* */  QTableWidget_virtualbase_selectedIndexes(const void* self);
void QTableWidget_virtualbase_updateGeometries(void* self);
QSize* QTableWidget_virtualbase_viewportSizeHint(const void* self);
int QTableWidget_virtualbase_sizeHintForRow(const void* self, int row);
int QTableWidget_virtualbase_sizeHintForColumn(const void* self, int column);
void QTableWidget_virtualbase_verticalScrollbarAction(void* self, int action);
void QTableWidget_virtualbase_horizontalScrollbarAction(void* self, int action);
bool QTableWidget_virtualbase_isIndexHidden(const void* self, QModelIndex* index);
void QTableWidget_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
void QTableWidget_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);
void QTableWidget_virtualbase_keyboardSearch(void* self, struct miqt_string search);
QVariant* QTableWidget_virtualbase_inputMethodQuery(const void* self, int query);
void QTableWidget_virtualbase_reset(void* self);
void QTableWidget_virtualbase_selectAll(void* self);
void QTableWidget_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QTableWidget_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);
void QTableWidget_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
void QTableWidget_virtualbase_updateEditorData(void* self);
void QTableWidget_virtualbase_updateEditorGeometries(void* self);
void QTableWidget_virtualbase_verticalScrollbarValueChanged(void* self, int value);
void QTableWidget_virtualbase_horizontalScrollbarValueChanged(void* self, int value);
void QTableWidget_virtualbase_closeEditor(void* self, QWidget* editor, int hint);
void QTableWidget_virtualbase_commitData(void* self, QWidget* editor);
void QTableWidget_virtualbase_editorDestroyed(void* self, QObject* editor);
bool QTableWidget_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);
int QTableWidget_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);
void QTableWidget_virtualbase_startDrag(void* self, int supportedActions);
bool QTableWidget_virtualbase_focusNextPrevChild(void* self, bool next);
bool QTableWidget_virtualbase_viewportEvent(void* self, QEvent* event);
void QTableWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
void QTableWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
void QTableWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
void QTableWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
void QTableWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
void QTableWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
void QTableWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
void QTableWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);
void QTableWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
void QTableWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
void QTableWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);
void QTableWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QTableWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);
QSize* QTableWidget_virtualbase_minimumSizeHint(const void* self);
QSize* QTableWidget_virtualbase_sizeHint(const void* self);
void QTableWidget_virtualbase_setupViewport(void* self, QWidget* viewport);
void QTableWidget_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
void QTableWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);
void QTableWidget_virtualbase_changeEvent(void* self, QEvent* param1);
int QTableWidget_virtualbase_devType(const void* self);
void QTableWidget_virtualbase_setVisible(void* self, bool visible);
int QTableWidget_virtualbase_heightForWidth(const void* self, int param1);
bool QTableWidget_virtualbase_hasHeightForWidth(const void* self);
QPaintEngine* QTableWidget_virtualbase_paintEngine(const void* self);
void QTableWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
void QTableWidget_virtualbase_enterEvent(void* self, QEvent* event);
void QTableWidget_virtualbase_leaveEvent(void* self, QEvent* event);
void QTableWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);
void QTableWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);
void QTableWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);
void QTableWidget_virtualbase_actionEvent(void* self, QActionEvent* event);
void QTableWidget_virtualbase_showEvent(void* self, QShowEvent* event);
void QTableWidget_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QTableWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
int QTableWidget_virtualbase_metric(const void* self, int param1);
void QTableWidget_virtualbase_initPainter(const void* self, QPainter* painter);
QPaintDevice* QTableWidget_virtualbase_redirected(const void* self, QPoint* offset);
QPainter* QTableWidget_virtualbase_sharedPainter(const void* self);
void QTableWidget_virtualbase_childEvent(void* self, QChildEvent* event);
void QTableWidget_virtualbase_customEvent(void* self, QEvent* event);
void QTableWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QTableWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
struct miqt_array /* of QTableWidgetItem* */  QTableWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data);
QModelIndex* QTableWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item);
QModelIndex* QTableWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item);
QTableWidgetItem* QTableWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
void QTableWidget_protectedbase_rowMoved(bool* _dynamic_cast_ok, void* self, int row, int oldIndex, int newIndex);
void QTableWidget_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self, int column, int oldIndex, int newIndex);
void QTableWidget_protectedbase_rowResized(bool* _dynamic_cast_ok, void* self, int row, int oldHeight, int newHeight);
void QTableWidget_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldWidth, int newWidth);
void QTableWidget_protectedbase_rowCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
void QTableWidget_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
void QTableWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
int QTableWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
void QTableWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
int QTableWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
int QTableWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
void QTableWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
void QTableWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
void QTableWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
void QTableWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
void QTableWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
QPoint* QTableWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
void QTableWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
void QTableWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
void QTableWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
int QTableWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
void QTableWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* QTableWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void QTableWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QTableWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QTableWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QTableWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QTableWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QTableWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QTableWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QTableWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QTableWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QTableWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QTableWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
const QMetaObject* QTableWidget_staticMetaObject();
void QTableWidget_delete(QTableWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
