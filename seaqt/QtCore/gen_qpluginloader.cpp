#include <QChildEvent>
#include <QEvent>
#include <QJsonObject>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPluginLoader>
#include <QStaticPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpluginloader.h>
#include "gen_qpluginloader.h"

#ifdef __cplusplus
extern "C" {
#endif

QMetaObject* miqt_exec_callback_QPluginLoader_metaObject(const QPluginLoader*, intptr_t);
void* miqt_exec_callback_QPluginLoader_metacast(QPluginLoader*, intptr_t, const char*);
int miqt_exec_callback_QPluginLoader_metacall(QPluginLoader*, intptr_t, int, int, void**);
bool miqt_exec_callback_QPluginLoader_event(QPluginLoader*, intptr_t, QEvent*);
bool miqt_exec_callback_QPluginLoader_eventFilter(QPluginLoader*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPluginLoader_timerEvent(QPluginLoader*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPluginLoader_childEvent(QPluginLoader*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPluginLoader_customEvent(QPluginLoader*, intptr_t, QEvent*);
void miqt_exec_callback_QPluginLoader_connectNotify(QPluginLoader*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPluginLoader_disconnectNotify(QPluginLoader*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQPluginLoader final : public QPluginLoader {
public:

	VirtualQPluginLoader(): QPluginLoader() {};
	VirtualQPluginLoader(const QString& fileName): QPluginLoader(fileName) {};
	VirtualQPluginLoader(QObject* parent): QPluginLoader(parent) {};
	VirtualQPluginLoader(const QString& fileName, QObject* parent): QPluginLoader(fileName, parent) {};

	virtual ~VirtualQPluginLoader() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (handle__metaObject == 0) {
			return QPluginLoader::metaObject();
		}
		

		QMetaObject* callback_return_value = miqt_exec_callback_QPluginLoader_metaObject(this, handle__metaObject);

		return callback_return_value;
	}

	friend QMetaObject* QPluginLoader_virtualbase_metaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacast = 0;

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (handle__metacast == 0) {
			return QPluginLoader::qt_metacast(param1);
		}
		
		const char* sigval1 = (const char*) param1;

		void* callback_return_value = miqt_exec_callback_QPluginLoader_metacast(this, handle__metacast, sigval1);

		return callback_return_value;
	}

	friend void* QPluginLoader_virtualbase_metacast(void* self, const char* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacall = 0;

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (handle__metacall == 0) {
			return QPluginLoader::qt_metacall(param1, param2, param3);
		}
		
		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;

		int callback_return_value = miqt_exec_callback_QPluginLoader_metacall(this, handle__metacall, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	friend int QPluginLoader_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QPluginLoader::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QPluginLoader_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QPluginLoader_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QPluginLoader::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QPluginLoader_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QPluginLoader_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QPluginLoader::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QPluginLoader_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QPluginLoader_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QPluginLoader::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QPluginLoader_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QPluginLoader_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QPluginLoader::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QPluginLoader_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QPluginLoader_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QPluginLoader::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPluginLoader_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QPluginLoader_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QPluginLoader::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QPluginLoader_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QPluginLoader_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPluginLoader_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPluginLoader_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPluginLoader_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPluginLoader_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPluginLoader* QPluginLoader_new() {
	return new VirtualQPluginLoader();
}

QPluginLoader* QPluginLoader_new2(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new VirtualQPluginLoader(fileName_QString);
}

QPluginLoader* QPluginLoader_new3(QObject* parent) {
	return new VirtualQPluginLoader(parent);
}

QPluginLoader* QPluginLoader_new4(struct miqt_string fileName, QObject* parent) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new VirtualQPluginLoader(fileName_QString, parent);
}

void QPluginLoader_virtbase(QPluginLoader* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QPluginLoader_metaObject(const QPluginLoader* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPluginLoader_metacast(QPluginLoader* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QPluginLoader_metacall(QPluginLoader* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct miqt_string QPluginLoader_tr(const char* s) {
	QString _ret = QPluginLoader::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPluginLoader_trUtf8(const char* s) {
	QString _ret = QPluginLoader::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QPluginLoader_instance(QPluginLoader* self) {
	return self->instance();
}

QJsonObject* QPluginLoader_metaData(const QPluginLoader* self) {
	return new QJsonObject(self->metaData());
}

struct miqt_array /* of QObject* */  QPluginLoader_staticInstances() {
	QObjectList _ret = QPluginLoader::staticInstances();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QStaticPlugin* */  QPluginLoader_staticPlugins() {
	QVector<QStaticPlugin> _ret = QPluginLoader::staticPlugins();
	// Convert QList<> from C++ memory to manually-managed C memory
	QStaticPlugin** _arr = static_cast<QStaticPlugin**>(malloc(sizeof(QStaticPlugin*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QStaticPlugin(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QPluginLoader_load(QPluginLoader* self) {
	return self->load();
}

bool QPluginLoader_unload(QPluginLoader* self) {
	return self->unload();
}

bool QPluginLoader_isLoaded(const QPluginLoader* self) {
	return self->isLoaded();
}

void QPluginLoader_setFileName(QPluginLoader* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setFileName(fileName_QString);
}

struct miqt_string QPluginLoader_fileName(const QPluginLoader* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPluginLoader_errorString(const QPluginLoader* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPluginLoader_setLoadHints(QPluginLoader* self, int loadHints) {
	self->setLoadHints(static_cast<QLibrary::LoadHints>(loadHints));
}

int QPluginLoader_loadHints(const QPluginLoader* self) {
	QLibrary::LoadHints _ret = self->loadHints();
	return static_cast<int>(_ret);
}

struct miqt_string QPluginLoader_tr2(const char* s, const char* c) {
	QString _ret = QPluginLoader::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPluginLoader_tr3(const char* s, const char* c, int n) {
	QString _ret = QPluginLoader::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPluginLoader_trUtf82(const char* s, const char* c) {
	QString _ret = QPluginLoader::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPluginLoader_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPluginLoader::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPluginLoader_override_virtual_metaObject(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metaObject = slot;
	return true;
}

QMetaObject* QPluginLoader_virtualbase_metaObject(const void* self) {

	return (QMetaObject*) ( (const VirtualQPluginLoader*)(self) )->QPluginLoader::metaObject();

}

bool QPluginLoader_override_virtual_metacast(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacast = slot;
	return true;
}

void* QPluginLoader_virtualbase_metacast(void* self, const char* param1) {

	return ( (VirtualQPluginLoader*)(self) )->QPluginLoader::qt_metacast(param1);

}

bool QPluginLoader_override_virtual_metacall(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacall = slot;
	return true;
}

int QPluginLoader_virtualbase_metacall(void* self, int param1, int param2, void** param3) {

	return ( (VirtualQPluginLoader*)(self) )->QPluginLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);

}

bool QPluginLoader_override_virtual_event(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QPluginLoader_virtualbase_event(void* self, QEvent* event) {

	return ( (VirtualQPluginLoader*)(self) )->QPluginLoader::event(event);

}

bool QPluginLoader_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QPluginLoader_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (VirtualQPluginLoader*)(self) )->QPluginLoader::eventFilter(watched, event);

}

bool QPluginLoader_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QPluginLoader_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (VirtualQPluginLoader*)(self) )->QPluginLoader::timerEvent(event);

}

bool QPluginLoader_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QPluginLoader_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (VirtualQPluginLoader*)(self) )->QPluginLoader::childEvent(event);

}

bool QPluginLoader_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QPluginLoader_virtualbase_customEvent(void* self, QEvent* event) {

	( (VirtualQPluginLoader*)(self) )->QPluginLoader::customEvent(event);

}

bool QPluginLoader_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QPluginLoader_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQPluginLoader*)(self) )->QPluginLoader::connectNotify(*signal);

}

bool QPluginLoader_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QPluginLoader_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQPluginLoader*)(self) )->QPluginLoader::disconnectNotify(*signal);

}

const QMetaObject* QPluginLoader_staticMetaObject() { return &QPluginLoader::staticMetaObject; }
QObject* QPluginLoader_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QPluginLoader_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QPluginLoader_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QPluginLoader_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQPluginLoader* self_cast = dynamic_cast<VirtualQPluginLoader*>( (QPluginLoader*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QPluginLoader_delete(QPluginLoader* self) {
	delete self;
}

