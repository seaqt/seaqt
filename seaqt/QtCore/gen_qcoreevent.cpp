#include <QByteArray>
#include <QChildEvent>
#include <QDynamicPropertyChangeEvent>
#include <QEvent>
#include <QObject>
#include <QTimerEvent>
#include <qcoreevent.h>
#include "gen_qcoreevent.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QEvent_setAccepted(QEvent*, intptr_t, bool);
QEvent* miqt_exec_callback_QEvent_clone(const QEvent*, intptr_t);
QTimerEvent* miqt_exec_callback_QTimerEvent_clone(const QTimerEvent*, intptr_t);
void miqt_exec_callback_QTimerEvent_setAccepted(QTimerEvent*, intptr_t, bool);
QChildEvent* miqt_exec_callback_QChildEvent_clone(const QChildEvent*, intptr_t);
void miqt_exec_callback_QChildEvent_setAccepted(QChildEvent*, intptr_t, bool);
QDynamicPropertyChangeEvent* miqt_exec_callback_QDynamicPropertyChangeEvent_clone(const QDynamicPropertyChangeEvent*, intptr_t);
void miqt_exec_callback_QDynamicPropertyChangeEvent_setAccepted(QDynamicPropertyChangeEvent*, intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQEvent final : public QEvent {
public:

	VirtualQEvent(QEvent::Type type): QEvent(type) {};

	virtual ~VirtualQEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	friend void QEvent_virtualbase_setAccepted(void* self, bool accepted);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QEvent* clone() const override {
		if (handle__clone == 0) {
			return QEvent::clone();
		}
		

		QEvent* callback_return_value = miqt_exec_callback_QEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	friend QEvent* QEvent_virtualbase_clone(const void* self);

};

QEvent* QEvent_new(int type) {
	return new VirtualQEvent(static_cast<QEvent::Type>(type));
}

int QEvent_type(const QEvent* self) {
	QEvent::Type _ret = self->type();
	return static_cast<int>(_ret);
}

bool QEvent_spontaneous(const QEvent* self) {
	return self->spontaneous();
}

void QEvent_setAccepted(QEvent* self, bool accepted) {
	self->setAccepted(accepted);
}

bool QEvent_isAccepted(const QEvent* self) {
	return self->isAccepted();
}

void QEvent_accept(QEvent* self) {
	self->accept();
}

void QEvent_ignore(QEvent* self) {
	self->ignore();
}

bool QEvent_isInputEvent(const QEvent* self) {
	return self->isInputEvent();
}

bool QEvent_isPointerEvent(const QEvent* self) {
	return self->isPointerEvent();
}

bool QEvent_isSinglePointEvent(const QEvent* self) {
	return self->isSinglePointEvent();
}

int QEvent_registerEventType() {
	return QEvent::registerEventType();
}

QEvent* QEvent_clone(const QEvent* self) {
	return self->clone();
}

int QEvent_registerEventType1(int hint) {
	return QEvent::registerEventType(static_cast<int>(hint));
}

bool QEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	VirtualQEvent* self_cast = dynamic_cast<VirtualQEvent*>( (QEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QEvent_virtualbase_setAccepted(void* self, bool accepted) {

	( (VirtualQEvent*)(self) )->QEvent::setAccepted(accepted);

}

bool QEvent_override_virtual_clone(void* self, intptr_t slot) {
	VirtualQEvent* self_cast = dynamic_cast<VirtualQEvent*>( (QEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QEvent* QEvent_virtualbase_clone(const void* self) {

	return ( (const VirtualQEvent*)(self) )->QEvent::clone();

}

void QEvent_delete(QEvent* self) {
	delete self;
}

class VirtualQTimerEvent final : public QTimerEvent {
public:

	VirtualQTimerEvent(int timerId): QTimerEvent(timerId) {};

	virtual ~VirtualQTimerEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QTimerEvent* clone() const override {
		if (handle__clone == 0) {
			return QTimerEvent::clone();
		}
		

		QTimerEvent* callback_return_value = miqt_exec_callback_QTimerEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	friend QTimerEvent* QTimerEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QTimerEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QTimerEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	friend void QTimerEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QTimerEvent* QTimerEvent_new(int timerId) {
	return new VirtualQTimerEvent(static_cast<int>(timerId));
}

void QTimerEvent_virtbase(QTimerEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QTimerEvent* QTimerEvent_clone(const QTimerEvent* self) {
	return self->clone();
}

int QTimerEvent_timerId(const QTimerEvent* self) {
	return self->timerId();
}

bool QTimerEvent_override_virtual_clone(void* self, intptr_t slot) {
	VirtualQTimerEvent* self_cast = dynamic_cast<VirtualQTimerEvent*>( (QTimerEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QTimerEvent* QTimerEvent_virtualbase_clone(const void* self) {

	return ( (const VirtualQTimerEvent*)(self) )->QTimerEvent::clone();

}

bool QTimerEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	VirtualQTimerEvent* self_cast = dynamic_cast<VirtualQTimerEvent*>( (QTimerEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QTimerEvent_virtualbase_setAccepted(void* self, bool accepted) {

	( (VirtualQTimerEvent*)(self) )->QTimerEvent::setAccepted(accepted);

}

void QTimerEvent_delete(QTimerEvent* self) {
	delete self;
}

class VirtualQChildEvent final : public QChildEvent {
public:

	VirtualQChildEvent(QEvent::Type type, QObject* child): QChildEvent(type, child) {};

	virtual ~VirtualQChildEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QChildEvent* clone() const override {
		if (handle__clone == 0) {
			return QChildEvent::clone();
		}
		

		QChildEvent* callback_return_value = miqt_exec_callback_QChildEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	friend QChildEvent* QChildEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QChildEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QChildEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	friend void QChildEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QChildEvent* QChildEvent_new(int type, QObject* child) {
	return new VirtualQChildEvent(static_cast<QEvent::Type>(type), child);
}

void QChildEvent_virtbase(QChildEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QChildEvent* QChildEvent_clone(const QChildEvent* self) {
	return self->clone();
}

QObject* QChildEvent_child(const QChildEvent* self) {
	return self->child();
}

bool QChildEvent_added(const QChildEvent* self) {
	return self->added();
}

bool QChildEvent_polished(const QChildEvent* self) {
	return self->polished();
}

bool QChildEvent_removed(const QChildEvent* self) {
	return self->removed();
}

bool QChildEvent_override_virtual_clone(void* self, intptr_t slot) {
	VirtualQChildEvent* self_cast = dynamic_cast<VirtualQChildEvent*>( (QChildEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QChildEvent* QChildEvent_virtualbase_clone(const void* self) {

	return ( (const VirtualQChildEvent*)(self) )->QChildEvent::clone();

}

bool QChildEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	VirtualQChildEvent* self_cast = dynamic_cast<VirtualQChildEvent*>( (QChildEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QChildEvent_virtualbase_setAccepted(void* self, bool accepted) {

	( (VirtualQChildEvent*)(self) )->QChildEvent::setAccepted(accepted);

}

void QChildEvent_delete(QChildEvent* self) {
	delete self;
}

class VirtualQDynamicPropertyChangeEvent final : public QDynamicPropertyChangeEvent {
public:

	VirtualQDynamicPropertyChangeEvent(const QByteArray& name): QDynamicPropertyChangeEvent(name) {};

	virtual ~VirtualQDynamicPropertyChangeEvent() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__clone = 0;

	// Subclass to allow providing a Go implementation
	virtual QDynamicPropertyChangeEvent* clone() const override {
		if (handle__clone == 0) {
			return QDynamicPropertyChangeEvent::clone();
		}
		

		QDynamicPropertyChangeEvent* callback_return_value = miqt_exec_callback_QDynamicPropertyChangeEvent_clone(this, handle__clone);

		return callback_return_value;
	}

	friend QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAccepted = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAccepted(bool accepted) override {
		if (handle__setAccepted == 0) {
			QDynamicPropertyChangeEvent::setAccepted(accepted);
			return;
		}
		
		bool sigval1 = accepted;

		miqt_exec_callback_QDynamicPropertyChangeEvent_setAccepted(this, handle__setAccepted, sigval1);

		
	}

	friend void QDynamicPropertyChangeEvent_virtualbase_setAccepted(void* self, bool accepted);

};

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_new(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return new VirtualQDynamicPropertyChangeEvent(name_QByteArray);
}

void QDynamicPropertyChangeEvent_virtbase(QDynamicPropertyChangeEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_clone(const QDynamicPropertyChangeEvent* self) {
	return self->clone();
}

struct miqt_string QDynamicPropertyChangeEvent_propertyName(const QDynamicPropertyChangeEvent* self) {
	QByteArray _qb = self->propertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QDynamicPropertyChangeEvent_override_virtual_clone(void* self, intptr_t slot) {
	VirtualQDynamicPropertyChangeEvent* self_cast = dynamic_cast<VirtualQDynamicPropertyChangeEvent*>( (QDynamicPropertyChangeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__clone = slot;
	return true;
}

QDynamicPropertyChangeEvent* QDynamicPropertyChangeEvent_virtualbase_clone(const void* self) {

	return ( (const VirtualQDynamicPropertyChangeEvent*)(self) )->QDynamicPropertyChangeEvent::clone();

}

bool QDynamicPropertyChangeEvent_override_virtual_setAccepted(void* self, intptr_t slot) {
	VirtualQDynamicPropertyChangeEvent* self_cast = dynamic_cast<VirtualQDynamicPropertyChangeEvent*>( (QDynamicPropertyChangeEvent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAccepted = slot;
	return true;
}

void QDynamicPropertyChangeEvent_virtualbase_setAccepted(void* self, bool accepted) {

	( (VirtualQDynamicPropertyChangeEvent*)(self) )->QDynamicPropertyChangeEvent::setAccepted(accepted);

}

void QDynamicPropertyChangeEvent_delete(QDynamicPropertyChangeEvent* self) {
	delete self;
}

