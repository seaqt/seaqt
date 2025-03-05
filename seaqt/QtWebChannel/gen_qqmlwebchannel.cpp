#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlWebChannel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWebChannel>
#include <qqmlwebchannel.h>
#include "gen_qqmlwebchannel.h"

#ifdef __cplusplus
extern "C" {
#endif

QMetaObject* miqt_exec_callback_QQmlWebChannel_metaObject(const QQmlWebChannel*, intptr_t);
void* miqt_exec_callback_QQmlWebChannel_metacast(QQmlWebChannel*, intptr_t, const char*);
int miqt_exec_callback_QQmlWebChannel_metacall(QQmlWebChannel*, intptr_t, int, int, void**);
bool miqt_exec_callback_QQmlWebChannel_event(QQmlWebChannel*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlWebChannel_eventFilter(QQmlWebChannel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlWebChannel_timerEvent(QQmlWebChannel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlWebChannel_childEvent(QQmlWebChannel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlWebChannel_customEvent(QQmlWebChannel*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlWebChannel_connectNotify(QQmlWebChannel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlWebChannel_disconnectNotify(QQmlWebChannel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQQmlWebChannel final : public QQmlWebChannel {
public:

	VirtualQQmlWebChannel(): QQmlWebChannel() {};
	VirtualQQmlWebChannel(QObject* parent): QQmlWebChannel(parent) {};

	virtual ~VirtualQQmlWebChannel() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (handle__metaObject == 0) {
			return QQmlWebChannel::metaObject();
		}
		

		QMetaObject* callback_return_value = miqt_exec_callback_QQmlWebChannel_metaObject(this, handle__metaObject);

		return callback_return_value;
	}

	friend QMetaObject* QQmlWebChannel_virtualbase_metaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacast = 0;

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (handle__metacast == 0) {
			return QQmlWebChannel::qt_metacast(param1);
		}
		
		const char* sigval1 = (const char*) param1;

		void* callback_return_value = miqt_exec_callback_QQmlWebChannel_metacast(this, handle__metacast, sigval1);

		return callback_return_value;
	}

	friend void* QQmlWebChannel_virtualbase_metacast(void* self, const char* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacall = 0;

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (handle__metacall == 0) {
			return QQmlWebChannel::qt_metacall(param1, param2, param3);
		}
		
		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;

		int callback_return_value = miqt_exec_callback_QQmlWebChannel_metacall(this, handle__metacall, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	friend int QQmlWebChannel_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QQmlWebChannel::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QQmlWebChannel_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QQmlWebChannel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QQmlWebChannel::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QQmlWebChannel_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QQmlWebChannel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QQmlWebChannel::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QQmlWebChannel_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QQmlWebChannel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QQmlWebChannel::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QQmlWebChannel_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QQmlWebChannel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QQmlWebChannel::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QQmlWebChannel_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QQmlWebChannel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QQmlWebChannel::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlWebChannel_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QQmlWebChannel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QQmlWebChannel::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QQmlWebChannel_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QQmlWebChannel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlWebChannel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlWebChannel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlWebChannel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlWebChannel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlWebChannel* QQmlWebChannel_new() {
	return new VirtualQQmlWebChannel();
}

QQmlWebChannel* QQmlWebChannel_new2(QObject* parent) {
	return new VirtualQQmlWebChannel(parent);
}

void QQmlWebChannel_virtbase(QQmlWebChannel* src, QWebChannel** outptr_QWebChannel) {
	*outptr_QWebChannel = static_cast<QWebChannel*>(src);
}

QMetaObject* QQmlWebChannel_metaObject(const QQmlWebChannel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlWebChannel_metacast(QQmlWebChannel* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QQmlWebChannel_metacall(QQmlWebChannel* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct miqt_string QQmlWebChannel_tr(const char* s) {
	QString _ret = QQmlWebChannel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlWebChannel_trUtf8(const char* s) {
	QString _ret = QQmlWebChannel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlWebChannel_registerObjects(QQmlWebChannel* self, struct miqt_map /* of struct miqt_string to QVariant* */  objects) {
	QVariantMap objects_QMap;
	struct miqt_string* objects_karr = static_cast<struct miqt_string*>(objects.keys);
	QVariant** objects_varr = static_cast<QVariant**>(objects.values);
	for(size_t i = 0; i < objects.len; ++i) {
		QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
		objects_QMap[objects_karr_i_QString] = *(objects_varr[i]);
	}
	self->registerObjects(objects_QMap);
}

void QQmlWebChannel_connectTo(QQmlWebChannel* self, QObject* transport) {
	self->connectTo(transport);
}

void QQmlWebChannel_disconnectFrom(QQmlWebChannel* self, QObject* transport) {
	self->disconnectFrom(transport);
}

struct miqt_string QQmlWebChannel_tr2(const char* s, const char* c) {
	QString _ret = QQmlWebChannel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlWebChannel_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlWebChannel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlWebChannel_trUtf82(const char* s, const char* c) {
	QString _ret = QQmlWebChannel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlWebChannel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QQmlWebChannel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlWebChannel_override_virtual_metaObject(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metaObject = slot;
	return true;
}

QMetaObject* QQmlWebChannel_virtualbase_metaObject(const void* self) {

	return (QMetaObject*) ( (const VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::metaObject();

}

bool QQmlWebChannel_override_virtual_metacast(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacast = slot;
	return true;
}

void* QQmlWebChannel_virtualbase_metacast(void* self, const char* param1) {

	return ( (VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::qt_metacast(param1);

}

bool QQmlWebChannel_override_virtual_metacall(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacall = slot;
	return true;
}

int QQmlWebChannel_virtualbase_metacall(void* self, int param1, int param2, void** param3) {

	return ( (VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);

}

bool QQmlWebChannel_override_virtual_event(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QQmlWebChannel_virtualbase_event(void* self, QEvent* event) {

	return ( (VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::event(event);

}

bool QQmlWebChannel_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QQmlWebChannel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::eventFilter(watched, event);

}

bool QQmlWebChannel_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QQmlWebChannel_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::timerEvent(event);

}

bool QQmlWebChannel_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QQmlWebChannel_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::childEvent(event);

}

bool QQmlWebChannel_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QQmlWebChannel_virtualbase_customEvent(void* self, QEvent* event) {

	( (VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::customEvent(event);

}

bool QQmlWebChannel_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QQmlWebChannel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::connectNotify(*signal);

}

bool QQmlWebChannel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QQmlWebChannel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQQmlWebChannel*)(self) )->QQmlWebChannel::disconnectNotify(*signal);

}

const QMetaObject* QQmlWebChannel_staticMetaObject() { return &QQmlWebChannel::staticMetaObject; }
QObject* QQmlWebChannel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QQmlWebChannel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QQmlWebChannel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QQmlWebChannel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQQmlWebChannel* self_cast = dynamic_cast<VirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QQmlWebChannel_delete(QQmlWebChannel* self) {
	delete self;
}

