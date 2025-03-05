#include <QChildEvent>
#include <QEvent>
#include <QFileSelector>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlEngine>
#include <QQmlFileSelector>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qqmlfileselector.h>
#include "gen_qqmlfileselector.h"

#ifdef __cplusplus
extern "C" {
#endif

QMetaObject* miqt_exec_callback_QQmlFileSelector_metaObject(const QQmlFileSelector*, intptr_t);
void* miqt_exec_callback_QQmlFileSelector_metacast(QQmlFileSelector*, intptr_t, const char*);
int miqt_exec_callback_QQmlFileSelector_metacall(QQmlFileSelector*, intptr_t, int, int, void**);
bool miqt_exec_callback_QQmlFileSelector_event(QQmlFileSelector*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlFileSelector_eventFilter(QQmlFileSelector*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlFileSelector_timerEvent(QQmlFileSelector*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlFileSelector_childEvent(QQmlFileSelector*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlFileSelector_customEvent(QQmlFileSelector*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlFileSelector_connectNotify(QQmlFileSelector*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlFileSelector_disconnectNotify(QQmlFileSelector*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQQmlFileSelector final : public QQmlFileSelector {
public:

	VirtualQQmlFileSelector(QQmlEngine* engine): QQmlFileSelector(engine) {};
	VirtualQQmlFileSelector(QQmlEngine* engine, QObject* parent): QQmlFileSelector(engine, parent) {};

	virtual ~VirtualQQmlFileSelector() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (handle__metaObject == 0) {
			return QQmlFileSelector::metaObject();
		}
		

		QMetaObject* callback_return_value = miqt_exec_callback_QQmlFileSelector_metaObject(this, handle__metaObject);

		return callback_return_value;
	}

	friend QMetaObject* QQmlFileSelector_virtualbase_metaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacast = 0;

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (handle__metacast == 0) {
			return QQmlFileSelector::qt_metacast(param1);
		}
		
		const char* sigval1 = (const char*) param1;

		void* callback_return_value = miqt_exec_callback_QQmlFileSelector_metacast(this, handle__metacast, sigval1);

		return callback_return_value;
	}

	friend void* QQmlFileSelector_virtualbase_metacast(void* self, const char* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacall = 0;

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (handle__metacall == 0) {
			return QQmlFileSelector::qt_metacall(param1, param2, param3);
		}
		
		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;

		int callback_return_value = miqt_exec_callback_QQmlFileSelector_metacall(this, handle__metacall, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	friend int QQmlFileSelector_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QQmlFileSelector::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QQmlFileSelector_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QQmlFileSelector_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QQmlFileSelector::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QQmlFileSelector_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QQmlFileSelector_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QQmlFileSelector::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QQmlFileSelector_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QQmlFileSelector_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QQmlFileSelector::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QQmlFileSelector_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QQmlFileSelector_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QQmlFileSelector::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QQmlFileSelector_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QQmlFileSelector_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QQmlFileSelector::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlFileSelector_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QQmlFileSelector_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QQmlFileSelector::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlFileSelector_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QQmlFileSelector_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlFileSelector_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlFileSelector_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlFileSelector_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlFileSelector_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlFileSelector* QQmlFileSelector_new(QQmlEngine* engine) {
	return new VirtualQQmlFileSelector(engine);
}

QQmlFileSelector* QQmlFileSelector_new2(QQmlEngine* engine, QObject* parent) {
	return new VirtualQQmlFileSelector(engine, parent);
}

void QQmlFileSelector_virtbase(QQmlFileSelector* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QQmlFileSelector_metaObject(const QQmlFileSelector* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlFileSelector_metacast(QQmlFileSelector* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QQmlFileSelector_metacall(QQmlFileSelector* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct miqt_string QQmlFileSelector_tr(const char* s) {
	QString _ret = QQmlFileSelector::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QFileSelector* QQmlFileSelector_selector(const QQmlFileSelector* self) {
	return self->selector();
}

void QQmlFileSelector_setSelector(QQmlFileSelector* self, QFileSelector* selector) {
	self->setSelector(selector);
}

void QQmlFileSelector_setExtraSelectors(QQmlFileSelector* self, struct miqt_array /* of struct miqt_string */  strings) {
	QStringList strings_QList;
	strings_QList.reserve(strings.len);
	struct miqt_string* strings_arr = static_cast<struct miqt_string*>(strings.data);
	for(size_t i = 0; i < strings.len; ++i) {
		QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
		strings_QList.push_back(strings_arr_i_QString);
	}
	self->setExtraSelectors(strings_QList);
}

QQmlFileSelector* QQmlFileSelector_get(QQmlEngine* param1) {
	return QQmlFileSelector::get(param1);
}

struct miqt_string QQmlFileSelector_tr2(const char* s, const char* c) {
	QString _ret = QQmlFileSelector::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlFileSelector_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlFileSelector::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlFileSelector_override_virtual_metaObject(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metaObject = slot;
	return true;
}

QMetaObject* QQmlFileSelector_virtualbase_metaObject(const void* self) {

	return (QMetaObject*) ( (const VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::metaObject();

}

bool QQmlFileSelector_override_virtual_metacast(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacast = slot;
	return true;
}

void* QQmlFileSelector_virtualbase_metacast(void* self, const char* param1) {

	return ( (VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::qt_metacast(param1);

}

bool QQmlFileSelector_override_virtual_metacall(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacall = slot;
	return true;
}

int QQmlFileSelector_virtualbase_metacall(void* self, int param1, int param2, void** param3) {

	return ( (VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);

}

bool QQmlFileSelector_override_virtual_event(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QQmlFileSelector_virtualbase_event(void* self, QEvent* event) {

	return ( (VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::event(event);

}

bool QQmlFileSelector_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QQmlFileSelector_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::eventFilter(watched, event);

}

bool QQmlFileSelector_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QQmlFileSelector_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::timerEvent(event);

}

bool QQmlFileSelector_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QQmlFileSelector_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::childEvent(event);

}

bool QQmlFileSelector_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QQmlFileSelector_virtualbase_customEvent(void* self, QEvent* event) {

	( (VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::customEvent(event);

}

bool QQmlFileSelector_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QQmlFileSelector_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::connectNotify(*signal);

}

bool QQmlFileSelector_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QQmlFileSelector_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQQmlFileSelector*)(self) )->QQmlFileSelector::disconnectNotify(*signal);

}

const QMetaObject* QQmlFileSelector_staticMetaObject() { return &QQmlFileSelector::staticMetaObject; }
QObject* QQmlFileSelector_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QQmlFileSelector_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QQmlFileSelector_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QQmlFileSelector_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQQmlFileSelector* self_cast = dynamic_cast<VirtualQQmlFileSelector*>( (QQmlFileSelector*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QQmlFileSelector_delete(QQmlFileSelector* self) {
	delete self;
}

