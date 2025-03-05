#include <QChildEvent>
#include <QEvent>
#include <QImage>
#include <QImageCapture>
#include <QList>
#include <QMediaCaptureSession>
#include <QMediaMetaData>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVideoFrame>
#include <qimagecapture.h>
#include "gen_qimagecapture.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

class VirtualQImageCapture final : public QImageCapture {
	struct QImageCapture_VTable* vtbl;
public:

	VirtualQImageCapture(struct QImageCapture_VTable* vtbl): QImageCapture(), vtbl(vtbl) {};
	VirtualQImageCapture(struct QImageCapture_VTable* vtbl, QObject* parent): QImageCapture(parent), vtbl(vtbl) {};

	virtual ~VirtualQImageCapture() override { if(vtbl->destructor) vtbl->destructor(vtbl, this); }

	// Subclass to allow providing a Go implementation
	virtual const QMetaObject* metaObject() const override {
		if (vtbl->metaObject == 0) {
			return QImageCapture::metaObject();
		}


		QMetaObject* callback_return_value = vtbl->metaObject(vtbl, this);

		return callback_return_value;
	}

	friend QMetaObject* QImageCapture_virtualbase_metaObject(const void* self);

	// Subclass to allow providing a Go implementation
	virtual void* qt_metacast(const char* param1) override {
		if (vtbl->metacast == 0) {
			return QImageCapture::qt_metacast(param1);
		}

		const char* sigval1 = (const char*) param1;

		void* callback_return_value = vtbl->metacast(vtbl, this, sigval1);

		return callback_return_value;
	}

	friend void* QImageCapture_virtualbase_metacast(void* self, const char* param1);

	// Subclass to allow providing a Go implementation
	virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
		if (vtbl->metacall == 0) {
			return QImageCapture::qt_metacall(param1, param2, param3);
		}

		QMetaObject::Call param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int sigval2 = param2;
		void** sigval3 = param3;

		int callback_return_value = vtbl->metacall(vtbl, this, sigval1, sigval2, sigval3);

		return static_cast<int>(callback_return_value);
	}

	friend int QImageCapture_virtualbase_metacall(void* self, int param1, int param2, void** param3);

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (vtbl->event == 0) {
			return QImageCapture::event(event);
		}

		QEvent* sigval1 = event;

		bool callback_return_value = vtbl->event(vtbl, this, sigval1);

		return callback_return_value;
	}

	friend bool QImageCapture_virtualbase_event(void* self, QEvent* event);

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (vtbl->eventFilter == 0) {
			return QImageCapture::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = vtbl->eventFilter(vtbl, this, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QImageCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (vtbl->timerEvent == 0) {
			QImageCapture::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;

		vtbl->timerEvent(vtbl, this, sigval1);

	}

	friend void QImageCapture_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (vtbl->childEvent == 0) {
			QImageCapture::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;

		vtbl->childEvent(vtbl, this, sigval1);

	}

	friend void QImageCapture_virtualbase_childEvent(void* self, QChildEvent* event);

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (vtbl->customEvent == 0) {
			QImageCapture::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;

		vtbl->customEvent(vtbl, this, sigval1);

	}

	friend void QImageCapture_virtualbase_customEvent(void* self, QEvent* event);

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (vtbl->connectNotify == 0) {
			QImageCapture::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		vtbl->connectNotify(vtbl, this, sigval1);

	}

	friend void QImageCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (vtbl->disconnectNotify == 0) {
			QImageCapture::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		vtbl->disconnectNotify(vtbl, this, sigval1);

	}

	friend void QImageCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QImageCapture_protectedbase_sender(const void* self);
	friend int QImageCapture_protectedbase_senderSignalIndex(const void* self);
	friend int QImageCapture_protectedbase_receivers(const void* self, const char* signal);
	friend bool QImageCapture_protectedbase_isSignalConnected(const void* self, QMetaMethod* signal);
};

QImageCapture* QImageCapture_new(struct QImageCapture_VTable* vtbl) {
	return new VirtualQImageCapture(vtbl);
}

QImageCapture* QImageCapture_new2(struct QImageCapture_VTable* vtbl, QObject* parent) {
	return new VirtualQImageCapture(vtbl, parent);
}

void QImageCapture_virtbase(QImageCapture* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QImageCapture_metaObject(const QImageCapture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QImageCapture_metacast(QImageCapture* self, const char* param1) {
	return self->qt_metacast(param1);
}

int QImageCapture_metacall(QImageCapture* self, int param1, int param2, void** param3) {
	return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

struct miqt_string QImageCapture_tr(const char* s) {
	QString _ret = QImageCapture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImageCapture_isAvailable(const QImageCapture* self) {
	return self->isAvailable();
}

QMediaCaptureSession* QImageCapture_captureSession(const QImageCapture* self) {
	return self->captureSession();
}

int QImageCapture_error(const QImageCapture* self) {
	QImageCapture::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QImageCapture_errorString(const QImageCapture* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QImageCapture_isReadyForCapture(const QImageCapture* self) {
	return self->isReadyForCapture();
}

int QImageCapture_fileFormat(const QImageCapture* self) {
	QImageCapture::FileFormat _ret = self->fileFormat();
	return static_cast<int>(_ret);
}

void QImageCapture_setFileFormat(QImageCapture* self, int format) {
	self->setFileFormat(static_cast<QImageCapture::FileFormat>(format));
}

struct miqt_array /* of int */  QImageCapture_supportedFormats() {
	QList<QImageCapture::FileFormat> _ret = QImageCapture::supportedFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QImageCapture::FileFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QImageCapture_fileFormatName(int c) {
	QString _ret = QImageCapture::fileFormatName(static_cast<QImageCapture::FileFormat>(c));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageCapture_fileFormatDescription(int c) {
	QString _ret = QImageCapture::fileFormatDescription(static_cast<QImageCapture::FileFormat>(c));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QImageCapture_resolution(const QImageCapture* self) {
	return new QSize(self->resolution());
}

void QImageCapture_setResolution(QImageCapture* self, QSize* resolution) {
	self->setResolution(*resolution);
}

void QImageCapture_setResolution2(QImageCapture* self, int width, int height) {
	self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

int QImageCapture_quality(const QImageCapture* self) {
	QImageCapture::Quality _ret = self->quality();
	return static_cast<int>(_ret);
}

void QImageCapture_setQuality(QImageCapture* self, int quality) {
	self->setQuality(static_cast<QImageCapture::Quality>(quality));
}

QMediaMetaData* QImageCapture_metaData(const QImageCapture* self) {
	return new QMediaMetaData(self->metaData());
}

void QImageCapture_setMetaData(QImageCapture* self, QMediaMetaData* metaData) {
	self->setMetaData(*metaData);
}

void QImageCapture_addMetaData(QImageCapture* self, QMediaMetaData* metaData) {
	self->addMetaData(*metaData);
}

int QImageCapture_captureToFile(QImageCapture* self) {
	return self->captureToFile();
}

int QImageCapture_capture(QImageCapture* self) {
	return self->capture();
}

void QImageCapture_errorChanged(QImageCapture* self) {
	self->errorChanged();
}

void QImageCapture_connect_errorChanged(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t);
		void operator()() {
			callback(slot);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::errorChanged), self, local_caller{slot, callback, release});
}

void QImageCapture_errorOccurred(QImageCapture* self, int id, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->errorOccurred(static_cast<int>(id), static_cast<QImageCapture::Error>(error), errorString_QString);
}

void QImageCapture_connect_errorOccurred(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, int, struct miqt_string), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t, int, int, struct miqt_string), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t, int, int, struct miqt_string);
		void operator()(int id, QImageCapture::Error error, const QString& errorString) {
			int sigval1 = id;
			QImageCapture::Error error_ret = error;
			int sigval2 = static_cast<int>(error_ret);
			const QString errorString_ret = errorString;
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray errorString_b = errorString_ret.toUtf8();
			struct miqt_string errorString_ms;
			errorString_ms.len = errorString_b.length();
			errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
			memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
			struct miqt_string sigval3 = errorString_ms;
			callback(slot, sigval1, sigval2, sigval3);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, QImageCapture::Error, const QString&)>(&QImageCapture::errorOccurred), self, local_caller{slot, callback, release});
}

void QImageCapture_readyForCaptureChanged(QImageCapture* self, bool ready) {
	self->readyForCaptureChanged(ready);
}

void QImageCapture_connect_readyForCaptureChanged(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t, bool), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t, bool), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t, bool);
		void operator()(bool ready) {
			bool sigval1 = ready;
			callback(slot, sigval1);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(bool)>(&QImageCapture::readyForCaptureChanged), self, local_caller{slot, callback, release});
}

void QImageCapture_metaDataChanged(QImageCapture* self) {
	self->metaDataChanged();
}

void QImageCapture_connect_metaDataChanged(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t);
		void operator()() {
			callback(slot);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::metaDataChanged), self, local_caller{slot, callback, release});
}

void QImageCapture_fileFormatChanged(QImageCapture* self) {
	self->fileFormatChanged();
}

void QImageCapture_connect_fileFormatChanged(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t);
		void operator()() {
			callback(slot);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::fileFormatChanged), self, local_caller{slot, callback, release});
}

void QImageCapture_qualityChanged(QImageCapture* self) {
	self->qualityChanged();
}

void QImageCapture_connect_qualityChanged(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t);
		void operator()() {
			callback(slot);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::qualityChanged), self, local_caller{slot, callback, release});
}

void QImageCapture_resolutionChanged(QImageCapture* self) {
	self->resolutionChanged();
}

void QImageCapture_connect_resolutionChanged(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t);
		void operator()() {
			callback(slot);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)()>(&QImageCapture::resolutionChanged), self, local_caller{slot, callback, release});
}

void QImageCapture_imageExposed(QImageCapture* self, int id) {
	self->imageExposed(static_cast<int>(id));
}

void QImageCapture_connect_imageExposed(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t, int);
		void operator()(int id) {
			int sigval1 = id;
			callback(slot, sigval1);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int)>(&QImageCapture::imageExposed), self, local_caller{slot, callback, release});
}

void QImageCapture_imageCaptured(QImageCapture* self, int id, QImage* preview) {
	self->imageCaptured(static_cast<int>(id), *preview);
}

void QImageCapture_connect_imageCaptured(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, QImage*), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t, int, QImage*), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t, int, QImage*);
		void operator()(int id, const QImage& preview) {
			int sigval1 = id;
			const QImage& preview_ret = preview;
			// Cast returned reference into pointer
			QImage* sigval2 = const_cast<QImage*>(&preview_ret);
			callback(slot, sigval1, sigval2);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QImage&)>(&QImageCapture::imageCaptured), self, local_caller{slot, callback, release});
}

void QImageCapture_imageMetadataAvailable(QImageCapture* self, int id, QMediaMetaData* metaData) {
	self->imageMetadataAvailable(static_cast<int>(id), *metaData);
}

void QImageCapture_connect_imageMetadataAvailable(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, QMediaMetaData*), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t, int, QMediaMetaData*), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t, int, QMediaMetaData*);
		void operator()(int id, const QMediaMetaData& metaData) {
			int sigval1 = id;
			const QMediaMetaData& metaData_ret = metaData;
			// Cast returned reference into pointer
			QMediaMetaData* sigval2 = const_cast<QMediaMetaData*>(&metaData_ret);
			callback(slot, sigval1, sigval2);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QMediaMetaData&)>(&QImageCapture::imageMetadataAvailable), self, local_caller{slot, callback, release});
}

void QImageCapture_imageAvailable(QImageCapture* self, int id, QVideoFrame* frame) {
	self->imageAvailable(static_cast<int>(id), *frame);
}

void QImageCapture_connect_imageAvailable(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, QVideoFrame*), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t, int, QVideoFrame*), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t, int, QVideoFrame*);
		void operator()(int id, const QVideoFrame& frame) {
			int sigval1 = id;
			const QVideoFrame& frame_ret = frame;
			// Cast returned reference into pointer
			QVideoFrame* sigval2 = const_cast<QVideoFrame*>(&frame_ret);
			callback(slot, sigval1, sigval2);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QVideoFrame&)>(&QImageCapture::imageAvailable), self, local_caller{slot, callback, release});
}

void QImageCapture_imageSaved(QImageCapture* self, int id, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->imageSaved(static_cast<int>(id), fileName_QString);
}

void QImageCapture_connect_imageSaved(QImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, struct miqt_string), void (*release)(intptr_t)) {
	struct local_caller : seaqt::caller {
		constexpr local_caller(intptr_t slot, void (*callback)(intptr_t, int, struct miqt_string), void (*release)(intptr_t)) : callback(callback), caller{slot, release} {}
		void (*callback)(intptr_t, int, struct miqt_string);
		void operator()(int id, const QString& fileName) {
			int sigval1 = id;
			const QString fileName_ret = fileName;
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray fileName_b = fileName_ret.toUtf8();
			struct miqt_string fileName_ms;
			fileName_ms.len = fileName_b.length();
			fileName_ms.data = static_cast<char*>(malloc(fileName_ms.len));
			memcpy(fileName_ms.data, fileName_b.data(), fileName_ms.len);
			struct miqt_string sigval2 = fileName_ms;
			callback(slot, sigval1, sigval2);
		}
	};
	VirtualQImageCapture::connect(self, static_cast<void (QImageCapture::*)(int, const QString&)>(&QImageCapture::imageSaved), self, local_caller{slot, callback, release});
}

struct miqt_string QImageCapture_tr2(const char* s, const char* c) {
	QString _ret = QImageCapture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QImageCapture_tr3(const char* s, const char* c, int n) {
	QString _ret = QImageCapture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QImageCapture_captureToFile1(QImageCapture* self, struct miqt_string location) {
	QString location_QString = QString::fromUtf8(location.data, location.len);
	return self->captureToFile(location_QString);
}

QMetaObject* QImageCapture_virtualbase_metaObject(const void* self) {

	return (QMetaObject*) ( (const VirtualQImageCapture*)(self) )->QImageCapture::metaObject();

}

void* QImageCapture_virtualbase_metacast(void* self, const char* param1) {

	return ( (VirtualQImageCapture*)(self) )->QImageCapture::qt_metacast(param1);

}

int QImageCapture_virtualbase_metacall(void* self, int param1, int param2, void** param3) {

	return ( (VirtualQImageCapture*)(self) )->QImageCapture::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);

}

bool QImageCapture_virtualbase_event(void* self, QEvent* event) {

	return ( (VirtualQImageCapture*)(self) )->QImageCapture::event(event);

}

bool QImageCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (VirtualQImageCapture*)(self) )->QImageCapture::eventFilter(watched, event);

}

void QImageCapture_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (VirtualQImageCapture*)(self) )->QImageCapture::timerEvent(event);

}

void QImageCapture_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (VirtualQImageCapture*)(self) )->QImageCapture::childEvent(event);

}

void QImageCapture_virtualbase_customEvent(void* self, QEvent* event) {

	( (VirtualQImageCapture*)(self) )->QImageCapture::customEvent(event);

}

void QImageCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQImageCapture*)(self) )->QImageCapture::connectNotify(*signal);

}

void QImageCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (VirtualQImageCapture*)(self) )->QImageCapture::disconnectNotify(*signal);

}

const QMetaObject* QImageCapture_staticMetaObject() { return &QImageCapture::staticMetaObject; }
QObject* QImageCapture_protectedbase_sender(const void* self) {
	VirtualQImageCapture* self_cast = static_cast<VirtualQImageCapture*>( (QImageCapture*)(self) );
	
	return self_cast->sender();

}

int QImageCapture_protectedbase_senderSignalIndex(const void* self) {
	VirtualQImageCapture* self_cast = static_cast<VirtualQImageCapture*>( (QImageCapture*)(self) );
	
	return self_cast->senderSignalIndex();

}

int QImageCapture_protectedbase_receivers(const void* self, const char* signal) {
	VirtualQImageCapture* self_cast = static_cast<VirtualQImageCapture*>( (QImageCapture*)(self) );
	
	return self_cast->receivers(signal);

}

bool QImageCapture_protectedbase_isSignalConnected(const void* self, QMetaMethod* signal) {
	VirtualQImageCapture* self_cast = static_cast<VirtualQImageCapture*>( (QImageCapture*)(self) );
	
	return self_cast->isSignalConnected(*signal);

}

void QImageCapture_delete(QImageCapture* self) {
	delete self;
}

