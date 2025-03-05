#include <QAbstractEventDispatcher>
#include <QAbstractNativeEventFilter>
#include <QChildEvent>
#include <QCoreApplication>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QTranslator>
#include <qcoreapplication.h>
#include "gen_qcoreapplication.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQCoreApplication final : public QCoreApplication {
	struct QCoreApplication_VTable* vtbl;
public:

	VirtualQCoreApplication(struct QCoreApplication_VTable* vtbl, int& argc, char** argv): QCoreApplication(argc, argv), vtbl(vtbl) {};
	VirtualQCoreApplication(struct QCoreApplication_VTable* vtbl, int& argc, char** argv, int param3): QCoreApplication(argc, argv, param3), vtbl(vtbl) {};

	virtual ~VirtualQCoreApplication() override { if(vtbl->destructor) vtbl->destructor(vtbl, this); }

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (vtbl->metaObject == 0) {
			return QCoreApplication::metaObject();
		}


		QMetaObject* callback_return_value = vtbl->metaObject(vtbl, this);

		return callback_return_value;
	}

	friend QMetaObject* QCoreApplication_virtualbase_metaObject(const void* self);

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (vtbl->metacast == 0) {
			return QCoreApplication::qt_metacast(param1);
		}

		const char* sigval1 = (const char*) param1;

		void* callback_return_value = vtbl->metacast(vtbl, this, sigval1);

		return callback_return_value;
	}

	friend void* QCoreApplication_virtualbase_metacast(void* self, const char* param1);

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (vtbl->metacall == 0) {
			return QCoreApplication::qt_metacall(param1, param2, param3);
		}

		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;

		int callback_return_value = vtbl->metacall(vtbl, this, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	friend int QCoreApplication_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// Subclass to allow providing a Go implementation
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (vtbl->notify == 0) {
			return QCoreApplication::notify(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = vtbl->notify(vtbl, this, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QCoreApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2);

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (vtbl->event == 0) {
			return QCoreApplication::event(param1);
		}

		QEvent* sigval1 = param1;

		bool callback_return_value = vtbl->event(vtbl, this, sigval1);

		return callback_return_value;
	}

	friend bool QCoreApplication_virtualbase_event(void* self, QEvent* param1);

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (vtbl->eventFilter == 0) {
			return QCoreApplication::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = vtbl->eventFilter(vtbl, this, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QCoreApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (vtbl->timerEvent == 0) {
			QCoreApplication::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;

		vtbl->timerEvent(vtbl, this, sigval1);

	}

	friend void QCoreApplication_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (vtbl->childEvent == 0) {
			QCoreApplication::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;

		vtbl->childEvent(vtbl, this, sigval1);

	}

	friend void QCoreApplication_virtualbase_childEvent(void* self, QChildEvent* event);

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (vtbl->customEvent == 0) {
			QCoreApplication::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;

		vtbl->customEvent(vtbl, this, sigval1);

	}

	friend void QCoreApplication_virtualbase_customEvent(void* self, QEvent* event);

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (vtbl->connectNotify == 0) {
			QCoreApplication::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		vtbl->connectNotify(vtbl, this, sigval1);

	}

	friend void QCoreApplication_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (vtbl->disconnectNotify == 0) {
			QCoreApplication::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		vtbl->disconnectNotify(vtbl, this, sigval1);

	}

	friend void QCoreApplication_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QCoreApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCoreApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCoreApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCoreApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCoreApplication* QCoreApplication_new(struct QCoreApplication_VTable* vtbl, int* argc, char** argv) {
	return new VirtualQCoreApplication(vtbl, static_cast<int&>(*argc), argv);
}

QCoreApplication* QCoreApplication_new2(struct QCoreApplication_VTable* vtbl, int* argc, char** argv, int param3) {
	return new VirtualQCoreApplication(vtbl, static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

void QCoreApplication_virtbase(QCoreApplication* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCoreApplication_metaObject(const QCoreApplication* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCoreApplication_metacast(QCoreApplication* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QCoreApplication_metacall(QCoreApplication* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct miqt_string QCoreApplication_tr(const char* s) {
	QString _ret = QCoreApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_trUtf8(const char* s) {
	QString _ret = QCoreApplication::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCoreApplication_arguments() {
	QStringList _ret = QCoreApplication::arguments();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QCoreApplication_setAttribute(int attribute) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

bool QCoreApplication_testAttribute(int attribute) {
	return QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

void QCoreApplication_setOrganizationDomain(struct miqt_string orgDomain) {
	QString orgDomain_QString = QString::fromUtf8(orgDomain.data, orgDomain.len);
	QCoreApplication::setOrganizationDomain(orgDomain_QString);
}

struct miqt_string QCoreApplication_organizationDomain() {
	QString _ret = QCoreApplication::organizationDomain();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setOrganizationName(struct miqt_string orgName) {
	QString orgName_QString = QString::fromUtf8(orgName.data, orgName.len);
	QCoreApplication::setOrganizationName(orgName_QString);
}

struct miqt_string QCoreApplication_organizationName() {
	QString _ret = QCoreApplication::organizationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setApplicationName(struct miqt_string application) {
	QString application_QString = QString::fromUtf8(application.data, application.len);
	QCoreApplication::setApplicationName(application_QString);
}

struct miqt_string QCoreApplication_applicationName() {
	QString _ret = QCoreApplication::applicationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setApplicationVersion(struct miqt_string version) {
	QString version_QString = QString::fromUtf8(version.data, version.len);
	QCoreApplication::setApplicationVersion(version_QString);
}

struct miqt_string QCoreApplication_applicationVersion() {
	QString _ret = QCoreApplication::applicationVersion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setSetuidAllowed(bool allow) {
	QCoreApplication::setSetuidAllowed(allow);
}

bool QCoreApplication_isSetuidAllowed() {
	return QCoreApplication::isSetuidAllowed();
}

QCoreApplication* QCoreApplication_instance() {
	return QCoreApplication::instance();
}

int QCoreApplication_exec() {
	return QCoreApplication::exec();
}

void QCoreApplication_processEvents() {
	QCoreApplication::processEvents();
}

void QCoreApplication_processEvents2(int flags, int maxtime) {
	QCoreApplication::processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags), static_cast<int>(maxtime));
}

void QCoreApplication_exit() {
	QCoreApplication::exit();
}

bool QCoreApplication_sendEvent(QObject* receiver, QEvent* event) {
	return QCoreApplication::sendEvent(receiver, event);
}

void QCoreApplication_postEvent(QObject* receiver, QEvent* event) {
	QCoreApplication::postEvent(receiver, event);
}

void QCoreApplication_sendPostedEvents() {
	QCoreApplication::sendPostedEvents();
}

void QCoreApplication_removePostedEvents(QObject* receiver) {
	QCoreApplication::removePostedEvents(receiver);
}

bool QCoreApplication_hasPendingEvents() {
	return QCoreApplication::hasPendingEvents();
}

QAbstractEventDispatcher* QCoreApplication_eventDispatcher() {
	return QCoreApplication::eventDispatcher();
}

void QCoreApplication_setEventDispatcher(QAbstractEventDispatcher* eventDispatcher) {
	QCoreApplication::setEventDispatcher(eventDispatcher);
}

bool QCoreApplication_notify(QCoreApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

bool QCoreApplication_startingUp() {
	return QCoreApplication::startingUp();
}

bool QCoreApplication_closingDown() {
	return QCoreApplication::closingDown();
}

struct miqt_string QCoreApplication_applicationDirPath() {
	QString _ret = QCoreApplication::applicationDirPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_applicationFilePath() {
	QString _ret = QCoreApplication::applicationFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QCoreApplication_applicationPid() {
	qint64 _ret = QCoreApplication::applicationPid();
	return static_cast<long long>(_ret);
}

void QCoreApplication_setLibraryPaths(struct miqt_array /* of struct miqt_string */  libraryPaths) {
	QStringList libraryPaths_QList;
	libraryPaths_QList.reserve(libraryPaths.len);
	struct miqt_string* libraryPaths_arr = static_cast<struct miqt_string*>(libraryPaths.data);
	for(size_t i = 0; i < libraryPaths.len; ++i) {
		QString libraryPaths_arr_i_QString = QString::fromUtf8(libraryPaths_arr[i].data, libraryPaths_arr[i].len);
		libraryPaths_QList.push_back(libraryPaths_arr_i_QString);
	}
	QCoreApplication::setLibraryPaths(libraryPaths_QList);
}

struct miqt_array /* of struct miqt_string */  QCoreApplication_libraryPaths() {
	QStringList _ret = QCoreApplication::libraryPaths();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QCoreApplication_addLibraryPath(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QCoreApplication::addLibraryPath(param1_QString);
}

void QCoreApplication_removeLibraryPath(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QCoreApplication::removeLibraryPath(param1_QString);
}

bool QCoreApplication_installTranslator(QTranslator* messageFile) {
	return QCoreApplication::installTranslator(messageFile);
}

bool QCoreApplication_removeTranslator(QTranslator* messageFile) {
	return QCoreApplication::removeTranslator(messageFile);
}

struct miqt_string QCoreApplication_translate(const char* context, const char* key) {
	QString _ret = QCoreApplication::translate(context, key);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_flush() {
	QCoreApplication::flush();
}

void QCoreApplication_installNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QCoreApplication_removeNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

bool QCoreApplication_isQuitLockEnabled() {
	return QCoreApplication::isQuitLockEnabled();
}

void QCoreApplication_setQuitLockEnabled(bool enabled) {
	QCoreApplication::setQuitLockEnabled(enabled);
}

void QCoreApplication_quit() {
	QCoreApplication::quit();
}

void QCoreApplication_organizationNameChanged(QCoreApplication* self) {
	self->organizationNameChanged();
}

void QCoreApplication_connect_organizationNameChanged(QCoreApplication* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t);
		void operator()() {
			callback(slot);
		}
	};
	VirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationNameChanged), self, local_caller{slot, callback, release});
}

void QCoreApplication_organizationDomainChanged(QCoreApplication* self) {
	self->organizationDomainChanged();
}

void QCoreApplication_connect_organizationDomainChanged(QCoreApplication* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t);
		void operator()() {
			callback(slot);
		}
	};
	VirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationDomainChanged), self, local_caller{slot, callback, release});
}

void QCoreApplication_applicationNameChanged(QCoreApplication* self) {
	self->applicationNameChanged();
}

void QCoreApplication_connect_applicationNameChanged(QCoreApplication* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t);
		void operator()() {
			callback(slot);
		}
	};
	VirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationNameChanged), self, local_caller{slot, callback, release});
}

void QCoreApplication_applicationVersionChanged(QCoreApplication* self) {
	self->applicationVersionChanged();
}

void QCoreApplication_connect_applicationVersionChanged(QCoreApplication* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t);
		void operator()() {
			callback(slot);
		}
	};
	VirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationVersionChanged), self, local_caller{slot, callback, release});
}

struct miqt_string QCoreApplication_tr2(const char* s, const char* c) {
	QString _ret = QCoreApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_tr3(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_trUtf82(const char* s, const char* c) {
	QString _ret = QCoreApplication::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setAttribute2(int attribute, bool on) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute), on);
}

void QCoreApplication_processEvents1(int flags) {
	QCoreApplication::processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QCoreApplication_exit1(int retcode) {
	QCoreApplication::exit(static_cast<int>(retcode));
}

void QCoreApplication_postEvent3(QObject* receiver, QEvent* event, int priority) {
	QCoreApplication::postEvent(receiver, event, static_cast<int>(priority));
}

void QCoreApplication_sendPostedEvents1(QObject* receiver) {
	QCoreApplication::sendPostedEvents(receiver);
}

void QCoreApplication_sendPostedEvents2(QObject* receiver, int event_type) {
	QCoreApplication::sendPostedEvents(receiver, static_cast<int>(event_type));
}

void QCoreApplication_removePostedEvents2(QObject* receiver, int eventType) {
	QCoreApplication::removePostedEvents(receiver, static_cast<int>(eventType));
}

struct miqt_string QCoreApplication_translate3(const char* context, const char* key, const char* disambiguation) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_translate4(const char* context, const char* key, const char* disambiguation, int n) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMetaObject* QCoreApplication_virtualbase_metaObject(const void* self) {

	return (QMetaObject*) ( (const VirtualQCoreApplication*)(self) )->QCoreApplication::metaObject();

}

void* QCoreApplication_virtualbase_metacast(void* self, const char* param1) {

	return ( (VirtualQCoreApplication*)(self) )->QCoreApplication::qt_metacast(param1);

}

int QCoreApplication_virtualbase_metacall(void* self, int param1, int param2, void** param3) {

	return ( (VirtualQCoreApplication*)(self) )->QCoreApplication::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);

}

bool QCoreApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2) {

	return ( (VirtualQCoreApplication*)(self) )->QCoreApplication::notify(param1, param2);

}

bool QCoreApplication_virtualbase_event(void* self, QEvent* param1) {

	return ( (VirtualQCoreApplication*)(self) )->QCoreApplication::event(param1);

}

bool QCoreApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (VirtualQCoreApplication*)(self) )->QCoreApplication::eventFilter(watched, event);

}

void QCoreApplication_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (VirtualQCoreApplication*)(self) )->QCoreApplication::timerEvent(event);

}

void QCoreApplication_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (VirtualQCoreApplication*)(self) )->QCoreApplication::childEvent(event);

}

void QCoreApplication_virtualbase_customEvent(void* self, QEvent* event) {

	( (VirtualQCoreApplication*)(self) )->QCoreApplication::customEvent(event);

}

void QCoreApplication_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQCoreApplication*)(self) )->QCoreApplication::connectNotify(*signal);

}

void QCoreApplication_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQCoreApplication*)(self) )->QCoreApplication::disconnectNotify(*signal);

}

const QMetaObject* QCoreApplication_staticMetaObject() { return &QCoreApplication::staticMetaObject; }
QObject* QCoreApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQCoreApplication* self_cast = dynamic_cast<VirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QCoreApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQCoreApplication* self_cast = dynamic_cast<VirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QCoreApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQCoreApplication* self_cast = dynamic_cast<VirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QCoreApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQCoreApplication* self_cast = dynamic_cast<VirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QCoreApplication_delete(QCoreApplication* self) {
	delete self;
}

