#pragma once
#ifndef SEAQT_QTMULTIMEDIA_GEN_QCAMERAIMAGECAPTURE_H
#define SEAQT_QTMULTIMEDIA_GEN_QCAMERAIMAGECAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libseaqt/libseaqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraImageCapture;
class QChildEvent;
class QEvent;
class QImage;
class QImageEncoderSettings;
class QMediaBindableInterface;
class QMediaObject;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSize;
class QTimerEvent;
class QVariant;
class QVideoFrame;
#else
typedef struct QCameraImageCapture QCameraImageCapture;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QImage QImage;
typedef struct QImageEncoderSettings QImageEncoderSettings;
typedef struct QMediaBindableInterface QMediaBindableInterface;
typedef struct QMediaObject QMediaObject;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QVideoFrame QVideoFrame;
#endif

struct QCameraImageCapture_VTable {
	void (*destructor)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self);
	QMetaObject* (*metaObject)(struct QCameraImageCapture_VTable* vtbl, const QCameraImageCapture* self);
	void* (*metacast)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, const char* param1);
	int (*metacall)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, int param1, int param2, void** param3);
	QMediaObject* (*mediaObject)(struct QCameraImageCapture_VTable* vtbl, const QCameraImageCapture* self);
	bool (*setMediaObject)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, QMediaObject* mediaObject);
	bool (*event)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, QEvent* event);
	bool (*eventFilter)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, QObject* watched, QEvent* event);
	void (*timerEvent)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, QTimerEvent* event);
	void (*childEvent)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, QChildEvent* event);
	void (*customEvent)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, QEvent* event);
	void (*connectNotify)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, QMetaMethod* signal);
	void (*disconnectNotify)(struct QCameraImageCapture_VTable* vtbl, QCameraImageCapture* self, QMetaMethod* signal);
};
QCameraImageCapture* QCameraImageCapture_new(struct QCameraImageCapture_VTable* vtbl, QMediaObject* mediaObject);
QCameraImageCapture* QCameraImageCapture_new2(struct QCameraImageCapture_VTable* vtbl, QMediaObject* mediaObject, QObject* parent);
void QCameraImageCapture_virtbase(QCameraImageCapture* src, QObject** outptr_QObject, QMediaBindableInterface** outptr_QMediaBindableInterface);
QMetaObject* QCameraImageCapture_metaObject(const QCameraImageCapture* self);
void* QCameraImageCapture_metacast(QCameraImageCapture* self, const char* param1);
int QCameraImageCapture_metacall(QCameraImageCapture* self, int param1, int param2, void** param3);
struct miqt_string QCameraImageCapture_tr(const char* s);
struct miqt_string QCameraImageCapture_trUtf8(const char* s);
bool QCameraImageCapture_isAvailable(const QCameraImageCapture* self);
int QCameraImageCapture_availability(const QCameraImageCapture* self);
QMediaObject* QCameraImageCapture_mediaObject(const QCameraImageCapture* self);
int QCameraImageCapture_error(const QCameraImageCapture* self);
struct miqt_string QCameraImageCapture_errorString(const QCameraImageCapture* self);
bool QCameraImageCapture_isReadyForCapture(const QCameraImageCapture* self);
struct miqt_array /* of struct miqt_string */  QCameraImageCapture_supportedImageCodecs(const QCameraImageCapture* self);
struct miqt_string QCameraImageCapture_imageCodecDescription(const QCameraImageCapture* self, struct miqt_string codecName);
struct miqt_array /* of QSize* */  QCameraImageCapture_supportedResolutions(const QCameraImageCapture* self);
QImageEncoderSettings* QCameraImageCapture_encodingSettings(const QCameraImageCapture* self);
void QCameraImageCapture_setEncodingSettings(QCameraImageCapture* self, QImageEncoderSettings* settings);
struct miqt_array /* of int */  QCameraImageCapture_supportedBufferFormats(const QCameraImageCapture* self);
int QCameraImageCapture_bufferFormat(const QCameraImageCapture* self);
void QCameraImageCapture_setBufferFormat(QCameraImageCapture* self, int format);
bool QCameraImageCapture_isCaptureDestinationSupported(const QCameraImageCapture* self, int destination);
int QCameraImageCapture_captureDestination(const QCameraImageCapture* self);
void QCameraImageCapture_setCaptureDestination(QCameraImageCapture* self, int destination);
int QCameraImageCapture_capture(QCameraImageCapture* self);
void QCameraImageCapture_cancelCapture(QCameraImageCapture* self);
void QCameraImageCapture_error2(QCameraImageCapture* self, int id, int error, struct miqt_string errorString);
void QCameraImageCapture_connect_error2(QCameraImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, int, struct miqt_string), void (*release)(intptr_t));
void QCameraImageCapture_readyForCaptureChanged(QCameraImageCapture* self, bool ready);
void QCameraImageCapture_connect_readyForCaptureChanged(QCameraImageCapture* self, intptr_t slot, void (*callback)(intptr_t, bool), void (*release)(intptr_t));
void QCameraImageCapture_bufferFormatChanged(QCameraImageCapture* self, int format);
void QCameraImageCapture_connect_bufferFormatChanged(QCameraImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t));
void QCameraImageCapture_captureDestinationChanged(QCameraImageCapture* self, int destination);
void QCameraImageCapture_connect_captureDestinationChanged(QCameraImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t));
void QCameraImageCapture_imageExposed(QCameraImageCapture* self, int id);
void QCameraImageCapture_connect_imageExposed(QCameraImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int), void (*release)(intptr_t));
void QCameraImageCapture_imageCaptured(QCameraImageCapture* self, int id, QImage* preview);
void QCameraImageCapture_connect_imageCaptured(QCameraImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, QImage*), void (*release)(intptr_t));
void QCameraImageCapture_imageMetadataAvailable(QCameraImageCapture* self, int id, struct miqt_string key, QVariant* value);
void QCameraImageCapture_connect_imageMetadataAvailable(QCameraImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, struct miqt_string, QVariant*), void (*release)(intptr_t));
void QCameraImageCapture_imageAvailable(QCameraImageCapture* self, int id, QVideoFrame* frame);
void QCameraImageCapture_connect_imageAvailable(QCameraImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, QVideoFrame*), void (*release)(intptr_t));
void QCameraImageCapture_imageSaved(QCameraImageCapture* self, int id, struct miqt_string fileName);
void QCameraImageCapture_connect_imageSaved(QCameraImageCapture* self, intptr_t slot, void (*callback)(intptr_t, int, struct miqt_string), void (*release)(intptr_t));
bool QCameraImageCapture_setMediaObject(QCameraImageCapture* self, QMediaObject* mediaObject);
struct miqt_string QCameraImageCapture_tr2(const char* s, const char* c);
struct miqt_string QCameraImageCapture_tr3(const char* s, const char* c, int n);
struct miqt_string QCameraImageCapture_trUtf82(const char* s, const char* c);
struct miqt_string QCameraImageCapture_trUtf83(const char* s, const char* c, int n);
struct miqt_array /* of QSize* */  QCameraImageCapture_supportedResolutions1(const QCameraImageCapture* self, QImageEncoderSettings* settings);
struct miqt_array /* of QSize* */  QCameraImageCapture_supportedResolutions2(const QCameraImageCapture* self, QImageEncoderSettings* settings, bool* continuous);
int QCameraImageCapture_capture1(QCameraImageCapture* self, struct miqt_string location);
QMetaObject* QCameraImageCapture_virtualbase_metaObject(const void* self);
void* QCameraImageCapture_virtualbase_metacast(void* self, const char* param1);
int QCameraImageCapture_virtualbase_metacall(void* self, int param1, int param2, void** param3);
QMediaObject* QCameraImageCapture_virtualbase_mediaObject(const void* self);
bool QCameraImageCapture_virtualbase_setMediaObject(void* self, QMediaObject* mediaObject);
bool QCameraImageCapture_virtualbase_event(void* self, QEvent* event);
bool QCameraImageCapture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
void QCameraImageCapture_virtualbase_timerEvent(void* self, QTimerEvent* event);
void QCameraImageCapture_virtualbase_childEvent(void* self, QChildEvent* event);
void QCameraImageCapture_virtualbase_customEvent(void* self, QEvent* event);
void QCameraImageCapture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
void QCameraImageCapture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QCameraImageCapture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QCameraImageCapture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QCameraImageCapture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QCameraImageCapture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
const QMetaObject* QCameraImageCapture_staticMetaObject();
void QCameraImageCapture_delete(QCameraImageCapture* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
