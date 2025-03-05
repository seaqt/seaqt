#include <QAudioDeviceInfo>
#include <QAudioFormat>
#include <QAudioInput>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudioinput.h>
#include "gen_qaudioinput.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QAudioInput_stateChanged(intptr_t, int);
void miqt_exec_callback_QAudioInput_notify(intptr_t);
QMetaObject* miqt_exec_callback_QAudioInput_metaObject(const QAudioInput*, intptr_t);
void* miqt_exec_callback_QAudioInput_metacast(QAudioInput*, intptr_t, const char*);
int miqt_exec_callback_QAudioInput_metacall(QAudioInput*, intptr_t, int, int, void**);
bool miqt_exec_callback_QAudioInput_event(QAudioInput*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioInput_eventFilter(QAudioInput*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioInput_timerEvent(QAudioInput*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioInput_childEvent(QAudioInput*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioInput_customEvent(QAudioInput*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioInput_connectNotify(QAudioInput*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioInput_disconnectNotify(QAudioInput*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQAudioInput final : public QAudioInput {
public:

	VirtualQAudioInput(): QAudioInput() {};
	VirtualQAudioInput(const QAudioDeviceInfo& audioDeviceInfo): QAudioInput(audioDeviceInfo) {};
	VirtualQAudioInput(const QAudioFormat& format): QAudioInput(format) {};
	VirtualQAudioInput(const QAudioFormat& format, QObject* parent): QAudioInput(format, parent) {};
	VirtualQAudioInput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format): QAudioInput(audioDeviceInfo, format) {};
	VirtualQAudioInput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format, QObject* parent): QAudioInput(audioDeviceInfo, format, parent) {};

	virtual ~VirtualQAudioInput() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (handle__metaObject == 0) {
			return QAudioInput::metaObject();
		}
		

		QMetaObject* callback_return_value = miqt_exec_callback_QAudioInput_metaObject(this, handle__metaObject);

		return callback_return_value;
	}

	friend QMetaObject* QAudioInput_virtualbase_metaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacast = 0;

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (handle__metacast == 0) {
			return QAudioInput::qt_metacast(param1);
		}
		
		const char* sigval1 = (const char*) param1;

		void* callback_return_value = miqt_exec_callback_QAudioInput_metacast(this, handle__metacast, sigval1);

		return callback_return_value;
	}

	friend void* QAudioInput_virtualbase_metacast(void* self, const char* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacall = 0;

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (handle__metacall == 0) {
			return QAudioInput::qt_metacall(param1, param2, param3);
		}
		
		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;

		int callback_return_value = miqt_exec_callback_QAudioInput_metacall(this, handle__metacall, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	friend int QAudioInput_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QAudioInput::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioInput_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QAudioInput_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QAudioInput::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioInput_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QAudioInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QAudioInput::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioInput_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QAudioInput_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QAudioInput::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioInput_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QAudioInput_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QAudioInput::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioInput_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QAudioInput_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QAudioInput::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioInput_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QAudioInput_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QAudioInput::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioInput_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QAudioInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioInput* QAudioInput_new() {
	return new VirtualQAudioInput();
}

QAudioInput* QAudioInput_new2(QAudioDeviceInfo* audioDeviceInfo) {
	return new VirtualQAudioInput(*audioDeviceInfo);
}

QAudioInput* QAudioInput_new3(QAudioFormat* format) {
	return new VirtualQAudioInput(*format);
}

QAudioInput* QAudioInput_new4(QAudioFormat* format, QObject* parent) {
	return new VirtualQAudioInput(*format, parent);
}

QAudioInput* QAudioInput_new5(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format) {
	return new VirtualQAudioInput(*audioDeviceInfo, *format);
}

QAudioInput* QAudioInput_new6(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new VirtualQAudioInput(*audioDeviceInfo, *format, parent);
}

void QAudioInput_virtbase(QAudioInput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioInput_metaObject(const QAudioInput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioInput_metacast(QAudioInput* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QAudioInput_metacall(QAudioInput* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct miqt_string QAudioInput_tr(const char* s) {
	QString _ret = QAudioInput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_trUtf8(const char* s) {
	QString _ret = QAudioInput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAudioInput_format(const QAudioInput* self) {
	return new QAudioFormat(self->format());
}

void QAudioInput_start(QAudioInput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioInput_start2(QAudioInput* self) {
	return self->start();
}

void QAudioInput_stop(QAudioInput* self) {
	self->stop();
}

void QAudioInput_reset(QAudioInput* self) {
	self->reset();
}

void QAudioInput_suspend(QAudioInput* self) {
	self->suspend();
}

void QAudioInput_resume(QAudioInput* self) {
	self->resume();
}

void QAudioInput_setBufferSize(QAudioInput* self, int bytes) {
	self->setBufferSize(static_cast<int>(bytes));
}

int QAudioInput_bufferSize(const QAudioInput* self) {
	return self->bufferSize();
}

int QAudioInput_bytesReady(const QAudioInput* self) {
	return self->bytesReady();
}

int QAudioInput_periodSize(const QAudioInput* self) {
	return self->periodSize();
}

void QAudioInput_setNotifyInterval(QAudioInput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAudioInput_notifyInterval(const QAudioInput* self) {
	return self->notifyInterval();
}

void QAudioInput_setVolume(QAudioInput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioInput_volume(const QAudioInput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

long long QAudioInput_processedUSecs(const QAudioInput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioInput_elapsedUSecs(const QAudioInput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioInput_error(const QAudioInput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioInput_state(const QAudioInput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioInput_stateChanged(QAudioInput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void QAudioInput_connect_stateChanged(QAudioInput* self, intptr_t slot) {
	VirtualQAudioInput::connect(self, static_cast<void (QAudioInput::*)(QAudio::State)>(&QAudioInput::stateChanged), self, [=](QAudio::State state) {
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioInput_stateChanged(slot, sigval1);
	});
}

void QAudioInput_notify(QAudioInput* self) {
	self->notify();
}

void QAudioInput_connect_notify(QAudioInput* self, intptr_t slot) {
	VirtualQAudioInput::connect(self, static_cast<void (QAudioInput::*)()>(&QAudioInput::notify), self, [=]() {
		miqt_exec_callback_QAudioInput_notify(slot);
	});
}

struct miqt_string QAudioInput_tr2(const char* s, const char* c) {
	QString _ret = QAudioInput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioInput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_trUtf82(const char* s, const char* c) {
	QString _ret = QAudioInput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioInput::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioInput_override_virtual_metaObject(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metaObject = slot;
	return true;
}

QMetaObject* QAudioInput_virtualbase_metaObject(const void* self) {

	return (QMetaObject*) ( (const VirtualQAudioInput*)(self) )->QAudioInput::metaObject();

}

bool QAudioInput_override_virtual_metacast(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacast = slot;
	return true;
}

void* QAudioInput_virtualbase_metacast(void* self, const char* param1) {

	return ( (VirtualQAudioInput*)(self) )->QAudioInput::qt_metacast(param1);

}

bool QAudioInput_override_virtual_metacall(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacall = slot;
	return true;
}

int QAudioInput_virtualbase_metacall(void* self, int param1, int param2, void** param3) {

	return ( (VirtualQAudioInput*)(self) )->QAudioInput::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);

}

bool QAudioInput_override_virtual_event(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QAudioInput_virtualbase_event(void* self, QEvent* event) {

	return ( (VirtualQAudioInput*)(self) )->QAudioInput::event(event);

}

bool QAudioInput_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QAudioInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (VirtualQAudioInput*)(self) )->QAudioInput::eventFilter(watched, event);

}

bool QAudioInput_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QAudioInput_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (VirtualQAudioInput*)(self) )->QAudioInput::timerEvent(event);

}

bool QAudioInput_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QAudioInput_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (VirtualQAudioInput*)(self) )->QAudioInput::childEvent(event);

}

bool QAudioInput_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QAudioInput_virtualbase_customEvent(void* self, QEvent* event) {

	( (VirtualQAudioInput*)(self) )->QAudioInput::customEvent(event);

}

bool QAudioInput_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QAudioInput_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQAudioInput*)(self) )->QAudioInput::connectNotify(*signal);

}

bool QAudioInput_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QAudioInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQAudioInput*)(self) )->QAudioInput::disconnectNotify(*signal);

}

const QMetaObject* QAudioInput_staticMetaObject() { return &QAudioInput::staticMetaObject; }
QObject* QAudioInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QAudioInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QAudioInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QAudioInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQAudioInput* self_cast = dynamic_cast<VirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QAudioInput_delete(QAudioInput* self) {
	delete self;
}

