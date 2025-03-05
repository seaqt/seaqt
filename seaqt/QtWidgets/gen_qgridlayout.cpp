#include <QChildEvent>
#include <QEvent>
#include <QGridLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qgridlayout.h>
#include "gen_qgridlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

QMetaObject* miqt_exec_callback_QGridLayout_metaObject(const QGridLayout*, intptr_t);
void* miqt_exec_callback_QGridLayout_metacast(QGridLayout*, intptr_t, const char*);
int miqt_exec_callback_QGridLayout_metacall(QGridLayout*, intptr_t, int, int, void**);
QSize* miqt_exec_callback_QGridLayout_sizeHint(const QGridLayout*, intptr_t);
QSize* miqt_exec_callback_QGridLayout_minimumSize(const QGridLayout*, intptr_t);
QSize* miqt_exec_callback_QGridLayout_maximumSize(const QGridLayout*, intptr_t);
bool miqt_exec_callback_QGridLayout_hasHeightForWidth(const QGridLayout*, intptr_t);
int miqt_exec_callback_QGridLayout_heightForWidth(const QGridLayout*, intptr_t, int);
int miqt_exec_callback_QGridLayout_minimumHeightForWidth(const QGridLayout*, intptr_t, int);
int miqt_exec_callback_QGridLayout_expandingDirections(const QGridLayout*, intptr_t);
void miqt_exec_callback_QGridLayout_invalidate(QGridLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QGridLayout_itemAt(const QGridLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QGridLayout_takeAt(QGridLayout*, intptr_t, int);
int miqt_exec_callback_QGridLayout_count(const QGridLayout*, intptr_t);
void miqt_exec_callback_QGridLayout_setGeometry(QGridLayout*, intptr_t, QRect*);
void miqt_exec_callback_QGridLayout_addItemWithQLayoutItem(QGridLayout*, intptr_t, QLayoutItem*);
QRect* miqt_exec_callback_QGridLayout_geometry(const QGridLayout*, intptr_t);
int miqt_exec_callback_QGridLayout_indexOf(const QGridLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QGridLayout_isEmpty(const QGridLayout*, intptr_t);
int miqt_exec_callback_QGridLayout_controlTypes(const QGridLayout*, intptr_t);
QLayout* miqt_exec_callback_QGridLayout_layout(QGridLayout*, intptr_t);
void miqt_exec_callback_QGridLayout_childEvent(QGridLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QGridLayout_event(QGridLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QGridLayout_eventFilter(QGridLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGridLayout_timerEvent(QGridLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGridLayout_customEvent(QGridLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QGridLayout_connectNotify(QGridLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGridLayout_disconnectNotify(QGridLayout*, intptr_t, QMetaMethod*);
QWidget* miqt_exec_callback_QGridLayout_widget(QGridLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QGridLayout_spacerItem(QGridLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQGridLayout final : public QGridLayout {
public:

	VirtualQGridLayout(QWidget* parent): QGridLayout(parent) {};
	VirtualQGridLayout(): QGridLayout() {};

	virtual ~VirtualQGridLayout() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (handle__metaObject == 0) {
			return QGridLayout::metaObject();
		}
		

		QMetaObject* callback_return_value = miqt_exec_callback_QGridLayout_metaObject(this, handle__metaObject);

		return callback_return_value;
	}

	friend QMetaObject* QGridLayout_virtualbase_metaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacast = 0;

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (handle__metacast == 0) {
			return QGridLayout::qt_metacast(param1);
		}
		
		const char* sigval1 = (const char*) param1;

		void* callback_return_value = miqt_exec_callback_QGridLayout_metacast(this, handle__metacast, sigval1);

		return callback_return_value;
	}

	friend void* QGridLayout_virtualbase_metacast(void* self, const char* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacall = 0;

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (handle__metacall == 0) {
			return QGridLayout::qt_metacall(param1, param2, param3);
		}
		
		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;

		int callback_return_value = miqt_exec_callback_QGridLayout_metacall(this, handle__metacall, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	friend int QGridLayout_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QGridLayout::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGridLayout_sizeHint(this, handle__sizeHint);

		return *callback_return_value;
	}

	friend QSize* QGridLayout_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (handle__minimumSize == 0) {
			return QGridLayout::minimumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGridLayout_minimumSize(this, handle__minimumSize);

		return *callback_return_value;
	}

	friend QSize* QGridLayout_virtualbase_minimumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__maximumSize = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (handle__maximumSize == 0) {
			return QGridLayout::maximumSize();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QGridLayout_maximumSize(this, handle__maximumSize);

		return *callback_return_value;
	}

	friend QSize* QGridLayout_virtualbase_maximumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QGridLayout::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QGridLayout_hasHeightForWidth(this, handle__hasHeightForWidth);

		return callback_return_value;
	}

	friend bool QGridLayout_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QGridLayout::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QGridLayout_heightForWidth(this, handle__heightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QGridLayout_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (handle__minimumHeightForWidth == 0) {
			return QGridLayout::minimumHeightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QGridLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QGridLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__expandingDirections = 0;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (handle__expandingDirections == 0) {
			return QGridLayout::expandingDirections();
		}
		

		int callback_return_value = miqt_exec_callback_QGridLayout_expandingDirections(this, handle__expandingDirections);

		return static_cast<Qt::Orientations>(callback_return_value);
	}

	friend int QGridLayout_virtualbase_expandingDirections(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__invalidate = 0;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (handle__invalidate == 0) {
			QGridLayout::invalidate();
			return;
		}
		

		miqt_exec_callback_QGridLayout_invalidate(this, handle__invalidate);

		
	}

	friend void QGridLayout_virtualbase_invalidate(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__itemAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int index) const override {
		if (handle__itemAt == 0) {
			return QGridLayout::itemAt(index);
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QGridLayout_itemAt(this, handle__itemAt, sigval1);

		return callback_return_value;
	}

	friend QLayoutItem* QGridLayout_virtualbase_itemAt(const void* self, int index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__takeAt = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int index) override {
		if (handle__takeAt == 0) {
			return QGridLayout::takeAt(index);
		}
		
		int sigval1 = index;

		QLayoutItem* callback_return_value = miqt_exec_callback_QGridLayout_takeAt(this, handle__takeAt, sigval1);

		return callback_return_value;
	}

	friend QLayoutItem* QGridLayout_virtualbase_takeAt(void* self, int index);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__count = 0;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (handle__count == 0) {
			return QGridLayout::count();
		}
		

		int callback_return_value = miqt_exec_callback_QGridLayout_count(this, handle__count);

		return static_cast<int>(callback_return_value);
	}

	friend int QGridLayout_virtualbase_count(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (handle__setGeometry == 0) {
			QGridLayout::setGeometry(geometry);
			return;
		}
		
		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);

		miqt_exec_callback_QGridLayout_setGeometry(this, handle__setGeometry, sigval1);

		
	}

	friend void QGridLayout_virtualbase_setGeometry(void* self, QRect* geometry);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__addItemWithQLayoutItem = 0;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (handle__addItemWithQLayoutItem == 0) {
			QGridLayout::addItem(param1);
			return;
		}
		
		QLayoutItem* sigval1 = param1;

		miqt_exec_callback_QGridLayout_addItemWithQLayoutItem(this, handle__addItemWithQLayoutItem, sigval1);

		
	}

	friend void QGridLayout_virtualbase_addItemWithQLayoutItem(void* self, QLayoutItem* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__geometry = 0;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (handle__geometry == 0) {
			return QGridLayout::geometry();
		}
		

		QRect* callback_return_value = miqt_exec_callback_QGridLayout_geometry(this, handle__geometry);

		return *callback_return_value;
	}

	friend QRect* QGridLayout_virtualbase_geometry(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indexOf = 0;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (handle__indexOf == 0) {
			return QGridLayout::indexOf(param1);
		}
		
		QWidget* sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QGridLayout_indexOf(this, handle__indexOf, sigval1);

		return static_cast<int>(callback_return_value);
	}

	friend int QGridLayout_virtualbase_indexOf(const void* self, QWidget* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isEmpty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (handle__isEmpty == 0) {
			return QGridLayout::isEmpty();
		}
		

		bool callback_return_value = miqt_exec_callback_QGridLayout_isEmpty(this, handle__isEmpty);

		return callback_return_value;
	}

	friend bool QGridLayout_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__controlTypes = 0;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (handle__controlTypes == 0) {
			return QGridLayout::controlTypes();
		}
		

		int callback_return_value = miqt_exec_callback_QGridLayout_controlTypes(this, handle__controlTypes);

		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	friend int QGridLayout_virtualbase_controlTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__layout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (handle__layout == 0) {
			return QGridLayout::layout();
		}
		

		QLayout* callback_return_value = miqt_exec_callback_QGridLayout_layout(this, handle__layout);

		return callback_return_value;
	}

	friend QLayout* QGridLayout_virtualbase_layout(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (handle__childEvent == 0) {
			QGridLayout::childEvent(e);
			return;
		}
		
		QChildEvent* sigval1 = e;

		miqt_exec_callback_QGridLayout_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QGridLayout_virtualbase_childEvent(void* self, QChildEvent* e);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QGridLayout::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QGridLayout_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QGridLayout_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QGridLayout::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QGridLayout_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QGridLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QGridLayout::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QGridLayout_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QGridLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QGridLayout::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QGridLayout_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QGridLayout_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QGridLayout::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGridLayout_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QGridLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QGridLayout::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QGridLayout_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QGridLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__widget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (handle__widget == 0) {
			return QGridLayout::widget();
		}
		

		QWidget* callback_return_value = miqt_exec_callback_QGridLayout_widget(this, handle__widget);

		return callback_return_value;
	}

	friend QWidget* QGridLayout_virtualbase_widget(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__spacerItem = 0;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (handle__spacerItem == 0) {
			return QGridLayout::spacerItem();
		}
		

		QSpacerItem* callback_return_value = miqt_exec_callback_QGridLayout_spacerItem(this, handle__spacerItem);

		return callback_return_value;
	}

	friend QSpacerItem* QGridLayout_virtualbase_spacerItem(void* self);

	// Wrappers to allow calling protected methods:
	friend void QGridLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QGridLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QGridLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QGridLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QGridLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QGridLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGridLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGridLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGridLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGridLayout* QGridLayout_new(QWidget* parent) {
	return new VirtualQGridLayout(parent);
}

QGridLayout* QGridLayout_new2() {
	return new VirtualQGridLayout();
}

void QGridLayout_virtbase(QGridLayout* src, QLayout** outptr_QLayout) {
	*outptr_QLayout = static_cast<QLayout*>(src);
}

QMetaObject* QGridLayout_metaObject(const QGridLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGridLayout_metacast(QGridLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QGridLayout_metacall(QGridLayout* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct miqt_string QGridLayout_tr(const char* s) {
	QString _ret = QGridLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGridLayout_trUtf8(const char* s) {
	QString _ret = QGridLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QGridLayout_sizeHint(const QGridLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QGridLayout_minimumSize(const QGridLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QGridLayout_maximumSize(const QGridLayout* self) {
	return new QSize(self->maximumSize());
}

void QGridLayout_setHorizontalSpacing(QGridLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QGridLayout_horizontalSpacing(const QGridLayout* self) {
	return self->horizontalSpacing();
}

void QGridLayout_setVerticalSpacing(QGridLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QGridLayout_verticalSpacing(const QGridLayout* self) {
	return self->verticalSpacing();
}

void QGridLayout_setSpacing(QGridLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QGridLayout_spacing(const QGridLayout* self) {
	return self->spacing();
}

void QGridLayout_setRowStretch(QGridLayout* self, int row, int stretch) {
	self->setRowStretch(static_cast<int>(row), static_cast<int>(stretch));
}

void QGridLayout_setColumnStretch(QGridLayout* self, int column, int stretch) {
	self->setColumnStretch(static_cast<int>(column), static_cast<int>(stretch));
}

int QGridLayout_rowStretch(const QGridLayout* self, int row) {
	return self->rowStretch(static_cast<int>(row));
}

int QGridLayout_columnStretch(const QGridLayout* self, int column) {
	return self->columnStretch(static_cast<int>(column));
}

void QGridLayout_setRowMinimumHeight(QGridLayout* self, int row, int minSize) {
	self->setRowMinimumHeight(static_cast<int>(row), static_cast<int>(minSize));
}

void QGridLayout_setColumnMinimumWidth(QGridLayout* self, int column, int minSize) {
	self->setColumnMinimumWidth(static_cast<int>(column), static_cast<int>(minSize));
}

int QGridLayout_rowMinimumHeight(const QGridLayout* self, int row) {
	return self->rowMinimumHeight(static_cast<int>(row));
}

int QGridLayout_columnMinimumWidth(const QGridLayout* self, int column) {
	return self->columnMinimumWidth(static_cast<int>(column));
}

int QGridLayout_columnCount(const QGridLayout* self) {
	return self->columnCount();
}

int QGridLayout_rowCount(const QGridLayout* self) {
	return self->rowCount();
}

QRect* QGridLayout_cellRect(const QGridLayout* self, int row, int column) {
	return new QRect(self->cellRect(static_cast<int>(row), static_cast<int>(column)));
}

bool QGridLayout_hasHeightForWidth(const QGridLayout* self) {
	return self->hasHeightForWidth();
}

int QGridLayout_heightForWidth(const QGridLayout* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QGridLayout_minimumHeightForWidth(const QGridLayout* self, int param1) {
	return self->minimumHeightForWidth(static_cast<int>(param1));
}

int QGridLayout_expandingDirections(const QGridLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

void QGridLayout_invalidate(QGridLayout* self) {
	self->invalidate();
}

void QGridLayout_addWidget(QGridLayout* self, QWidget* w) {
	self->addWidget(w);
}

void QGridLayout_addWidget2(QGridLayout* self, QWidget* param1, int row, int column) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_addWidget3(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_addLayout(QGridLayout* self, QLayout* param1, int row, int column) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_addLayout2(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_setOriginCorner(QGridLayout* self, int originCorner) {
	self->setOriginCorner(static_cast<Qt::Corner>(originCorner));
}

int QGridLayout_originCorner(const QGridLayout* self) {
	Qt::Corner _ret = self->originCorner();
	return static_cast<int>(_ret);
}

QLayoutItem* QGridLayout_itemAt(const QGridLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QGridLayout_itemAtPosition(const QGridLayout* self, int row, int column) {
	return self->itemAtPosition(static_cast<int>(row), static_cast<int>(column));
}

QLayoutItem* QGridLayout_takeAt(QGridLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QGridLayout_count(const QGridLayout* self) {
	return self->count();
}

void QGridLayout_setGeometry(QGridLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

void QGridLayout_addItem(QGridLayout* self, QLayoutItem* item, int row, int column) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column));
}

void QGridLayout_setDefaultPositioning(QGridLayout* self, int n, int orient) {
	self->setDefaultPositioning(static_cast<int>(n), static_cast<Qt::Orientation>(orient));
}

void QGridLayout_getItemPosition(const QGridLayout* self, int idx, int* row, int* column, int* rowSpan, int* columnSpan) {
	self->getItemPosition(static_cast<int>(idx), static_cast<int*>(row), static_cast<int*>(column), static_cast<int*>(rowSpan), static_cast<int*>(columnSpan));
}

struct miqt_string QGridLayout_tr2(const char* s, const char* c) {
	QString _ret = QGridLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGridLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QGridLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGridLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QGridLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGridLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGridLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGridLayout_addWidget4(QGridLayout* self, QWidget* param1, int row, int column, int param4) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(param4));
}

void QGridLayout_addWidget6(QGridLayout* self, QWidget* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addWidget(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

void QGridLayout_addLayout4(QGridLayout* self, QLayout* param1, int row, int column, int param4) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<Qt::Alignment>(param4));
}

void QGridLayout_addLayout6(QGridLayout* self, QLayout* param1, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addLayout(param1, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

void QGridLayout_addItem4(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan));
}

void QGridLayout_addItem5(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

void QGridLayout_addItem6(QGridLayout* self, QLayoutItem* item, int row, int column, int rowSpan, int columnSpan, int param6) {
	self->addItem(item, static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan), static_cast<Qt::Alignment>(param6));
}

bool QGridLayout_override_virtual_metaObject(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metaObject = slot;
	return true;
}

QMetaObject* QGridLayout_virtualbase_metaObject(const void* self) {

	return (QMetaObject*) ( (const VirtualQGridLayout*)(self) )->QGridLayout::metaObject();

}

bool QGridLayout_override_virtual_metacast(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacast = slot;
	return true;
}

void* QGridLayout_virtualbase_metacast(void* self, const char* param1) {

	return ( (VirtualQGridLayout*)(self) )->QGridLayout::qt_metacast(param1);

}

bool QGridLayout_override_virtual_metacall(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacall = slot;
	return true;
}

int QGridLayout_virtualbase_metacall(void* self, int param1, int param2, void** param3) {

	return ( (VirtualQGridLayout*)(self) )->QGridLayout::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);

}

bool QGridLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QGridLayout_virtualbase_sizeHint(const void* self) {

	return new QSize(( (const VirtualQGridLayout*)(self) )->QGridLayout::sizeHint());

}

bool QGridLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumSize = slot;
	return true;
}

QSize* QGridLayout_virtualbase_minimumSize(const void* self) {

	return new QSize(( (const VirtualQGridLayout*)(self) )->QGridLayout::minimumSize());

}

bool QGridLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__maximumSize = slot;
	return true;
}

QSize* QGridLayout_virtualbase_maximumSize(const void* self) {

	return new QSize(( (const VirtualQGridLayout*)(self) )->QGridLayout::maximumSize());

}

bool QGridLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QGridLayout_virtualbase_hasHeightForWidth(const void* self) {

	return ( (const VirtualQGridLayout*)(self) )->QGridLayout::hasHeightForWidth();

}

bool QGridLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__heightForWidth = slot;
	return true;
}

int QGridLayout_virtualbase_heightForWidth(const void* self, int param1) {

	return ( (const VirtualQGridLayout*)(self) )->QGridLayout::heightForWidth(static_cast<int>(param1));

}

bool QGridLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__minimumHeightForWidth = slot;
	return true;
}

int QGridLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {

	return ( (const VirtualQGridLayout*)(self) )->QGridLayout::minimumHeightForWidth(static_cast<int>(param1));

}

bool QGridLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__expandingDirections = slot;
	return true;
}

int QGridLayout_virtualbase_expandingDirections(const void* self) {

	Qt::Orientations _ret = ( (const VirtualQGridLayout*)(self) )->QGridLayout::expandingDirections();
	return static_cast<int>(_ret);

}

bool QGridLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__invalidate = slot;
	return true;
}

void QGridLayout_virtualbase_invalidate(void* self) {

	( (VirtualQGridLayout*)(self) )->QGridLayout::invalidate();

}

bool QGridLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__itemAt = slot;
	return true;
}

QLayoutItem* QGridLayout_virtualbase_itemAt(const void* self, int index) {

	return ( (const VirtualQGridLayout*)(self) )->QGridLayout::itemAt(static_cast<int>(index));

}

bool QGridLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__takeAt = slot;
	return true;
}

QLayoutItem* QGridLayout_virtualbase_takeAt(void* self, int index) {

	return ( (VirtualQGridLayout*)(self) )->QGridLayout::takeAt(static_cast<int>(index));

}

bool QGridLayout_override_virtual_count(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__count = slot;
	return true;
}

int QGridLayout_virtualbase_count(const void* self) {

	return ( (const VirtualQGridLayout*)(self) )->QGridLayout::count();

}

bool QGridLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setGeometry = slot;
	return true;
}

void QGridLayout_virtualbase_setGeometry(void* self, QRect* geometry) {

	( (VirtualQGridLayout*)(self) )->QGridLayout::setGeometry(*geometry);

}

bool QGridLayout_override_virtual_addItemWithQLayoutItem(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__addItemWithQLayoutItem = slot;
	return true;
}

void QGridLayout_virtualbase_addItemWithQLayoutItem(void* self, QLayoutItem* param1) {

	( (VirtualQGridLayout*)(self) )->QGridLayout::addItem(param1);

}

bool QGridLayout_override_virtual_geometry(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__geometry = slot;
	return true;
}

QRect* QGridLayout_virtualbase_geometry(const void* self) {

	return new QRect(( (const VirtualQGridLayout*)(self) )->QGridLayout::geometry());

}

bool QGridLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indexOf = slot;
	return true;
}

int QGridLayout_virtualbase_indexOf(const void* self, QWidget* param1) {

	return ( (const VirtualQGridLayout*)(self) )->QGridLayout::indexOf(param1);

}

bool QGridLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isEmpty = slot;
	return true;
}

bool QGridLayout_virtualbase_isEmpty(const void* self) {

	return ( (const VirtualQGridLayout*)(self) )->QGridLayout::isEmpty();

}

bool QGridLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__controlTypes = slot;
	return true;
}

int QGridLayout_virtualbase_controlTypes(const void* self) {

	QSizePolicy::ControlTypes _ret = ( (const VirtualQGridLayout*)(self) )->QGridLayout::controlTypes();
	return static_cast<int>(_ret);

}

bool QGridLayout_override_virtual_layout(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__layout = slot;
	return true;
}

QLayout* QGridLayout_virtualbase_layout(void* self) {

	return ( (VirtualQGridLayout*)(self) )->QGridLayout::layout();

}

bool QGridLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QGridLayout_virtualbase_childEvent(void* self, QChildEvent* e) {

	( (VirtualQGridLayout*)(self) )->QGridLayout::childEvent(e);

}

bool QGridLayout_override_virtual_event(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QGridLayout_virtualbase_event(void* self, QEvent* event) {

	return ( (VirtualQGridLayout*)(self) )->QGridLayout::event(event);

}

bool QGridLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QGridLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (VirtualQGridLayout*)(self) )->QGridLayout::eventFilter(watched, event);

}

bool QGridLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QGridLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (VirtualQGridLayout*)(self) )->QGridLayout::timerEvent(event);

}

bool QGridLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QGridLayout_virtualbase_customEvent(void* self, QEvent* event) {

	( (VirtualQGridLayout*)(self) )->QGridLayout::customEvent(event);

}

bool QGridLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QGridLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQGridLayout*)(self) )->QGridLayout::connectNotify(*signal);

}

bool QGridLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QGridLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQGridLayout*)(self) )->QGridLayout::disconnectNotify(*signal);

}

bool QGridLayout_override_virtual_widget(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__widget = slot;
	return true;
}

QWidget* QGridLayout_virtualbase_widget(void* self) {

	return ( (VirtualQGridLayout*)(self) )->QGridLayout::widget();

}

bool QGridLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__spacerItem = slot;
	return true;
}

QSpacerItem* QGridLayout_virtualbase_spacerItem(void* self) {

	return ( (VirtualQGridLayout*)(self) )->QGridLayout::spacerItem();

}

const QMetaObject* QGridLayout_staticMetaObject() { return &QGridLayout::staticMetaObject; }
void QGridLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->widgetEvent(param1);

}

void QGridLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildLayout(l);

}

void QGridLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addChildWidget(w);

}

bool QGridLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->adoptLayout(layout);

}

QRect* QGridLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return new QRect(self_cast->alignmentRect(*param1));

}

QObject* QGridLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QGridLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QGridLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QGridLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQGridLayout* self_cast = dynamic_cast<VirtualQGridLayout*>( (QGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QGridLayout_delete(QGridLayout* self) {
	delete self;
}

