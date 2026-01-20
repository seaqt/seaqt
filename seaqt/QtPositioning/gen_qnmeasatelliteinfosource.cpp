#include <QChildEvent>
#include <QEvent>
#include <QGeoSatelliteInfo>
#include <QGeoSatelliteInfoSource>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNmeaSatelliteInfoSource>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qnmeasatelliteinfosource.h>
#include "gen_qnmeasatelliteinfosource.h"

#ifdef __cplusplus
extern "C" {
#endif

QMetaObject* miqt_exec_callback_QNmeaSatelliteInfoSource_metaObject(const QNmeaSatelliteInfoSource*, intptr_t);
void* miqt_exec_callback_QNmeaSatelliteInfoSource_metacast(QNmeaSatelliteInfoSource*, intptr_t, const char*);
int miqt_exec_callback_QNmeaSatelliteInfoSource_metacall(QNmeaSatelliteInfoSource*, intptr_t, int, int, void**);
void miqt_exec_callback_QNmeaSatelliteInfoSource_setUpdateInterval(QNmeaSatelliteInfoSource*, intptr_t, int);
int miqt_exec_callback_QNmeaSatelliteInfoSource_minimumUpdateInterval(const QNmeaSatelliteInfoSource*, intptr_t);
int miqt_exec_callback_QNmeaSatelliteInfoSource_error(const QNmeaSatelliteInfoSource*, intptr_t);
bool miqt_exec_callback_QNmeaSatelliteInfoSource_setBackendProperty(QNmeaSatelliteInfoSource*, intptr_t, struct seaqt_string, QVariant*);
QVariant* miqt_exec_callback_QNmeaSatelliteInfoSource_backendProperty(const QNmeaSatelliteInfoSource*, intptr_t, struct seaqt_string);
void miqt_exec_callback_QNmeaSatelliteInfoSource_startUpdates(QNmeaSatelliteInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaSatelliteInfoSource_stopUpdates(QNmeaSatelliteInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaSatelliteInfoSource_requestUpdate(QNmeaSatelliteInfoSource*, intptr_t, int);
int miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource*, intptr_t, const char*, int, struct seaqt_array /* of int */ );
int miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource*, intptr_t, const char*, int, struct seaqt_array /* of QGeoSatelliteInfo* */ , int*);
bool miqt_exec_callback_QNmeaSatelliteInfoSource_event(QNmeaSatelliteInfoSource*, intptr_t, QEvent*);
bool miqt_exec_callback_QNmeaSatelliteInfoSource_eventFilter(QNmeaSatelliteInfoSource*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_timerEvent(QNmeaSatelliteInfoSource*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_childEvent(QNmeaSatelliteInfoSource*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_customEvent(QNmeaSatelliteInfoSource*, intptr_t, QEvent*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_connectNotify(QNmeaSatelliteInfoSource*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_disconnectNotify(QNmeaSatelliteInfoSource*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQNmeaSatelliteInfoSource final : public QNmeaSatelliteInfoSource {
public:

	VirtualQNmeaSatelliteInfoSource(QNmeaSatelliteInfoSource::UpdateMode mode): QNmeaSatelliteInfoSource(mode) {}
	VirtualQNmeaSatelliteInfoSource(QNmeaSatelliteInfoSource::UpdateMode mode, QObject* parent): QNmeaSatelliteInfoSource(mode, parent) {}

	virtual ~VirtualQNmeaSatelliteInfoSource() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (handle__metaObject == 0) {
			return QNmeaSatelliteInfoSource::metaObject();
		}

		QMetaObject* callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_metaObject(this, handle__metaObject);
		return callback_return_value;
	}

	friend QMetaObject* QNmeaSatelliteInfoSource_virtualbase_metaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacast = 0;

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (handle__metacast == 0) {
			return QNmeaSatelliteInfoSource::qt_metacast(param1);
		}

		const char* sigval1 = (const char*) param1;
		void* callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_metacast(this, handle__metacast, sigval1);
		return callback_return_value;
	}

	friend void* QNmeaSatelliteInfoSource_virtualbase_metacast(void* self, const char* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacall = 0;

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (handle__metacall == 0) {
			return QNmeaSatelliteInfoSource::qt_metacall(param1, param2, param3);
		}

		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;
		int callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_metacall(this, handle__metacall, sigval1, sigval2, sigval3);
		return static_cast<int>(callback_return_value);
	}

	friend int QNmeaSatelliteInfoSource_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setUpdateInterval = 0;

	// Subclass to allow providing a Go implementation
	virtual void setUpdateInterval(int msec) override {
		if (handle__setUpdateInterval == 0) {
			QNmeaSatelliteInfoSource::setUpdateInterval(msec);
			return;
		}

		int sigval1 = msec;
		miqt_exec_callback_QNmeaSatelliteInfoSource_setUpdateInterval(this, handle__setUpdateInterval, sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_setUpdateInterval(void* self, int msec);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumUpdateInterval = 0;

	// Subclass to allow providing a Go implementation
	virtual int minimumUpdateInterval() const override {
		if (handle__minimumUpdateInterval == 0) {
			return QNmeaSatelliteInfoSource::minimumUpdateInterval();
		}

		int callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_minimumUpdateInterval(this, handle__minimumUpdateInterval);
		return static_cast<int>(callback_return_value);
	}

	friend int QNmeaSatelliteInfoSource_virtualbase_minimumUpdateInterval(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__error = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoSatelliteInfoSource::Error error() const override {
		if (handle__error == 0) {
			return QNmeaSatelliteInfoSource::error();
		}

		int callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_error(this, handle__error);
		return static_cast<QGeoSatelliteInfoSource::Error>(callback_return_value);
	}

	friend int QNmeaSatelliteInfoSource_virtualbase_error(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setBackendProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
		if (handle__setBackendProperty == 0) {
			return QNmeaSatelliteInfoSource::setBackendProperty(name, value);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct seaqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct seaqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		bool callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_setBackendProperty(this, handle__setBackendProperty, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QNmeaSatelliteInfoSource_virtualbase_setBackendProperty(void* self, struct seaqt_string name, QVariant* value);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__backendProperty = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant backendProperty(const QString& name) const override {
		if (handle__backendProperty == 0) {
			return QNmeaSatelliteInfoSource::backendProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct seaqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct seaqt_string sigval1 = name_ms;
		QVariant* callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_backendProperty(this, handle__backendProperty, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QNmeaSatelliteInfoSource_virtualbase_backendProperty(const void* self, struct seaqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__startUpdates = 0;

	// Subclass to allow providing a Go implementation
	virtual void startUpdates() override {
		if (handle__startUpdates == 0) {
			QNmeaSatelliteInfoSource::startUpdates();
			return;
		}

		miqt_exec_callback_QNmeaSatelliteInfoSource_startUpdates(this, handle__startUpdates);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_startUpdates(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__stopUpdates = 0;

	// Subclass to allow providing a Go implementation
	virtual void stopUpdates() override {
		if (handle__stopUpdates == 0) {
			QNmeaSatelliteInfoSource::stopUpdates();
			return;
		}

		miqt_exec_callback_QNmeaSatelliteInfoSource_stopUpdates(this, handle__stopUpdates);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_stopUpdates(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__requestUpdate = 0;

	// Subclass to allow providing a Go implementation
	virtual void requestUpdate(int timeout) override {
		if (handle__requestUpdate == 0) {
			QNmeaSatelliteInfoSource::requestUpdate(timeout);
			return;
		}

		int sigval1 = timeout;
		miqt_exec_callback_QNmeaSatelliteInfoSource_requestUpdate(this, handle__requestUpdate, sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_requestUpdate(void* self, int timeout);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parseSatellitesInUseFromNmea = 0;

	// Subclass to allow providing a Go implementation
	virtual QGeoSatelliteInfo::SatelliteSystem parseSatellitesInUseFromNmea(const char* data, int size, QList<int>& pnrsInUse) override {
		if (handle__parseSatellitesInUseFromNmea == 0) {
			return QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, size, pnrsInUse);
		}

		const char* sigval1 = (const char*) data;
		int sigval2 = size;
		QList<int>& pnrsInUse_ret = pnrsInUse;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* pnrsInUse_arr = static_cast<int*>(malloc(sizeof(int) * pnrsInUse_ret.length()));
		for (size_t i = 0, e = pnrsInUse_ret.length(); i < e; ++i) {
			pnrsInUse_arr[i] = pnrsInUse_ret[i];
		}
		struct seaqt_array pnrsInUse_out;
		pnrsInUse_out.len = pnrsInUse_ret.length();
		pnrsInUse_out.data = static_cast<void*>(pnrsInUse_arr);
		struct seaqt_array /* of int */  sigval3 = pnrsInUse_out;
		int callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatellitesInUseFromNmea(this, handle__parseSatellitesInUseFromNmea, sigval1, sigval2, sigval3);
		return static_cast<QGeoSatelliteInfo::SatelliteSystem>(callback_return_value);
	}

	friend int QNmeaSatelliteInfoSource_virtualbase_parseSatellitesInUseFromNmea(void* self, const char* data, int size, struct seaqt_array /* of int */  pnrsInUse);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__parseSatelliteInfoFromNmea = 0;

	// Subclass to allow providing a Go implementation
	virtual QNmeaSatelliteInfoSource::SatelliteInfoParseStatus parseSatelliteInfoFromNmea(const char* data, int size, QList<QGeoSatelliteInfo>& infos, QGeoSatelliteInfo::SatelliteSystem& system) override {
		if (handle__parseSatelliteInfoFromNmea == 0) {
			return QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, size, infos, system);
		}

		const char* sigval1 = (const char*) data;
		int sigval2 = size;
		QList<QGeoSatelliteInfo>& infos_ret = infos;
		// Convert QList<> from C++ memory to manually-managed C memory
		QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * infos_ret.length()));
		for (size_t i = 0, e = infos_ret.length(); i < e; ++i) {
			infos_arr[i] = new QGeoSatelliteInfo(infos_ret[i]);
		}
		struct seaqt_array infos_out;
		infos_out.len = infos_ret.length();
		infos_out.data = static_cast<void*>(infos_arr);
		struct seaqt_array /* of QGeoSatelliteInfo* */  sigval3 = infos_out;
		QGeoSatelliteInfo::SatelliteSystem& system_ret = system;
		int* sigval4 = reinterpret_cast<int*>(&system_ret);
		int callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatelliteInfoFromNmea(this, handle__parseSatelliteInfoFromNmea, sigval1, sigval2, sigval3, sigval4);
		return static_cast<QNmeaSatelliteInfoSource::SatelliteInfoParseStatus>(callback_return_value);
	}

	friend int QNmeaSatelliteInfoSource_virtualbase_parseSatelliteInfoFromNmea(void* self, const char* data, int size, struct seaqt_array /* of QGeoSatelliteInfo* */  infos, int* system);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QNmeaSatelliteInfoSource::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QNmeaSatelliteInfoSource_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QNmeaSatelliteInfoSource::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QNmeaSatelliteInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QNmeaSatelliteInfoSource::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QNmeaSatelliteInfoSource_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QNmeaSatelliteInfoSource::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QNmeaSatelliteInfoSource_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QNmeaSatelliteInfoSource::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QNmeaSatelliteInfoSource_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QNmeaSatelliteInfoSource::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNmeaSatelliteInfoSource_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QNmeaSatelliteInfoSource::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNmeaSatelliteInfoSource_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QNmeaSatelliteInfoSource_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int satelliteError);
	friend QObject* QNmeaSatelliteInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QNmeaSatelliteInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QNmeaSatelliteInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QNmeaSatelliteInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new(int mode) {
	return new (std::nothrow) VirtualQNmeaSatelliteInfoSource(static_cast<QNmeaSatelliteInfoSource::UpdateMode>(mode));
}

QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new2(int mode, QObject* parent) {
	return new (std::nothrow) VirtualQNmeaSatelliteInfoSource(static_cast<QNmeaSatelliteInfoSource::UpdateMode>(mode), parent);
}

void QNmeaSatelliteInfoSource_virtbase(QNmeaSatelliteInfoSource* src, QGeoSatelliteInfoSource** outptr_QGeoSatelliteInfoSource) {
	*outptr_QGeoSatelliteInfoSource = static_cast<QGeoSatelliteInfoSource*>(src);
}

QMetaObject* QNmeaSatelliteInfoSource_metaObject(const QNmeaSatelliteInfoSource* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNmeaSatelliteInfoSource_metacast(QNmeaSatelliteInfoSource* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QNmeaSatelliteInfoSource_metacall(QNmeaSatelliteInfoSource* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct seaqt_string QNmeaSatelliteInfoSource_tr(const char* s) {
	QString _ret = QNmeaSatelliteInfoSource::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QNmeaSatelliteInfoSource_updateMode(const QNmeaSatelliteInfoSource* self) {
	QNmeaSatelliteInfoSource::UpdateMode _ret = self->updateMode();
	return static_cast<int>(_ret);
}

void QNmeaSatelliteInfoSource_setDevice(QNmeaSatelliteInfoSource* self, QIODevice* source) {
	self->setDevice(source);
}

QIODevice* QNmeaSatelliteInfoSource_device(const QNmeaSatelliteInfoSource* self) {
	return self->device();
}

void QNmeaSatelliteInfoSource_setUpdateInterval(QNmeaSatelliteInfoSource* self, int msec) {
	self->setUpdateInterval(static_cast<int>(msec));
}

int QNmeaSatelliteInfoSource_minimumUpdateInterval(const QNmeaSatelliteInfoSource* self) {
	return self->minimumUpdateInterval();
}

int QNmeaSatelliteInfoSource_error(const QNmeaSatelliteInfoSource* self) {
	QGeoSatelliteInfoSource::Error _ret = self->error();
	return static_cast<int>(_ret);
}

bool QNmeaSatelliteInfoSource_setBackendProperty(QNmeaSatelliteInfoSource* self, struct seaqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->setBackendProperty(name_QString, *value);
}

QVariant* QNmeaSatelliteInfoSource_backendProperty(const QNmeaSatelliteInfoSource* self, struct seaqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->backendProperty(name_QString));
}

void QNmeaSatelliteInfoSource_startUpdates(QNmeaSatelliteInfoSource* self) {
	self->startUpdates();
}

void QNmeaSatelliteInfoSource_stopUpdates(QNmeaSatelliteInfoSource* self) {
	self->stopUpdates();
}

void QNmeaSatelliteInfoSource_requestUpdate(QNmeaSatelliteInfoSource* self, int timeout) {
	self->requestUpdate(static_cast<int>(timeout));
}

struct seaqt_string QNmeaSatelliteInfoSource_tr2(const char* s, const char* c) {
	QString _ret = QNmeaSatelliteInfoSource::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct seaqt_string QNmeaSatelliteInfoSource_tr3(const char* s, const char* c, int n) {
	QString _ret = QNmeaSatelliteInfoSource::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const QMetaObject* QNmeaSatelliteInfoSource_staticMetaObject() { return &QNmeaSatelliteInfoSource::staticMetaObject; }
bool QNmeaSatelliteInfoSource_override_virtual_metaObject(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metaObject = slot;
	return true;
}

QMetaObject* QNmeaSatelliteInfoSource_virtualbase_metaObject(const void* self) {
	return (QMetaObject*) static_cast<const VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::metaObject();
}

bool QNmeaSatelliteInfoSource_override_virtual_metacast(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metacast = slot;
	return true;
}

void* QNmeaSatelliteInfoSource_virtualbase_metacast(void* self, const char* param1) {
	return static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::qt_metacast(param1);
}

bool QNmeaSatelliteInfoSource_override_virtual_metacall(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metacall = slot;
	return true;
}

int QNmeaSatelliteInfoSource_virtualbase_metacall(void* self, int param1, int param2, void** param3) {
	return static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

bool QNmeaSatelliteInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setUpdateInterval = slot;
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_setUpdateInterval(void* self, int msec) {
	static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::setUpdateInterval(static_cast<int>(msec));
}

bool QNmeaSatelliteInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumUpdateInterval = slot;
	return true;
}

int QNmeaSatelliteInfoSource_virtualbase_minimumUpdateInterval(const void* self) {
	return static_cast<const VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::minimumUpdateInterval();
}

bool QNmeaSatelliteInfoSource_override_virtual_error(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__error = slot;
	return true;
}

int QNmeaSatelliteInfoSource_virtualbase_error(const void* self) {
	VirtualQNmeaSatelliteInfoSource::Error _ret = static_cast<const VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::error();
	return static_cast<int>(_ret);
}

bool QNmeaSatelliteInfoSource_override_virtual_setBackendProperty(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setBackendProperty = slot;
	return true;
}

bool QNmeaSatelliteInfoSource_virtualbase_setBackendProperty(void* self, struct seaqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::setBackendProperty(name_QString, *value);
}

bool QNmeaSatelliteInfoSource_override_virtual_backendProperty(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__backendProperty = slot;
	return true;
}

QVariant* QNmeaSatelliteInfoSource_virtualbase_backendProperty(const void* self, struct seaqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(static_cast<const VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::backendProperty(name_QString));
}

bool QNmeaSatelliteInfoSource_override_virtual_startUpdates(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startUpdates = slot;
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_startUpdates(void* self) {
	static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::startUpdates();
}

bool QNmeaSatelliteInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stopUpdates = slot;
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_stopUpdates(void* self) {
	static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::stopUpdates();
}

bool QNmeaSatelliteInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__requestUpdate = slot;
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_requestUpdate(void* self, int timeout) {
	static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::requestUpdate(static_cast<int>(timeout));
}

bool QNmeaSatelliteInfoSource_override_virtual_parseSatellitesInUseFromNmea(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parseSatellitesInUseFromNmea = slot;
	return true;
}

int QNmeaSatelliteInfoSource_virtualbase_parseSatellitesInUseFromNmea(void* self, const char* data, int size, struct seaqt_array /* of int */  pnrsInUse) {
	QList<int> pnrsInUse_QList;
	pnrsInUse_QList.reserve(pnrsInUse.len);
	int* pnrsInUse_arr = static_cast<int*>(pnrsInUse.data);
	for(size_t i = 0; i < pnrsInUse.len; ++i) {
		pnrsInUse_QList.push_back(static_cast<int>(pnrsInUse_arr[i]));
	}
	QGeoSatelliteInfo::SatelliteSystem _ret = static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, static_cast<int>(size), pnrsInUse_QList);
	return static_cast<int>(_ret);
}

bool QNmeaSatelliteInfoSource_override_virtual_parseSatelliteInfoFromNmea(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parseSatelliteInfoFromNmea = slot;
	return true;
}

int QNmeaSatelliteInfoSource_virtualbase_parseSatelliteInfoFromNmea(void* self, const char* data, int size, struct seaqt_array /* of QGeoSatelliteInfo* */  infos, int* system) {
	QList<QGeoSatelliteInfo> infos_QList;
	infos_QList.reserve(infos.len);
	QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(infos.data);
	for(size_t i = 0; i < infos.len; ++i) {
		infos_QList.push_back(*(infos_arr[i]));
	}
	VirtualQNmeaSatelliteInfoSource::SatelliteInfoParseStatus _ret = static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, static_cast<int>(size), infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system));
	return static_cast<int>(_ret);
}

bool QNmeaSatelliteInfoSource_override_virtual_event(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QNmeaSatelliteInfoSource_virtualbase_event(void* self, QEvent* event) {
	return static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::event(event);
}

bool QNmeaSatelliteInfoSource_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QNmeaSatelliteInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::eventFilter(watched, event);
}

bool QNmeaSatelliteInfoSource_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::timerEvent(event);
}

bool QNmeaSatelliteInfoSource_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::childEvent(event);
}

bool QNmeaSatelliteInfoSource_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::customEvent(event);
}

bool QNmeaSatelliteInfoSource_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::connectNotify(*signal);
}

bool QNmeaSatelliteInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<VirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::disconnectNotify(*signal);
}

void QNmeaSatelliteInfoSource_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int satelliteError) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setError(static_cast<VirtualQNmeaSatelliteInfoSource::Error>(satelliteError));
}

QObject* QNmeaSatelliteInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QNmeaSatelliteInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QNmeaSatelliteInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QNmeaSatelliteInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<VirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QNmeaSatelliteInfoSource_delete(QNmeaSatelliteInfoSource* self) {
	delete self;
}

