#pragma once
#ifndef SEAQT_QTWIDGETS_GEN_QGRAPHICSSCENE_H
#define SEAQT_QTWIDGETS_GEN_QGRAPHICSSCENE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QChildEvent;
class QEvent;
class QFocusEvent;
class QFont;
class QGraphicsEllipseItem;
class QGraphicsItem;
class QGraphicsItemGroup;
class QGraphicsLineItem;
class QGraphicsPathItem;
class QGraphicsPixmapItem;
class QGraphicsProxyWidget;
class QGraphicsRectItem;
class QGraphicsScene;
class QGraphicsSceneContextMenuEvent;
class QGraphicsSceneDragDropEvent;
class QGraphicsSceneHelpEvent;
class QGraphicsSceneMouseEvent;
class QGraphicsSceneWheelEvent;
class QGraphicsSimpleTextItem;
class QGraphicsTextItem;
class QGraphicsView;
class QGraphicsWidget;
class QInputMethodEvent;
class QKeyEvent;
class QLineF;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPainter;
class QPainterPath;
class QPalette;
class QPen;
class QPixmap;
class QPointF;
class QRectF;
class QStyle;
class QTimerEvent;
class QTransform;
class QVariant;
class QWidget;
#else
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QGraphicsEllipseItem QGraphicsEllipseItem;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemGroup QGraphicsItemGroup;
typedef struct QGraphicsLineItem QGraphicsLineItem;
typedef struct QGraphicsPathItem QGraphicsPathItem;
typedef struct QGraphicsPixmapItem QGraphicsPixmapItem;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QGraphicsRectItem QGraphicsRectItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsSceneContextMenuEvent QGraphicsSceneContextMenuEvent;
typedef struct QGraphicsSceneDragDropEvent QGraphicsSceneDragDropEvent;
typedef struct QGraphicsSceneHelpEvent QGraphicsSceneHelpEvent;
typedef struct QGraphicsSceneMouseEvent QGraphicsSceneMouseEvent;
typedef struct QGraphicsSceneWheelEvent QGraphicsSceneWheelEvent;
typedef struct QGraphicsSimpleTextItem QGraphicsSimpleTextItem;
typedef struct QGraphicsTextItem QGraphicsTextItem;
typedef struct QGraphicsView QGraphicsView;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLineF QLineF;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPalette QPalette;
typedef struct QPen QPen;
typedef struct QPixmap QPixmap;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QStyle QStyle;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

struct QGraphicsScene_VTable {
	void (*destructor)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self);
	QMetaObject* (*metaObject)(struct QGraphicsScene_VTable* vtbl, const QGraphicsScene* self);
	void* (*metacast)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, const char* param1);
	int (*metacall)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, int param1, int param2, void** param3);
	QVariant* (*inputMethodQuery)(struct QGraphicsScene_VTable* vtbl, const QGraphicsScene* self, int query);
	bool (*event)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QEvent* event);
	bool (*eventFilter)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QObject* watched, QEvent* event);
	void (*contextMenuEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event);
	void (*dragEnterEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
	void (*dragMoveEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
	void (*dragLeaveEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
	void (*dropEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
	void (*focusInEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QFocusEvent* event);
	void (*focusOutEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QFocusEvent* event);
	void (*helpEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneHelpEvent* event);
	void (*keyPressEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QKeyEvent* event);
	void (*keyReleaseEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QKeyEvent* event);
	void (*mousePressEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
	void (*mouseMoveEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
	void (*mouseReleaseEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
	void (*mouseDoubleClickEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
	void (*wheelEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QGraphicsSceneWheelEvent* event);
	void (*inputMethodEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QInputMethodEvent* event);
	void (*drawBackground)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QPainter* painter, QRectF* rect);
	void (*drawForeground)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QPainter* painter, QRectF* rect);
	bool (*focusNextPrevChild)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, bool next);
	void (*timerEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QTimerEvent* event);
	void (*childEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QChildEvent* event);
	void (*customEvent)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QEvent* event);
	void (*connectNotify)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QGraphicsScene_VTable* vtbl, QGraphicsScene* self, QMetaMethod* signal);
};
QGraphicsScene* QGraphicsScene_new(struct QGraphicsScene_VTable* vtbl);
QGraphicsScene* QGraphicsScene_new2(struct QGraphicsScene_VTable* vtbl, QRectF* sceneRect);
QGraphicsScene* QGraphicsScene_new3(struct QGraphicsScene_VTable* vtbl, double x, double y, double width, double height);
QGraphicsScene* QGraphicsScene_new4(struct QGraphicsScene_VTable* vtbl, QObject* parent);
QGraphicsScene* QGraphicsScene_new5(struct QGraphicsScene_VTable* vtbl, QRectF* sceneRect, QObject* parent);
QGraphicsScene* QGraphicsScene_new6(struct QGraphicsScene_VTable* vtbl, double x, double y, double width, double height, QObject* parent);
void QGraphicsScene_virtbase(QGraphicsScene* src, QObject** outptr_QObject);
QMetaObject* QGraphicsScene_metaObject(const QGraphicsScene* self);
void* QGraphicsScene_metacast(QGraphicsScene* self, const char* param1);
int QGraphicsScene_metacall(QGraphicsScene* self, int param1, int param2, void** param3);
struct miqt_string QGraphicsScene_tr(const char* s);
QRectF* QGraphicsScene_sceneRect(const QGraphicsScene* self);
double QGraphicsScene_width(const QGraphicsScene* self);
double QGraphicsScene_height(const QGraphicsScene* self);
void QGraphicsScene_setSceneRect(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_setSceneRect2(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_render(QGraphicsScene* self, QPainter* painter);
int QGraphicsScene_itemIndexMethod(const QGraphicsScene* self);
void QGraphicsScene_setItemIndexMethod(QGraphicsScene* self, int method);
int QGraphicsScene_bspTreeDepth(const QGraphicsScene* self);
void QGraphicsScene_setBspTreeDepth(QGraphicsScene* self, int depth);
QRectF* QGraphicsScene_itemsBoundingRect(const QGraphicsScene* self);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items(const QGraphicsScene* self);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithPos(const QGraphicsScene* self, QPointF* pos);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithRect(const QGraphicsScene* self, QRectF* rect);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithPath(const QGraphicsScene* self, QPainterPath* path);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items2(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_collidingItems(const QGraphicsScene* self, QGraphicsItem* item);
QGraphicsItem* QGraphicsScene_itemAt(const QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform);
QGraphicsItem* QGraphicsScene_itemAt2(const QGraphicsScene* self, double x, double y, QTransform* deviceTransform);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_selectedItems(const QGraphicsScene* self);
QPainterPath* QGraphicsScene_selectionArea(const QGraphicsScene* self);
void QGraphicsScene_setSelectionArea(QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform);
void QGraphicsScene_setSelectionAreaWithPath(QGraphicsScene* self, QPainterPath* path);
QGraphicsItemGroup* QGraphicsScene_createItemGroup(QGraphicsScene* self, struct miqt_array /* of QGraphicsItem* */  items);
void QGraphicsScene_destroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group);
void QGraphicsScene_addItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsEllipseItem* QGraphicsScene_addEllipse(QGraphicsScene* self, QRectF* rect);
QGraphicsLineItem* QGraphicsScene_addLine(QGraphicsScene* self, QLineF* line);
QGraphicsPathItem* QGraphicsScene_addPath(QGraphicsScene* self, QPainterPath* path);
QGraphicsPixmapItem* QGraphicsScene_addPixmap(QGraphicsScene* self, QPixmap* pixmap);
QGraphicsRectItem* QGraphicsScene_addRect(QGraphicsScene* self, QRectF* rect);
QGraphicsTextItem* QGraphicsScene_addText(QGraphicsScene* self, struct miqt_string text);
QGraphicsSimpleTextItem* QGraphicsScene_addSimpleText(QGraphicsScene* self, struct miqt_string text);
QGraphicsProxyWidget* QGraphicsScene_addWidget(QGraphicsScene* self, QWidget* widget);
QGraphicsEllipseItem* QGraphicsScene_addEllipse2(QGraphicsScene* self, double x, double y, double w, double h);
QGraphicsLineItem* QGraphicsScene_addLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2);
QGraphicsRectItem* QGraphicsScene_addRect2(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_removeItem(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsItem* QGraphicsScene_focusItem(const QGraphicsScene* self);
void QGraphicsScene_setFocusItem(QGraphicsScene* self, QGraphicsItem* item);
bool QGraphicsScene_hasFocus(const QGraphicsScene* self);
void QGraphicsScene_setFocus(QGraphicsScene* self);
void QGraphicsScene_clearFocus(QGraphicsScene* self);
void QGraphicsScene_setStickyFocus(QGraphicsScene* self, bool enabled);
bool QGraphicsScene_stickyFocus(const QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_mouseGrabberItem(const QGraphicsScene* self);
QBrush* QGraphicsScene_backgroundBrush(const QGraphicsScene* self);
void QGraphicsScene_setBackgroundBrush(QGraphicsScene* self, QBrush* brush);
QBrush* QGraphicsScene_foregroundBrush(const QGraphicsScene* self);
void QGraphicsScene_setForegroundBrush(QGraphicsScene* self, QBrush* brush);
QVariant* QGraphicsScene_inputMethodQuery(const QGraphicsScene* self, int query);
struct miqt_array /* of QGraphicsView* */  QGraphicsScene_views(const QGraphicsScene* self);
void QGraphicsScene_update(QGraphicsScene* self, double x, double y, double w, double h);
void QGraphicsScene_invalidate(QGraphicsScene* self, double x, double y, double w, double h);
QStyle* QGraphicsScene_style(const QGraphicsScene* self);
void QGraphicsScene_setStyle(QGraphicsScene* self, QStyle* style);
QFont* QGraphicsScene_font(const QGraphicsScene* self);
void QGraphicsScene_setFont(QGraphicsScene* self, QFont* font);
QPalette* QGraphicsScene_palette(const QGraphicsScene* self);
void QGraphicsScene_setPalette(QGraphicsScene* self, QPalette* palette);
bool QGraphicsScene_isActive(const QGraphicsScene* self);
QGraphicsItem* QGraphicsScene_activePanel(const QGraphicsScene* self);
void QGraphicsScene_setActivePanel(QGraphicsScene* self, QGraphicsItem* item);
QGraphicsWidget* QGraphicsScene_activeWindow(const QGraphicsScene* self);
void QGraphicsScene_setActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget);
bool QGraphicsScene_sendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event);
double QGraphicsScene_minimumRenderSize(const QGraphicsScene* self);
void QGraphicsScene_setMinimumRenderSize(QGraphicsScene* self, double minSize);
bool QGraphicsScene_focusOnTouch(const QGraphicsScene* self);
void QGraphicsScene_setFocusOnTouch(QGraphicsScene* self, bool enabled);
void QGraphicsScene_update2(QGraphicsScene* self);
void QGraphicsScene_invalidate2(QGraphicsScene* self);
void QGraphicsScene_advance(QGraphicsScene* self);
void QGraphicsScene_clearSelection(QGraphicsScene* self);
void QGraphicsScene_clear(QGraphicsScene* self);
bool QGraphicsScene_event(QGraphicsScene* self, QEvent* event);
bool QGraphicsScene_eventFilter(QGraphicsScene* self, QObject* watched, QEvent* event);
void QGraphicsScene_contextMenuEvent(QGraphicsScene* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsScene_dragEnterEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_dragMoveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_dragLeaveEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_dropEvent(QGraphicsScene* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_focusInEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_focusOutEvent(QGraphicsScene* self, QFocusEvent* event);
void QGraphicsScene_helpEvent(QGraphicsScene* self, QGraphicsSceneHelpEvent* event);
void QGraphicsScene_keyPressEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_keyReleaseEvent(QGraphicsScene* self, QKeyEvent* event);
void QGraphicsScene_mousePressEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_mouseMoveEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_mouseReleaseEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_mouseDoubleClickEvent(QGraphicsScene* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_wheelEvent(QGraphicsScene* self, QGraphicsSceneWheelEvent* event);
void QGraphicsScene_inputMethodEvent(QGraphicsScene* self, QInputMethodEvent* event);
void QGraphicsScene_drawBackground(QGraphicsScene* self, QPainter* painter, QRectF* rect);
void QGraphicsScene_drawForeground(QGraphicsScene* self, QPainter* painter, QRectF* rect);
bool QGraphicsScene_focusNextPrevChild(QGraphicsScene* self, bool next);
void QGraphicsScene_changed(QGraphicsScene* self, struct miqt_array /* of QRectF* */  region);
void QGraphicsScene_connect_changed(QGraphicsScene* self, intptr_t slot, void (*callback)(intptr_t, struct miqt_array /* of QRectF* */ ), void (*release)(intptr_t));
void QGraphicsScene_sceneRectChanged(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_connect_sceneRectChanged(QGraphicsScene* self, intptr_t slot, void (*callback)(intptr_t, QRectF*), void (*release)(intptr_t));
void QGraphicsScene_selectionChanged(QGraphicsScene* self);
void QGraphicsScene_connect_selectionChanged(QGraphicsScene* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t));
void QGraphicsScene_focusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, int reason);
void QGraphicsScene_connect_focusItemChanged(QGraphicsScene* self, intptr_t slot, void (*callback)(intptr_t, QGraphicsItem*, QGraphicsItem*, int), void (*release)(intptr_t));
struct miqt_string QGraphicsScene_tr2(const char* s, const char* c);
struct miqt_string QGraphicsScene_tr3(const char* s, const char* c, int n);
void QGraphicsScene_render2(QGraphicsScene* self, QPainter* painter, QRectF* target);
void QGraphicsScene_render3(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source);
void QGraphicsScene_render4(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source, int aspectRatioMode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items1(const QGraphicsScene* self, int order);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items22(const QGraphicsScene* self, QPointF* pos, int mode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items3(const QGraphicsScene* self, QPointF* pos, int mode, int order);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items4(const QGraphicsScene* self, QPointF* pos, int mode, int order, QTransform* deviceTransform);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items23(const QGraphicsScene* self, QRectF* rect, int mode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items32(const QGraphicsScene* self, QRectF* rect, int mode, int order);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items42(const QGraphicsScene* self, QRectF* rect, int mode, int order, QTransform* deviceTransform);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items25(const QGraphicsScene* self, QPainterPath* path, int mode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items34(const QGraphicsScene* self, QPainterPath* path, int mode, int order);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items44(const QGraphicsScene* self, QPainterPath* path, int mode, int order, QTransform* deviceTransform);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items7(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order, QTransform* deviceTransform);
struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_collidingItems2(const QGraphicsScene* self, QGraphicsItem* item, int mode);
void QGraphicsScene_setSelectionArea2(QGraphicsScene* self, QPainterPath* path, int selectionOperation);
void QGraphicsScene_setSelectionArea3(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode);
void QGraphicsScene_setSelectionArea4(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode, QTransform* deviceTransform);
QGraphicsEllipseItem* QGraphicsScene_addEllipse22(QGraphicsScene* self, QRectF* rect, QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_addEllipse3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush);
QGraphicsLineItem* QGraphicsScene_addLine22(QGraphicsScene* self, QLineF* line, QPen* pen);
QGraphicsPathItem* QGraphicsScene_addPath2(QGraphicsScene* self, QPainterPath* path, QPen* pen);
QGraphicsPathItem* QGraphicsScene_addPath3(QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush);
QGraphicsRectItem* QGraphicsScene_addRect22(QGraphicsScene* self, QRectF* rect, QPen* pen);
QGraphicsRectItem* QGraphicsScene_addRect3(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush);
QGraphicsTextItem* QGraphicsScene_addText2(QGraphicsScene* self, struct miqt_string text, QFont* font);
QGraphicsSimpleTextItem* QGraphicsScene_addSimpleText2(QGraphicsScene* self, struct miqt_string text, QFont* font);
QGraphicsProxyWidget* QGraphicsScene_addWidget2(QGraphicsScene* self, QWidget* widget, int wFlags);
QGraphicsEllipseItem* QGraphicsScene_addEllipse5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen);
QGraphicsEllipseItem* QGraphicsScene_addEllipse6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush);
QGraphicsLineItem* QGraphicsScene_addLine5(QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen);
QGraphicsRectItem* QGraphicsScene_addRect5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen);
QGraphicsRectItem* QGraphicsScene_addRect6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush);
void QGraphicsScene_setFocusItem2(QGraphicsScene* self, QGraphicsItem* item, int focusReason);
void QGraphicsScene_setFocus1(QGraphicsScene* self, int focusReason);
void QGraphicsScene_invalidate5(QGraphicsScene* self, double x, double y, double w, double h, int layers);
void QGraphicsScene_update1(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_invalidate1(QGraphicsScene* self, QRectF* rect);
void QGraphicsScene_invalidate22(QGraphicsScene* self, QRectF* rect, int layers);
QMetaObject* QGraphicsScene_virtualbase_metaObject(const void* self);
void* QGraphicsScene_virtualbase_metacast(void* self, const char* param1);
int QGraphicsScene_virtualbase_metacall(void* self, int param1, int param2, void** param3);
QVariant* QGraphicsScene_virtualbase_inputMethodQuery(const void* self, int query);
bool QGraphicsScene_virtualbase_event(void* self, QEvent* event);
bool QGraphicsScene_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
void QGraphicsScene_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);
void QGraphicsScene_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);
void QGraphicsScene_virtualbase_focusInEvent(void* self, QFocusEvent* event);
void QGraphicsScene_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
void QGraphicsScene_virtualbase_helpEvent(void* self, QGraphicsSceneHelpEvent* event);
void QGraphicsScene_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
void QGraphicsScene_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
void QGraphicsScene_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);
void QGraphicsScene_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);
void QGraphicsScene_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
void QGraphicsScene_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect);
void QGraphicsScene_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect);
bool QGraphicsScene_virtualbase_focusNextPrevChild(void* self, bool next);
void QGraphicsScene_virtualbase_timerEvent(void* self, QTimerEvent* event);
void QGraphicsScene_virtualbase_childEvent(void* self, QChildEvent* event);
void QGraphicsScene_virtualbase_customEvent(void* self, QEvent* event);
void QGraphicsScene_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QGraphicsScene_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QGraphicsScene_protectedbase_sender(const void* self);
int QGraphicsScene_protectedbase_senderSignalIndex(const void* self);
int QGraphicsScene_protectedbase_receivers(const void* self, const char* signal);
bool QGraphicsScene_protectedbase_isSignalConnected(const void* self, QMetaMethod* signal);
const QMetaObject* QGraphicsScene_staticMetaObject();
void QGraphicsScene_delete(QGraphicsScene* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
