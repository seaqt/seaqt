#include <QAction>
#include <QActionGroup>
#include <QChildEvent>
#include <QDir>
#include <QEvent>
#include <QIODevice>
#include <QLayout>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUiLoader>
#include <QWidget>
#include <quiloader.h>
#include "gen_quiloader.h"

#ifdef __cplusplus
extern "C" {
#endif

QMetaObject* miqt_exec_callback_QUiLoader_metaObject(const QUiLoader*, intptr_t);
void* miqt_exec_callback_QUiLoader_metacast(QUiLoader*, intptr_t, const char*);
int miqt_exec_callback_QUiLoader_metacall(QUiLoader*, intptr_t, int, int, void**);
QWidget* miqt_exec_callback_QUiLoader_createWidget(QUiLoader*, intptr_t, struct seaqt_string, QWidget*, struct seaqt_string);
QLayout* miqt_exec_callback_QUiLoader_createLayout(QUiLoader*, intptr_t, struct seaqt_string, QObject*, struct seaqt_string);
QActionGroup* miqt_exec_callback_QUiLoader_createActionGroup(QUiLoader*, intptr_t, QObject*, struct seaqt_string);
QAction* miqt_exec_callback_QUiLoader_createAction(QUiLoader*, intptr_t, QObject*, struct seaqt_string);
bool miqt_exec_callback_QUiLoader_event(QUiLoader*, intptr_t, QEvent*);
bool miqt_exec_callback_QUiLoader_eventFilter(QUiLoader*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QUiLoader_timerEvent(QUiLoader*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QUiLoader_childEvent(QUiLoader*, intptr_t, QChildEvent*);
void miqt_exec_callback_QUiLoader_customEvent(QUiLoader*, intptr_t, QEvent*);
void miqt_exec_callback_QUiLoader_connectNotify(QUiLoader*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QUiLoader_disconnectNotify(QUiLoader*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQUiLoader final : public QUiLoader {
public:

	VirtualQUiLoader(): QUiLoader() {}
	VirtualQUiLoader(QObject* parent): QUiLoader(parent) {}

	virtual ~VirtualQUiLoader() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (handle__metaObject == 0) {
			return QUiLoader::metaObject();
		}

		QMetaObject* callback_return_value = miqt_exec_callback_QUiLoader_metaObject(this, handle__metaObject);
		return callback_return_value;
	}

	friend QMetaObject* QUiLoader_virtualbase_metaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacast = 0;

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (handle__metacast == 0) {
			return QUiLoader::qt_metacast(param1);
		}

		const char* sigval1 = (const char*) param1;
		void* callback_return_value = miqt_exec_callback_QUiLoader_metacast(this, handle__metacast, sigval1);
		return callback_return_value;
	}

	friend void* QUiLoader_virtualbase_metacast(void* self, const char* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacall = 0;

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (handle__metacall == 0) {
			return QUiLoader::qt_metacall(param1, param2, param3);
		}

		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;
		int callback_return_value = miqt_exec_callback_QUiLoader_metacall(this, handle__metacall, sigval1, sigval2, sigval3);
		return static_cast<int>(callback_return_value);
	}

	friend int QUiLoader_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createWidget = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createWidget(const QString& className, QWidget* parent, const QString& name) override {
		if (handle__createWidget == 0) {
			return QUiLoader::createWidget(className, parent, name);
		}

		const QString className_ret = className;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray className_b = className_ret.toUtf8();
		struct seaqt_string className_ms;
		className_ms.len = className_b.length();
		className_ms.data = static_cast<char*>(malloc(className_ms.len));
		memcpy(className_ms.data, className_b.data(), className_ms.len);
		struct seaqt_string sigval1 = className_ms;
		QWidget* sigval2 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct seaqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct seaqt_string sigval3 = name_ms;
		QWidget* callback_return_value = miqt_exec_callback_QUiLoader_createWidget(this, handle__createWidget, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QWidget* QUiLoader_virtualbase_createWidget(void* self, struct seaqt_string className, QWidget* parent, struct seaqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createLayout = 0;

	// Subclass to allow providing a Go implementation
	virtual QLayout* createLayout(const QString& className, QObject* parent, const QString& name) override {
		if (handle__createLayout == 0) {
			return QUiLoader::createLayout(className, parent, name);
		}

		const QString className_ret = className;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray className_b = className_ret.toUtf8();
		struct seaqt_string className_ms;
		className_ms.len = className_b.length();
		className_ms.data = static_cast<char*>(malloc(className_ms.len));
		memcpy(className_ms.data, className_b.data(), className_ms.len);
		struct seaqt_string sigval1 = className_ms;
		QObject* sigval2 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct seaqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct seaqt_string sigval3 = name_ms;
		QLayout* callback_return_value = miqt_exec_callback_QUiLoader_createLayout(this, handle__createLayout, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QLayout* QUiLoader_virtualbase_createLayout(void* self, struct seaqt_string className, QObject* parent, struct seaqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createActionGroup = 0;

	// Subclass to allow providing a Go implementation
	virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
		if (handle__createActionGroup == 0) {
			return QUiLoader::createActionGroup(parent, name);
		}

		QObject* sigval1 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct seaqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct seaqt_string sigval2 = name_ms;
		QActionGroup* callback_return_value = miqt_exec_callback_QUiLoader_createActionGroup(this, handle__createActionGroup, sigval1, sigval2);
		return callback_return_value;
	}

	friend QActionGroup* QUiLoader_virtualbase_createActionGroup(void* self, QObject* parent, struct seaqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createAction = 0;

	// Subclass to allow providing a Go implementation
	virtual QAction* createAction(QObject* parent, const QString& name) override {
		if (handle__createAction == 0) {
			return QUiLoader::createAction(parent, name);
		}

		QObject* sigval1 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct seaqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct seaqt_string sigval2 = name_ms;
		QAction* callback_return_value = miqt_exec_callback_QUiLoader_createAction(this, handle__createAction, sigval1, sigval2);
		return callback_return_value;
	}

	friend QAction* QUiLoader_virtualbase_createAction(void* self, QObject* parent, struct seaqt_string name);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QUiLoader::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QUiLoader_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QUiLoader_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QUiLoader::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QUiLoader_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QUiLoader_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QUiLoader::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QUiLoader_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QUiLoader_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QUiLoader::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QUiLoader_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QUiLoader_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QUiLoader::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QUiLoader_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QUiLoader_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QUiLoader::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QUiLoader_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QUiLoader_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QUiLoader::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QUiLoader_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QUiLoader_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QUiLoader_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QUiLoader_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QUiLoader_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QUiLoader_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QUiLoader* QUiLoader_new() {
	return new (std::nothrow) VirtualQUiLoader();
}

QUiLoader* QUiLoader_new2(QObject* parent) {
	return new (std::nothrow) VirtualQUiLoader(parent);
}

void QUiLoader_virtbase(QUiLoader* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QUiLoader_metaObject(const QUiLoader* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUiLoader_metacast(QUiLoader* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QUiLoader_metacall(QUiLoader* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct seaqt_string QUiLoader_tr(const char* s) {
	QString _ret = QUiLoader::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct seaqt_array /* of struct seaqt_string */  QUiLoader_pluginPaths(const QUiLoader* self) {
	QStringList _ret = self->pluginPaths();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct seaqt_string* _arr = static_cast<struct seaqt_string*>(malloc(sizeof(struct seaqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct seaqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct seaqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QUiLoader_clearPluginPaths(QUiLoader* self) {
	self->clearPluginPaths();
}

void QUiLoader_addPluginPath(QUiLoader* self, struct seaqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->addPluginPath(path_QString);
}

QWidget* QUiLoader_load(QUiLoader* self, QIODevice* device) {
	return self->load(device);
}

struct seaqt_array /* of struct seaqt_string */  QUiLoader_availableWidgets(const QUiLoader* self) {
	QStringList _ret = self->availableWidgets();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct seaqt_string* _arr = static_cast<struct seaqt_string*>(malloc(sizeof(struct seaqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct seaqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct seaqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct seaqt_array /* of struct seaqt_string */  QUiLoader_availableLayouts(const QUiLoader* self) {
	QStringList _ret = self->availableLayouts();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct seaqt_string* _arr = static_cast<struct seaqt_string*>(malloc(sizeof(struct seaqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct seaqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct seaqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QWidget* QUiLoader_createWidget(QUiLoader* self, struct seaqt_string className, QWidget* parent, struct seaqt_string name) {
	QString className_QString = QString::fromUtf8(className.data, className.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->createWidget(className_QString, parent, name_QString);
}

QLayout* QUiLoader_createLayout(QUiLoader* self, struct seaqt_string className, QObject* parent, struct seaqt_string name) {
	QString className_QString = QString::fromUtf8(className.data, className.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->createLayout(className_QString, parent, name_QString);
}

QActionGroup* QUiLoader_createActionGroup(QUiLoader* self, QObject* parent, struct seaqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->createActionGroup(parent, name_QString);
}

QAction* QUiLoader_createAction(QUiLoader* self, QObject* parent, struct seaqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->createAction(parent, name_QString);
}

void QUiLoader_setWorkingDirectory(QUiLoader* self, QDir* dir) {
	self->setWorkingDirectory(*dir);
}

QDir* QUiLoader_workingDirectory(const QUiLoader* self) {
	return new QDir(self->workingDirectory());
}

void QUiLoader_setLanguageChangeEnabled(QUiLoader* self, bool enabled) {
	self->setLanguageChangeEnabled(enabled);
}

bool QUiLoader_isLanguageChangeEnabled(const QUiLoader* self) {
	return self->isLanguageChangeEnabled();
}

void QUiLoader_setTranslationEnabled(QUiLoader* self, bool enabled) {
	self->setTranslationEnabled(enabled);
}

bool QUiLoader_isTranslationEnabled(const QUiLoader* self) {
	return self->isTranslationEnabled();
}

struct seaqt_string QUiLoader_errorString(const QUiLoader* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct seaqt_string QUiLoader_tr2(const char* s, const char* c) {
	QString _ret = QUiLoader::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct seaqt_string QUiLoader_tr3(const char* s, const char* c, int n) {
	QString _ret = QUiLoader::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QUiLoader_load2(QUiLoader* self, QIODevice* device, QWidget* parentWidget) {
	return self->load(device, parentWidget);
}

const QMetaObject* QUiLoader_staticMetaObject() { return &QUiLoader::staticMetaObject; }
bool QUiLoader_override_virtual_metaObject(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metaObject = slot;
	return true;
}

QMetaObject* QUiLoader_virtualbase_metaObject(const void* self) {
	return (QMetaObject*) static_cast<const VirtualQUiLoader*>(self)->QUiLoader::metaObject();
}

bool QUiLoader_override_virtual_metacast(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metacast = slot;
	return true;
}

void* QUiLoader_virtualbase_metacast(void* self, const char* param1) {
	return static_cast<VirtualQUiLoader*>(self)->QUiLoader::qt_metacast(param1);
}

bool QUiLoader_override_virtual_metacall(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metacall = slot;
	return true;
}

int QUiLoader_virtualbase_metacall(void* self, int param1, int param2, void** param3) {
	return static_cast<VirtualQUiLoader*>(self)->QUiLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

bool QUiLoader_override_virtual_createWidget(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createWidget = slot;
	return true;
}

QWidget* QUiLoader_virtualbase_createWidget(void* self, struct seaqt_string className, QWidget* parent, struct seaqt_string name) {
	QString className_QString = QString::fromUtf8(className.data, className.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<VirtualQUiLoader*>(self)->QUiLoader::createWidget(className_QString, parent, name_QString);
}

bool QUiLoader_override_virtual_createLayout(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createLayout = slot;
	return true;
}

QLayout* QUiLoader_virtualbase_createLayout(void* self, struct seaqt_string className, QObject* parent, struct seaqt_string name) {
	QString className_QString = QString::fromUtf8(className.data, className.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<VirtualQUiLoader*>(self)->QUiLoader::createLayout(className_QString, parent, name_QString);
}

bool QUiLoader_override_virtual_createActionGroup(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createActionGroup = slot;
	return true;
}

QActionGroup* QUiLoader_virtualbase_createActionGroup(void* self, QObject* parent, struct seaqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<VirtualQUiLoader*>(self)->QUiLoader::createActionGroup(parent, name_QString);
}

bool QUiLoader_override_virtual_createAction(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createAction = slot;
	return true;
}

QAction* QUiLoader_virtualbase_createAction(void* self, QObject* parent, struct seaqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<VirtualQUiLoader*>(self)->QUiLoader::createAction(parent, name_QString);
}

bool QUiLoader_override_virtual_event(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QUiLoader_virtualbase_event(void* self, QEvent* event) {
	return static_cast<VirtualQUiLoader*>(self)->QUiLoader::event(event);
}

bool QUiLoader_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QUiLoader_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<VirtualQUiLoader*>(self)->QUiLoader::eventFilter(watched, event);
}

bool QUiLoader_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QUiLoader_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<VirtualQUiLoader*>(self)->QUiLoader::timerEvent(event);
}

bool QUiLoader_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QUiLoader_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<VirtualQUiLoader*>(self)->QUiLoader::childEvent(event);
}

bool QUiLoader_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QUiLoader_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<VirtualQUiLoader*>(self)->QUiLoader::customEvent(event);
}

bool QUiLoader_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QUiLoader_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<VirtualQUiLoader*>(self)->QUiLoader::connectNotify(*signal);
}

bool QUiLoader_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QUiLoader_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<VirtualQUiLoader*>(self)->QUiLoader::disconnectNotify(*signal);
}

QObject* QUiLoader_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QUiLoader_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QUiLoader_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QUiLoader_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQUiLoader* self_cast = dynamic_cast<VirtualQUiLoader*>( (QUiLoader*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QUiLoader_delete(QUiLoader* self) {
	delete self;
}

