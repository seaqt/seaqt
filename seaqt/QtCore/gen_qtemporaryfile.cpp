#include <QChildEvent>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTemporaryFile>
#include <QTimerEvent>
#include <qtemporaryfile.h>
#include "gen_qtemporaryfile.h"

#ifdef __cplusplus
extern "C" {
#endif

QMetaObject* miqt_exec_callback_QTemporaryFile_metaObject(const QTemporaryFile*, intptr_t);
void* miqt_exec_callback_QTemporaryFile_metacast(QTemporaryFile*, intptr_t, const char*);
int miqt_exec_callback_QTemporaryFile_metacall(QTemporaryFile*, intptr_t, int, int, void**);
struct miqt_string miqt_exec_callback_QTemporaryFile_fileName(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_openWithFlags(QTemporaryFile*, intptr_t, int);
long long miqt_exec_callback_QTemporaryFile_size(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_resize(QTemporaryFile*, intptr_t, long long);
int miqt_exec_callback_QTemporaryFile_permissions(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_setPermissions(QTemporaryFile*, intptr_t, int);
void miqt_exec_callback_QTemporaryFile_close(QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_isSequential(const QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_pos(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_seek(QTemporaryFile*, intptr_t, long long);
bool miqt_exec_callback_QTemporaryFile_atEnd(const QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_readData(QTemporaryFile*, intptr_t, char*, long long);
long long miqt_exec_callback_QTemporaryFile_writeData(QTemporaryFile*, intptr_t, const char*, long long);
long long miqt_exec_callback_QTemporaryFile_readLineData(QTemporaryFile*, intptr_t, char*, long long);
bool miqt_exec_callback_QTemporaryFile_reset(QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_bytesAvailable(const QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_bytesToWrite(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_canReadLine(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_waitForReadyRead(QTemporaryFile*, intptr_t, int);
bool miqt_exec_callback_QTemporaryFile_waitForBytesWritten(QTemporaryFile*, intptr_t, int);
long long miqt_exec_callback_QTemporaryFile_skipData(QTemporaryFile*, intptr_t, long long);
bool miqt_exec_callback_QTemporaryFile_event(QTemporaryFile*, intptr_t, QEvent*);
bool miqt_exec_callback_QTemporaryFile_eventFilter(QTemporaryFile*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTemporaryFile_timerEvent(QTemporaryFile*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTemporaryFile_childEvent(QTemporaryFile*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTemporaryFile_customEvent(QTemporaryFile*, intptr_t, QEvent*);
void miqt_exec_callback_QTemporaryFile_connectNotify(QTemporaryFile*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTemporaryFile_disconnectNotify(QTemporaryFile*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQTemporaryFile final : public QTemporaryFile {
public:

	VirtualQTemporaryFile(): QTemporaryFile() {};
	VirtualQTemporaryFile(const QString& templateName): QTemporaryFile(templateName) {};
	VirtualQTemporaryFile(QObject* parent): QTemporaryFile(parent) {};
	VirtualQTemporaryFile(const QString& templateName, QObject* parent): QTemporaryFile(templateName, parent) {};

	virtual ~VirtualQTemporaryFile() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metaObject = 0;

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (handle__metaObject == 0) {
			return QTemporaryFile::metaObject();
		}
		

		QMetaObject* callback_return_value = miqt_exec_callback_QTemporaryFile_metaObject(this, handle__metaObject);

		return callback_return_value;
	}

	friend QMetaObject* QTemporaryFile_virtualbase_metaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacast = 0;

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (handle__metacast == 0) {
			return QTemporaryFile::qt_metacast(param1);
		}
		
		const char* sigval1 = (const char*) param1;

		void* callback_return_value = miqt_exec_callback_QTemporaryFile_metacast(this, handle__metacast, sigval1);

		return callback_return_value;
	}

	friend void* QTemporaryFile_virtualbase_metacast(void* self, const char* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metacall = 0;

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (handle__metacall == 0) {
			return QTemporaryFile::qt_metacall(param1, param2, param3);
		}
		
		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;

		int callback_return_value = miqt_exec_callback_QTemporaryFile_metacall(this, handle__metacall, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	friend int QTemporaryFile_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__fileName = 0;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (handle__fileName == 0) {
			return QTemporaryFile::fileName();
		}
		

		struct miqt_string callback_return_value = miqt_exec_callback_QTemporaryFile_fileName(this, handle__fileName);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	friend struct miqt_string QTemporaryFile_virtualbase_fileName(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__openWithFlags = 0;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode flags) override {
		if (handle__openWithFlags == 0) {
			return QTemporaryFile::open(flags);
		}
		
		QIODeviceBase::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_openWithFlags(this, handle__openWithFlags, sigval1);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_openWithFlags(void* self, int flags);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__size = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (handle__size == 0) {
			return QTemporaryFile::size();
		}
		

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_size(this, handle__size);

		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resize = 0;

	// Subclass to allow providing a Go implementation
	virtual bool resize(qint64 sz) override {
		if (handle__resize == 0) {
			return QTemporaryFile::resize(sz);
		}
		
		qint64 sz_ret = sz;
		long long sigval1 = static_cast<long long>(sz_ret);

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_resize(this, handle__resize, sigval1);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_resize(void* self, long long sz);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__permissions = 0;

	// Subclass to allow providing a Go implementation
	virtual QFileDevice::Permissions permissions() const override {
		if (handle__permissions == 0) {
			return QTemporaryFile::permissions();
		}
		

		int callback_return_value = miqt_exec_callback_QTemporaryFile_permissions(this, handle__permissions);

		return static_cast<QFileDevice::Permissions>(callback_return_value);
	}

	friend int QTemporaryFile_virtualbase_permissions(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPermissions = 0;

	// Subclass to allow providing a Go implementation
	virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
		if (handle__setPermissions == 0) {
			return QTemporaryFile::setPermissions(permissionSpec);
		}
		
		QFileDevice::Permissions permissionSpec_ret = permissionSpec;
		int sigval1 = static_cast<int>(permissionSpec_ret);

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_setPermissions(this, handle__setPermissions, sigval1);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_setPermissions(void* self, int permissionSpec);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__close = 0;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (handle__close == 0) {
			QTemporaryFile::close();
			return;
		}
		

		miqt_exec_callback_QTemporaryFile_close(this, handle__close);

		
	}

	friend void QTemporaryFile_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__isSequential = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (handle__isSequential == 0) {
			return QTemporaryFile::isSequential();
		}
		

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_isSequential(this, handle__isSequential);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__pos = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (handle__pos == 0) {
			return QTemporaryFile::pos();
		}
		

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_pos(this, handle__pos);

		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__seek = 0;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 offset) override {
		if (handle__seek == 0) {
			return QTemporaryFile::seek(offset);
		}
		
		qint64 offset_ret = offset;
		long long sigval1 = static_cast<long long>(offset_ret);

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_seek(this, handle__seek, sigval1);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_seek(void* self, long long offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__atEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (handle__atEnd == 0) {
			return QTemporaryFile::atEnd();
		}
		

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_atEnd(this, handle__atEnd);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (handle__readData == 0) {
			return QTemporaryFile::readData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_readData(this, handle__readData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_readData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (handle__writeData == 0) {
			return QTemporaryFile::writeData(data, len);
		}
		
		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_writeData(this, handle__writeData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_writeData(void* self, const char* data, long long len);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readLineData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (handle__readLineData == 0) {
			return QTemporaryFile::readLineData(data, maxlen);
		}
		
		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_readLineData(this, handle__readLineData, sigval1, sigval2);

		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__reset = 0;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (handle__reset == 0) {
			return QTemporaryFile::reset();
		}
		

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_reset(this, handle__reset);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (handle__bytesAvailable == 0) {
			return QTemporaryFile::bytesAvailable();
		}
		

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_bytesAvailable(this, handle__bytesAvailable);

		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__bytesToWrite = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (handle__bytesToWrite == 0) {
			return QTemporaryFile::bytesToWrite();
		}
		

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_bytesToWrite(this, handle__bytesToWrite);

		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__canReadLine = 0;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (handle__canReadLine == 0) {
			return QTemporaryFile::canReadLine();
		}
		

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_canReadLine(this, handle__canReadLine);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForReadyRead = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (handle__waitForReadyRead == 0) {
			return QTemporaryFile::waitForReadyRead(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_waitForReadyRead(this, handle__waitForReadyRead, sigval1);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__waitForBytesWritten = 0;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (handle__waitForBytesWritten == 0) {
			return QTemporaryFile::waitForBytesWritten(msecs);
		}
		
		int sigval1 = msecs;

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_waitForBytesWritten(this, handle__waitForBytesWritten, sigval1);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__skipData = 0;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (handle__skipData == 0) {
			return QTemporaryFile::skipData(maxSize);
		}
		
		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_skipData(this, handle__skipData, sigval1);

		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_skipData(void* self, long long maxSize);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QTemporaryFile::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QTemporaryFile::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QTemporaryFile::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QTemporaryFile_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QTemporaryFile_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QTemporaryFile::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QTemporaryFile_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QTemporaryFile_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QTemporaryFile::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QTemporaryFile_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QTemporaryFile_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QTemporaryFile::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTemporaryFile_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QTemporaryFile_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QTemporaryFile::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QTemporaryFile_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QTemporaryFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QTemporaryFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QTemporaryFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QTemporaryFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTemporaryFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTemporaryFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTemporaryFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTemporaryFile* QTemporaryFile_new() {
	return new VirtualQTemporaryFile();
}

QTemporaryFile* QTemporaryFile_new2(struct miqt_string templateName) {
	QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
	return new VirtualQTemporaryFile(templateName_QString);
}

QTemporaryFile* QTemporaryFile_new3(QObject* parent) {
	return new VirtualQTemporaryFile(parent);
}

QTemporaryFile* QTemporaryFile_new4(struct miqt_string templateName, QObject* parent) {
	QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
	return new VirtualQTemporaryFile(templateName_QString, parent);
}

void QTemporaryFile_virtbase(QTemporaryFile* src, QFile** outptr_QFile) {
	*outptr_QFile = static_cast<QFile*>(src);
}

QMetaObject* QTemporaryFile_metaObject(const QTemporaryFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTemporaryFile_metacast(QTemporaryFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QTemporaryFile_metacall(QTemporaryFile* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct miqt_string QTemporaryFile_tr(const char* s) {
	QString _ret = QTemporaryFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTemporaryFile_autoRemove(const QTemporaryFile* self) {
	return self->autoRemove();
}

void QTemporaryFile_setAutoRemove(QTemporaryFile* self, bool b) {
	self->setAutoRemove(b);
}

bool QTemporaryFile_open(QTemporaryFile* self) {
	return self->open();
}

struct miqt_string QTemporaryFile_fileName(const QTemporaryFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryFile_fileTemplate(const QTemporaryFile* self) {
	QString _ret = self->fileTemplate();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTemporaryFile_setFileTemplate(QTemporaryFile* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setFileTemplate(name_QString);
}

bool QTemporaryFile_rename(QTemporaryFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->rename(newName_QString);
}

QTemporaryFile* QTemporaryFile_createNativeFile(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QTemporaryFile::createNativeFile(fileName_QString);
}

QTemporaryFile* QTemporaryFile_createNativeFileWithFile(QFile* file) {
	return QTemporaryFile::createNativeFile(*file);
}

struct miqt_string QTemporaryFile_tr2(const char* s, const char* c) {
	QString _ret = QTemporaryFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryFile_tr3(const char* s, const char* c, int n) {
	QString _ret = QTemporaryFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTemporaryFile_override_virtual_metaObject(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metaObject = slot;
	return true;
}

QMetaObject* QTemporaryFile_virtualbase_metaObject(const void* self) {

	return (QMetaObject*) ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::metaObject();

}

bool QTemporaryFile_override_virtual_metacast(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacast = slot;
	return true;
}

void* QTemporaryFile_virtualbase_metacast(void* self, const char* param1) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::qt_metacast(param1);

}

bool QTemporaryFile_override_virtual_metacall(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__metacall = slot;
	return true;
}

int QTemporaryFile_virtualbase_metacall(void* self, int param1, int param2, void** param3) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);

}

bool QTemporaryFile_override_virtual_fileName(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__fileName = slot;
	return true;
}

struct miqt_string QTemporaryFile_virtualbase_fileName(const void* self) {

	QString _ret = ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;

}

bool QTemporaryFile_override_virtual_openWithFlags(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__openWithFlags = slot;
	return true;
}

bool QTemporaryFile_virtualbase_openWithFlags(void* self, int flags) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::open(static_cast<VirtualQTemporaryFile::OpenMode>(flags));

}

bool QTemporaryFile_override_virtual_size(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__size = slot;
	return true;
}

long long QTemporaryFile_virtualbase_size(const void* self) {

	qint64 _ret = ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::size();
	return static_cast<long long>(_ret);

}

bool QTemporaryFile_override_virtual_resize(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__resize = slot;
	return true;
}

bool QTemporaryFile_virtualbase_resize(void* self, long long sz) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::resize(static_cast<qint64>(sz));

}

bool QTemporaryFile_override_virtual_permissions(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__permissions = slot;
	return true;
}

int QTemporaryFile_virtualbase_permissions(const void* self) {

	VirtualQTemporaryFile::Permissions _ret = ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::permissions();
	return static_cast<int>(_ret);

}

bool QTemporaryFile_override_virtual_setPermissions(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPermissions = slot;
	return true;
}

bool QTemporaryFile_virtualbase_setPermissions(void* self, int permissionSpec) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::setPermissions(static_cast<VirtualQTemporaryFile::Permissions>(permissionSpec));

}

bool QTemporaryFile_override_virtual_close(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__close = slot;
	return true;
}

void QTemporaryFile_virtualbase_close(void* self) {

	( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::close();

}

bool QTemporaryFile_override_virtual_isSequential(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__isSequential = slot;
	return true;
}

bool QTemporaryFile_virtualbase_isSequential(const void* self) {

	return ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::isSequential();

}

bool QTemporaryFile_override_virtual_pos(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__pos = slot;
	return true;
}

long long QTemporaryFile_virtualbase_pos(const void* self) {

	qint64 _ret = ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::pos();
	return static_cast<long long>(_ret);

}

bool QTemporaryFile_override_virtual_seek(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__seek = slot;
	return true;
}

bool QTemporaryFile_virtualbase_seek(void* self, long long offset) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::seek(static_cast<qint64>(offset));

}

bool QTemporaryFile_override_virtual_atEnd(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__atEnd = slot;
	return true;
}

bool QTemporaryFile_virtualbase_atEnd(const void* self) {

	return ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::atEnd();

}

bool QTemporaryFile_override_virtual_readData(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readData = slot;
	return true;
}

long long QTemporaryFile_virtualbase_readData(void* self, char* data, long long maxlen) {

	qint64 _ret = ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::readData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);

}

bool QTemporaryFile_override_virtual_writeData(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeData = slot;
	return true;
}

long long QTemporaryFile_virtualbase_writeData(void* self, const char* data, long long len) {

	qint64 _ret = ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::writeData(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);

}

bool QTemporaryFile_override_virtual_readLineData(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readLineData = slot;
	return true;
}

long long QTemporaryFile_virtualbase_readLineData(void* self, char* data, long long maxlen) {

	qint64 _ret = ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);

}

bool QTemporaryFile_override_virtual_reset(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__reset = slot;
	return true;
}

bool QTemporaryFile_virtualbase_reset(void* self) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::reset();

}

bool QTemporaryFile_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesAvailable = slot;
	return true;
}

long long QTemporaryFile_virtualbase_bytesAvailable(const void* self) {

	qint64 _ret = ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::bytesAvailable();
	return static_cast<long long>(_ret);

}

bool QTemporaryFile_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__bytesToWrite = slot;
	return true;
}

long long QTemporaryFile_virtualbase_bytesToWrite(const void* self) {

	qint64 _ret = ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::bytesToWrite();
	return static_cast<long long>(_ret);

}

bool QTemporaryFile_override_virtual_canReadLine(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__canReadLine = slot;
	return true;
}

bool QTemporaryFile_virtualbase_canReadLine(const void* self) {

	return ( (const VirtualQTemporaryFile*)(self) )->QTemporaryFile::canReadLine();

}

bool QTemporaryFile_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForReadyRead = slot;
	return true;
}

bool QTemporaryFile_virtualbase_waitForReadyRead(void* self, int msecs) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::waitForReadyRead(static_cast<int>(msecs));

}

bool QTemporaryFile_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__waitForBytesWritten = slot;
	return true;
}

bool QTemporaryFile_virtualbase_waitForBytesWritten(void* self, int msecs) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::waitForBytesWritten(static_cast<int>(msecs));

}

bool QTemporaryFile_override_virtual_skipData(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__skipData = slot;
	return true;
}

long long QTemporaryFile_virtualbase_skipData(void* self, long long maxSize) {

	qint64 _ret = ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::skipData(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);

}

bool QTemporaryFile_override_virtual_event(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QTemporaryFile_virtualbase_event(void* self, QEvent* event) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::event(event);

}

bool QTemporaryFile_override_virtual_eventFilter(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QTemporaryFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::eventFilter(watched, event);

}

bool QTemporaryFile_override_virtual_timerEvent(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QTemporaryFile_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::timerEvent(event);

}

bool QTemporaryFile_override_virtual_childEvent(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QTemporaryFile_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::childEvent(event);

}

bool QTemporaryFile_override_virtual_customEvent(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QTemporaryFile_virtualbase_customEvent(void* self, QEvent* event) {

	( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::customEvent(event);

}

bool QTemporaryFile_override_virtual_connectNotify(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QTemporaryFile_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::connectNotify(*signal);

}

bool QTemporaryFile_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QTemporaryFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQTemporaryFile*)(self) )->QTemporaryFile::disconnectNotify(*signal);

}

const QMetaObject* QTemporaryFile_staticMetaObject() { return &QTemporaryFile::staticMetaObject; }
void QTemporaryFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->setOpenMode(static_cast<VirtualQTemporaryFile::OpenMode>(openMode));

}

void QTemporaryFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
			QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);

	self_cast->setErrorString(errorString_QString);

}

QObject* QTemporaryFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QTemporaryFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QTemporaryFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QTemporaryFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	VirtualQTemporaryFile* self_cast = dynamic_cast<VirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QTemporaryFile_delete(QTemporaryFile* self) {
	delete self;
}

