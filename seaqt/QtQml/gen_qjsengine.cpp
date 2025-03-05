#include <QChildEvent>
#include <QEvent>
#include <QJSEngine>
#include <QJSValue>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qjsengine.h>
#include "gen_qjsengine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QJSEngine_uiLanguageChanged(intptr_t);
bool miqt_exec_callback_QJSEngine_event(QJSEngine*, intptr_t, QEvent*);
bool miqt_exec_callback_QJSEngine_eventFilter(QJSEngine*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QJSEngine_timerEvent(QJSEngine*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QJSEngine_childEvent(QJSEngine*, intptr_t, QChildEvent*);
void miqt_exec_callback_QJSEngine_customEvent(QJSEngine*, intptr_t, QEvent*);
void miqt_exec_callback_QJSEngine_connectNotify(QJSEngine*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QJSEngine_disconnectNotify(QJSEngine*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQJSEngine final : public QJSEngine {
public:

	VirtualQJSEngine(): QJSEngine() {};
	VirtualQJSEngine(QObject* parent): QJSEngine(parent) {};

	virtual ~VirtualQJSEngine() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QJSEngine::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QJSEngine_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QJSEngine_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QJSEngine::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QJSEngine_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QJSEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QJSEngine::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QJSEngine_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QJSEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QJSEngine::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QJSEngine_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QJSEngine_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QJSEngine::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QJSEngine_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QJSEngine_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QJSEngine::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QJSEngine_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QJSEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QJSEngine::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QJSEngine_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QJSEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QJSEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QJSEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QJSEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QJSEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QJSEngine* QJSEngine_new() {
	return new VirtualQJSEngine();
}

QJSEngine* QJSEngine_new2(QObject* parent) {
	return new VirtualQJSEngine(parent);
}

void QJSEngine_virtbase(QJSEngine* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QJSEngine_metaObject(const QJSEngine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QJSEngine_metacast(QJSEngine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QJSEngine_tr(const char* s) {
	QString _ret = QJSEngine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QJSEngine_trUtf8(const char* s) {
	QString _ret = QJSEngine::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJSValue* QJSEngine_globalObject(const QJSEngine* self) {
	return new QJSValue(self->globalObject());
}

QJSValue* QJSEngine_evaluate(QJSEngine* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return new QJSValue(self->evaluate(program_QString));
}

QJSValue* QJSEngine_importModule(QJSEngine* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QJSValue(self->importModule(fileName_QString));
}

QJSValue* QJSEngine_newObject(QJSEngine* self) {
	return new QJSValue(self->newObject());
}

QJSValue* QJSEngine_newArray(QJSEngine* self) {
	return new QJSValue(self->newArray());
}

QJSValue* QJSEngine_newQObject(QJSEngine* self, QObject* object) {
	return new QJSValue(self->newQObject(object));
}

QJSValue* QJSEngine_newQMetaObject(QJSEngine* self, QMetaObject* metaObject) {
	return new QJSValue(self->newQMetaObject(metaObject));
}

QJSValue* QJSEngine_newErrorObject(QJSEngine* self, int errorType) {
	return new QJSValue(self->newErrorObject(static_cast<QJSValue::ErrorType>(errorType)));
}

void QJSEngine_collectGarbage(QJSEngine* self) {
	self->collectGarbage();
}

void QJSEngine_installTranslatorFunctions(QJSEngine* self) {
	self->installTranslatorFunctions();
}

void QJSEngine_installExtensions(QJSEngine* self, int extensions) {
	self->installExtensions(static_cast<QJSEngine::Extensions>(extensions));
}

void QJSEngine_setInterrupted(QJSEngine* self, bool interrupted) {
	self->setInterrupted(interrupted);
}

bool QJSEngine_isInterrupted(const QJSEngine* self) {
	return self->isInterrupted();
}

void QJSEngine_throwError(QJSEngine* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->throwError(message_QString);
}

void QJSEngine_throwErrorWithErrorType(QJSEngine* self, int errorType) {
	self->throwError(static_cast<QJSValue::ErrorType>(errorType));
}

struct miqt_string QJSEngine_uiLanguage(const QJSEngine* self) {
	QString _ret = self->uiLanguage();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QJSEngine_setUiLanguage(QJSEngine* self, struct miqt_string language) {
	QString language_QString = QString::fromUtf8(language.data, language.len);
	self->setUiLanguage(language_QString);
}

void QJSEngine_uiLanguageChanged(QJSEngine* self) {
	self->uiLanguageChanged();
}

void QJSEngine_connect_uiLanguageChanged(QJSEngine* self, intptr_t slot) {
	VirtualQJSEngine::connect(self, static_cast<void (QJSEngine::*)()>(&QJSEngine::uiLanguageChanged), self, [=]() {
		miqt_exec_callback_QJSEngine_uiLanguageChanged(slot);
	});
}

struct miqt_string QJSEngine_tr2(const char* s, const char* c) {
	QString _ret = QJSEngine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QJSEngine_tr3(const char* s, const char* c, int n) {
	QString _ret = QJSEngine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QJSEngine_trUtf82(const char* s, const char* c) {
	QString _ret = QJSEngine::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QJSEngine_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QJSEngine::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJSValue* QJSEngine_evaluate2(QJSEngine* self, struct miqt_string program, struct miqt_string fileName) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QJSValue(self->evaluate(program_QString, fileName_QString));
}

QJSValue* QJSEngine_evaluate3(QJSEngine* self, struct miqt_string program, struct miqt_string fileName, int lineNumber) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QJSValue(self->evaluate(program_QString, fileName_QString, static_cast<int>(lineNumber)));
}

QJSValue* QJSEngine_newArray1(QJSEngine* self, unsigned int length) {
	return new QJSValue(self->newArray(static_cast<uint>(length)));
}

QJSValue* QJSEngine_newErrorObject2(QJSEngine* self, int errorType, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	return new QJSValue(self->newErrorObject(static_cast<QJSValue::ErrorType>(errorType), message_QString));
}

void QJSEngine_installTranslatorFunctions1(QJSEngine* self, QJSValue* object) {
	self->installTranslatorFunctions(*object);
}

void QJSEngine_installExtensions2(QJSEngine* self, int extensions, QJSValue* object) {
	self->installExtensions(static_cast<QJSEngine::Extensions>(extensions), *object);
}

void QJSEngine_throwError2(QJSEngine* self, int errorType, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->throwError(static_cast<QJSValue::ErrorType>(errorType), message_QString);
}

bool QJSEngine_override_virtual_event(void* self, intptr_t slot) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QJSEngine_virtualbase_event(void* self, QEvent* event) {

	return ( (VirtualQJSEngine*)(self) )->QJSEngine::event(event);

}

bool QJSEngine_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QJSEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (VirtualQJSEngine*)(self) )->QJSEngine::eventFilter(watched, event);

}

bool QJSEngine_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QJSEngine_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (VirtualQJSEngine*)(self) )->QJSEngine::timerEvent(event);

}

bool QJSEngine_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QJSEngine_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (VirtualQJSEngine*)(self) )->QJSEngine::childEvent(event);

}

bool QJSEngine_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QJSEngine_virtualbase_customEvent(void* self, QEvent* event) {

	( (VirtualQJSEngine*)(self) )->QJSEngine::customEvent(event);

}

bool QJSEngine_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QJSEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQJSEngine*)(self) )->QJSEngine::connectNotify(*signal);

}

bool QJSEngine_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QJSEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQJSEngine*)(self) )->QJSEngine::disconnectNotify(*signal);

}

QObject* QJSEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QJSEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QJSEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QJSEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQJSEngine* self_cast = dynamic_cast<VirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QJSEngine_delete(QJSEngine* self) {
	delete self;
}

