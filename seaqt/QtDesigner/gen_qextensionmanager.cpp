#include <QAbstractExtensionFactory>
#include <QAbstractExtensionManager>
#include <QChildEvent>
#include <QEvent>
#include <QExtensionManager>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qextensionmanager.h>
#include "gen_qextensionmanager.h"

#ifdef __cplusplus
extern "C" {
#endif

QMetaObject* miqt_exec_callback_QExtensionManager_metaObject(const QExtensionManager*, intptr_t);
void* miqt_exec_callback_QExtensionManager_metacast(QExtensionManager*, intptr_t, const char*);
int miqt_exec_callback_QExtensionManager_metacall(QExtensionManager*, intptr_t, int, int, void**);
void miqt_exec_callback_QExtensionManager_registerExtensions(QExtensionManager*, intptr_t, QAbstractExtensionFactory*, struct seaqt_string);
void miqt_exec_callback_QExtensionManager_unregisterExtensions(QExtensionManager*, intptr_t, QAbstractExtensionFactory*, struct seaqt_string);
QObject* miqt_exec_callback_QExtensionManager_extension(const QExtensionManager*, intptr_t, QObject*, struct seaqt_string);
bool miqt_exec_callback_QExtensionManager_event(QExtensionManager*, intptr_t, QEvent*);
bool miqt_exec_callback_QExtensionManager_eventFilter(QExtensionManager*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QExtensionManager_timerEvent(QExtensionManager*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QExtensionManager_childEvent(QExtensionManager*, intptr_t, QChildEvent*);
void miqt_exec_callback_QExtensionManager_customEvent(QExtensionManager*, intptr_t, QEvent*);
void miqt_exec_callback_QExtensionManager_connectNotify(QExtensionManager*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QExtensionManager_disconnectNotify(QExtensionManager*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQExtensionManager final : public QExtensionManager {
public:

	VirtualQExtensionManager(): QExtensionManager() {}
	VirtualQExtensionManager(QObject* parent): QExtensionManager(parent) {}

	virtual ~VirtualQExtensionManager() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (handle__metaObject == 0) {
			return QExtensionManager::metaObject();
		}

		QMetaObject* callback_return_value = miqt_exec_callback_QExtensionManager_metaObject(this, handle__metaObject);
		return callback_return_value;
	}

	friend QMetaObject* QExtensionManager_virtualbase_metaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacast = 0;

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (handle__metacast == 0) {
			return QExtensionManager::qt_metacast(param1);
		}

		const char* sigval1 = (const char*) param1;
		void* callback_return_value = miqt_exec_callback_QExtensionManager_metacast(this, handle__metacast, sigval1);
		return callback_return_value;
	}

	friend void* QExtensionManager_virtualbase_metacast(void* self, const char* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacall = 0;

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (handle__metacall == 0) {
			return QExtensionManager::qt_metacall(param1, param2, param3);
		}

		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;
		int callback_return_value = miqt_exec_callback_QExtensionManager_metacall(this, handle__metacall, sigval1, sigval2, sigval3);
		return static_cast<int>(callback_return_value);
	}

	friend int QExtensionManager_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__registerExtensions = 0;

	// Subclass to allow providing a Go implementation
	virtual void registerExtensions(QAbstractExtensionFactory* factory, const QString& iid) override {
		if (handle__registerExtensions == 0) {
			QExtensionManager::registerExtensions(factory, iid);
			return;
		}

		QAbstractExtensionFactory* sigval1 = factory;
		const QString iid_ret = iid;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray iid_b = iid_ret.toUtf8();
		struct seaqt_string iid_ms;
		iid_ms.len = iid_b.length();
		iid_ms.data = static_cast<char*>(malloc(iid_ms.len));
		memcpy(iid_ms.data, iid_b.data(), iid_ms.len);
		struct seaqt_string sigval2 = iid_ms;
		miqt_exec_callback_QExtensionManager_registerExtensions(this, handle__registerExtensions, sigval1, sigval2);

	}

	friend void QExtensionManager_virtualbase_registerExtensions(void* self, QAbstractExtensionFactory* factory, struct seaqt_string iid);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__unregisterExtensions = 0;

	// Subclass to allow providing a Go implementation
	virtual void unregisterExtensions(QAbstractExtensionFactory* factory, const QString& iid) override {
		if (handle__unregisterExtensions == 0) {
			QExtensionManager::unregisterExtensions(factory, iid);
			return;
		}

		QAbstractExtensionFactory* sigval1 = factory;
		const QString iid_ret = iid;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray iid_b = iid_ret.toUtf8();
		struct seaqt_string iid_ms;
		iid_ms.len = iid_b.length();
		iid_ms.data = static_cast<char*>(malloc(iid_ms.len));
		memcpy(iid_ms.data, iid_b.data(), iid_ms.len);
		struct seaqt_string sigval2 = iid_ms;
		miqt_exec_callback_QExtensionManager_unregisterExtensions(this, handle__unregisterExtensions, sigval1, sigval2);

	}

	friend void QExtensionManager_virtualbase_unregisterExtensions(void* self, QAbstractExtensionFactory* factory, struct seaqt_string iid);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__extension = 0;

	// Subclass to allow providing a Go implementation
	virtual QObject* extension(QObject* object, const QString& iid) const override {
		if (handle__extension == 0) {
			return QExtensionManager::extension(object, iid);
		}

		QObject* sigval1 = object;
		const QString iid_ret = iid;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray iid_b = iid_ret.toUtf8();
		struct seaqt_string iid_ms;
		iid_ms.len = iid_b.length();
		iid_ms.data = static_cast<char*>(malloc(iid_ms.len));
		memcpy(iid_ms.data, iid_b.data(), iid_ms.len);
		struct seaqt_string sigval2 = iid_ms;
		QObject* callback_return_value = miqt_exec_callback_QExtensionManager_extension(this, handle__extension, sigval1, sigval2);
		return callback_return_value;
	}

	friend QObject* QExtensionManager_virtualbase_extension(const void* self, QObject* object, struct seaqt_string iid);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QExtensionManager::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QExtensionManager_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QExtensionManager_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QExtensionManager::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QExtensionManager_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QExtensionManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QExtensionManager::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QExtensionManager_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QExtensionManager_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QExtensionManager::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QExtensionManager_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QExtensionManager_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QExtensionManager::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QExtensionManager_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QExtensionManager_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QExtensionManager::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QExtensionManager_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QExtensionManager_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QExtensionManager::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QExtensionManager_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QExtensionManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QExtensionManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QExtensionManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QExtensionManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QExtensionManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QExtensionManager* QExtensionManager_new() {
	return new (std::nothrow) VirtualQExtensionManager();
}

QExtensionManager* QExtensionManager_new2(QObject* parent) {
	return new (std::nothrow) VirtualQExtensionManager(parent);
}

void QExtensionManager_virtbase(QExtensionManager* src, QObject** outptr_QObject, QAbstractExtensionManager** outptr_QAbstractExtensionManager) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QAbstractExtensionManager = static_cast<QAbstractExtensionManager*>(src);
}

QMetaObject* QExtensionManager_metaObject(const QExtensionManager* self) {
	return (QMetaObject*) self->metaObject();
}

void* QExtensionManager_metacast(QExtensionManager* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QExtensionManager_metacall(QExtensionManager* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct seaqt_string QExtensionManager_tr(const char* s) {
	QString _ret = QExtensionManager::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QExtensionManager_registerExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, struct seaqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	self->registerExtensions(factory, iid_QString);
}

void QExtensionManager_unregisterExtensions(QExtensionManager* self, QAbstractExtensionFactory* factory, struct seaqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	self->unregisterExtensions(factory, iid_QString);
}

QObject* QExtensionManager_extension(const QExtensionManager* self, QObject* object, struct seaqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	return self->extension(object, iid_QString);
}

struct seaqt_string QExtensionManager_tr2(const char* s, const char* c) {
	QString _ret = QExtensionManager::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct seaqt_string QExtensionManager_tr3(const char* s, const char* c, int n) {
	QString _ret = QExtensionManager::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const QMetaObject* QExtensionManager_staticMetaObject() { return &QExtensionManager::staticMetaObject; }
bool QExtensionManager_override_virtual_metaObject(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metaObject = slot;
	return true;
}

QMetaObject* QExtensionManager_virtualbase_metaObject(const void* self) {
	return (QMetaObject*) static_cast<const VirtualQExtensionManager*>(self)->QExtensionManager::metaObject();
}

bool QExtensionManager_override_virtual_metacast(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metacast = slot;
	return true;
}

void* QExtensionManager_virtualbase_metacast(void* self, const char* param1) {
	return static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::qt_metacast(param1);
}

bool QExtensionManager_override_virtual_metacall(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metacall = slot;
	return true;
}

int QExtensionManager_virtualbase_metacall(void* self, int param1, int param2, void** param3) {
	return static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

bool QExtensionManager_override_virtual_registerExtensions(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__registerExtensions = slot;
	return true;
}

void QExtensionManager_virtualbase_registerExtensions(void* self, QAbstractExtensionFactory* factory, struct seaqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::registerExtensions(factory, iid_QString);
}

bool QExtensionManager_override_virtual_unregisterExtensions(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__unregisterExtensions = slot;
	return true;
}

void QExtensionManager_virtualbase_unregisterExtensions(void* self, QAbstractExtensionFactory* factory, struct seaqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::unregisterExtensions(factory, iid_QString);
}

bool QExtensionManager_override_virtual_extension(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = slot;
	return true;
}

QObject* QExtensionManager_virtualbase_extension(const void* self, QObject* object, struct seaqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	return static_cast<const VirtualQExtensionManager*>(self)->QExtensionManager::extension(object, iid_QString);
}

bool QExtensionManager_override_virtual_event(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QExtensionManager_virtualbase_event(void* self, QEvent* event) {
	return static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::event(event);
}

bool QExtensionManager_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QExtensionManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::eventFilter(watched, event);
}

bool QExtensionManager_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QExtensionManager_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::timerEvent(event);
}

bool QExtensionManager_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QExtensionManager_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::childEvent(event);
}

bool QExtensionManager_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QExtensionManager_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::customEvent(event);
}

bool QExtensionManager_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QExtensionManager_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::connectNotify(*signal);
}

bool QExtensionManager_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QExtensionManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<VirtualQExtensionManager*>(self)->QExtensionManager::disconnectNotify(*signal);
}

QObject* QExtensionManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QExtensionManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QExtensionManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QExtensionManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQExtensionManager* self_cast = dynamic_cast<VirtualQExtensionManager*>( (QExtensionManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QExtensionManager_delete(QExtensionManager* self) {
	delete self;
}

