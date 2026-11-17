#include <QDesignerMetaDataBaseInterface>
#include <QDesignerMetaDataBaseItemInterface>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <abstractmetadatabase.h>
#include "gen_abstractmetadatabase.h"

#ifdef __cplusplus
extern "C" {
#endif

struct seaqt_string miqt_exec_callback_QDesignerMetaDataBaseItemInterface_name(const QDesignerMetaDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setName(QDesignerMetaDataBaseItemInterface*, intptr_t, struct seaqt_string);
struct seaqt_array /* of QWidget* */  miqt_exec_callback_QDesignerMetaDataBaseItemInterface_tabOrder(const QDesignerMetaDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setTabOrder(QDesignerMetaDataBaseItemInterface*, intptr_t, struct seaqt_array /* of QWidget* */ );
bool miqt_exec_callback_QDesignerMetaDataBaseItemInterface_enabled(const QDesignerMetaDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setEnabled(QDesignerMetaDataBaseItemInterface*, intptr_t, bool);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_changed(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQDesignerMetaDataBaseItemInterface final : public QDesignerMetaDataBaseItemInterface {
public:

	VirtualQDesignerMetaDataBaseItemInterface(): QDesignerMetaDataBaseItemInterface() {}

	virtual ~VirtualQDesignerMetaDataBaseItemInterface() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__name = 0;

	// Subclass to allow providing a Go implementation
	virtual QString name() const override {
		if (handle__name == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct seaqt_string callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseItemInterface_name(this, handle__name);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setName = 0;

	// Subclass to allow providing a Go implementation
	virtual void setName(const QString& name) override {
		if (handle__setName == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct seaqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct seaqt_string sigval1 = name_ms;
		miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setName(this, handle__setName, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabOrder = 0;

	// Subclass to allow providing a Go implementation
	virtual QList<QWidget *> tabOrder() const override {
		if (handle__tabOrder == 0) {
			return QList<QWidget *>(); // Pure virtual, there is no base we can call
		}

		struct seaqt_array /* of QWidget* */  callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseItemInterface_tabOrder(this, handle__tabOrder);
		QList<QWidget *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QWidget** callback_return_value_arr = static_cast<QWidget**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}
		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setTabOrder = 0;

	// Subclass to allow providing a Go implementation
	virtual void setTabOrder(const QList<QWidget *>& tabOrder) override {
		if (handle__setTabOrder == 0) {
			return; // Pure virtual, there is no base we can call
		}

		const QList<QWidget *>& tabOrder_ret = tabOrder;
		// Convert QList<> from C++ memory to manually-managed C memory
		QWidget** tabOrder_arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * tabOrder_ret.length()));
		for (size_t i = 0, e = tabOrder_ret.length(); i < e; ++i) {
			tabOrder_arr[i] = tabOrder_ret[i];
		}
		struct seaqt_array tabOrder_out;
		tabOrder_out.len = tabOrder_ret.length();
		tabOrder_out.data = static_cast<void*>(tabOrder_arr);
		struct seaqt_array /* of QWidget* */  sigval1 = tabOrder_out;
		miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setTabOrder(this, handle__setTabOrder, sigval1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enabled = 0;

	// Subclass to allow providing a Go implementation
	virtual bool enabled() const override {
		if (handle__enabled == 0) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseItemInterface_enabled(this, handle__enabled);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEnabled = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEnabled(bool b) override {
		if (handle__setEnabled == 0) {
			return; // Pure virtual, there is no base we can call
		}

		bool sigval1 = b;
		miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setEnabled(this, handle__setEnabled, sigval1);

	}

};

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseItemInterface_new() {
	return new (std::nothrow) VirtualQDesignerMetaDataBaseItemInterface();
}

struct seaqt_string QDesignerMetaDataBaseItemInterface_name(const QDesignerMetaDataBaseItemInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerMetaDataBaseItemInterface_setName(QDesignerMetaDataBaseItemInterface* self, struct seaqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct seaqt_array /* of QWidget* */  QDesignerMetaDataBaseItemInterface_tabOrder(const QDesignerMetaDataBaseItemInterface* self) {
	QList<QWidget *> _ret = self->tabOrder();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct seaqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerMetaDataBaseItemInterface_setTabOrder(QDesignerMetaDataBaseItemInterface* self, struct seaqt_array /* of QWidget* */  tabOrder) {
	QList<QWidget *> tabOrder_QList;
	tabOrder_QList.reserve(tabOrder.len);
	QWidget** tabOrder_arr = static_cast<QWidget**>(tabOrder.data);
	for(size_t i = 0; i < tabOrder.len; ++i) {
		tabOrder_QList.push_back(tabOrder_arr[i]);
	}
	self->setTabOrder(tabOrder_QList);
}

bool QDesignerMetaDataBaseItemInterface_enabled(const QDesignerMetaDataBaseItemInterface* self) {
	return self->enabled();
}

void QDesignerMetaDataBaseItemInterface_setEnabled(QDesignerMetaDataBaseItemInterface* self, bool b) {
	self->setEnabled(b);
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_name(void* self, intptr_t slot) {
	VirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__name = slot;
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_setName(void* self, intptr_t slot) {
	VirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setName = slot;
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_tabOrder(void* self, intptr_t slot) {
	VirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabOrder = slot;
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_setTabOrder(void* self, intptr_t slot) {
	VirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setTabOrder = slot;
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_enabled(void* self, intptr_t slot) {
	VirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enabled = slot;
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_setEnabled(void* self, intptr_t slot) {
	VirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<VirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEnabled = slot;
	return true;
}

void QDesignerMetaDataBaseItemInterface_delete(QDesignerMetaDataBaseItemInterface* self) {
	delete self;
}

void QDesignerMetaDataBaseInterface_virtbase(QDesignerMetaDataBaseInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerMetaDataBaseInterface_metaObject(const QDesignerMetaDataBaseInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerMetaDataBaseInterface_metacast(QDesignerMetaDataBaseInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct seaqt_string QDesignerMetaDataBaseInterface_tr(const char* s) {
	QString _ret = QDesignerMetaDataBaseInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_item(const QDesignerMetaDataBaseInterface* self, QObject* object) {
	return self->item(object);
}

void QDesignerMetaDataBaseInterface_add(QDesignerMetaDataBaseInterface* self, QObject* object) {
	self->add(object);
}

void QDesignerMetaDataBaseInterface_remove(QDesignerMetaDataBaseInterface* self, QObject* object) {
	self->remove(object);
}

struct seaqt_array /* of QObject* */  QDesignerMetaDataBaseInterface_objects(const QDesignerMetaDataBaseInterface* self) {
	QList<QObject *> _ret = self->objects();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct seaqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerMetaDataBaseInterface_changed(QDesignerMetaDataBaseInterface* self) {
	self->changed();
}

void QDesignerMetaDataBaseInterface_connect_changed(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
	QDesignerMetaDataBaseInterface::connect(self, static_cast<void (QDesignerMetaDataBaseInterface::*)()>(&QDesignerMetaDataBaseInterface::changed), self, [=]() {
		miqt_exec_callback_QDesignerMetaDataBaseInterface_changed(slot);
	});
}

struct seaqt_string QDesignerMetaDataBaseInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerMetaDataBaseInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct seaqt_string QDesignerMetaDataBaseInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerMetaDataBaseInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct seaqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerMetaDataBaseInterface_delete(QDesignerMetaDataBaseInterface* self) {
	delete self;
}

