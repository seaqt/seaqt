#include <QByteArray>
#include <QItemEditorCreatorBase>
#include <QItemEditorFactory>
#include <QWidget>
#include <qitemeditorfactory.h>
#include "gen_qitemeditorfactory.h"

#ifdef __cplusplus
extern "C" {
#endif

QWidget* miqt_exec_callback_QItemEditorFactory_createEditor(const QItemEditorFactory*, intptr_t, int, QWidget*);
struct miqt_string miqt_exec_callback_QItemEditorFactory_valuePropertyName(const QItemEditorFactory*, intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

QWidget* QItemEditorCreatorBase_createWidget(const QItemEditorCreatorBase* self, QWidget* parent) {
	return self->createWidget(parent);
}

struct miqt_string QItemEditorCreatorBase_valuePropertyName(const QItemEditorCreatorBase* self) {
	QByteArray _qb = self->valuePropertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QItemEditorCreatorBase_operatorAssign(QItemEditorCreatorBase* self, QItemEditorCreatorBase* param1) {
	self->operator=(*param1);
}

void QItemEditorCreatorBase_delete(QItemEditorCreatorBase* self) {
	delete self;
}

class VirtualQItemEditorFactory final : public QItemEditorFactory {
public:

	VirtualQItemEditorFactory(): QItemEditorFactory() {};
	VirtualQItemEditorFactory(const QItemEditorFactory& param1): QItemEditorFactory(param1) {};

	virtual ~VirtualQItemEditorFactory() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__createEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createEditor(int userType, QWidget* parent) const override {
		if (handle__createEditor == 0) {
			return QItemEditorFactory::createEditor(userType, parent);
		}
		
		int sigval1 = userType;
		QWidget* sigval2 = parent;

		QWidget* callback_return_value = miqt_exec_callback_QItemEditorFactory_createEditor(this, handle__createEditor, sigval1, sigval2);

		return callback_return_value;
	}

	friend QWidget* QItemEditorFactory_virtualbase_createEditor(const void* self, int userType, QWidget* parent);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__valuePropertyName = 0;

	// Subclass to allow providing a Go implementation
	virtual QByteArray valuePropertyName(int userType) const override {
		if (handle__valuePropertyName == 0) {
			return QItemEditorFactory::valuePropertyName(userType);
		}
		
		int sigval1 = userType;

		struct miqt_string callback_return_value = miqt_exec_callback_QItemEditorFactory_valuePropertyName(this, handle__valuePropertyName, sigval1);
		QByteArray callback_return_value_QByteArray(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QByteArray;
	}

	friend struct miqt_string QItemEditorFactory_virtualbase_valuePropertyName(const void* self, int userType);

};

QItemEditorFactory* QItemEditorFactory_new() {
	return new VirtualQItemEditorFactory();
}

QItemEditorFactory* QItemEditorFactory_new2(QItemEditorFactory* param1) {
	return new VirtualQItemEditorFactory(*param1);
}

QWidget* QItemEditorFactory_createEditor(const QItemEditorFactory* self, int userType, QWidget* parent) {
	return self->createEditor(static_cast<int>(userType), parent);
}

struct miqt_string QItemEditorFactory_valuePropertyName(const QItemEditorFactory* self, int userType) {
	QByteArray _qb = self->valuePropertyName(static_cast<int>(userType));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QItemEditorFactory_registerEditor(QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator) {
	self->registerEditor(static_cast<int>(userType), creator);
}

QItemEditorFactory* QItemEditorFactory_defaultFactory() {
	return (QItemEditorFactory*) QItemEditorFactory::defaultFactory();
}

void QItemEditorFactory_setDefaultFactory(QItemEditorFactory* factory) {
	QItemEditorFactory::setDefaultFactory(factory);
}

bool QItemEditorFactory_override_virtual_createEditor(void* self, intptr_t slot) {
	VirtualQItemEditorFactory* self_cast = dynamic_cast<VirtualQItemEditorFactory*>( (QItemEditorFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__createEditor = slot;
	return true;
}

QWidget* QItemEditorFactory_virtualbase_createEditor(const void* self, int userType, QWidget* parent) {

	return ( (const VirtualQItemEditorFactory*)(self) )->QItemEditorFactory::createEditor(static_cast<int>(userType), parent);

}

bool QItemEditorFactory_override_virtual_valuePropertyName(void* self, intptr_t slot) {
	VirtualQItemEditorFactory* self_cast = dynamic_cast<VirtualQItemEditorFactory*>( (QItemEditorFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__valuePropertyName = slot;
	return true;
}

struct miqt_string QItemEditorFactory_virtualbase_valuePropertyName(const void* self, int userType) {

	QByteArray _qb = ( (const VirtualQItemEditorFactory*)(self) )->QItemEditorFactory::valuePropertyName(static_cast<int>(userType));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;

}

void QItemEditorFactory_delete(QItemEditorFactory* self) {
	delete self;
}

