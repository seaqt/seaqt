#include <QQuickGraphicsDevice>
#include <qquickgraphicsdevice.h>
#include "gen_qquickgraphicsdevice.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QQuickGraphicsDevice* QQuickGraphicsDevice_new() {
	return new (std::nothrow) QQuickGraphicsDevice();
}

QQuickGraphicsDevice* QQuickGraphicsDevice_new2(QQuickGraphicsDevice* other) {
	return new (std::nothrow) QQuickGraphicsDevice(*other);
}

void QQuickGraphicsDevice_operatorAssign(QQuickGraphicsDevice* self, QQuickGraphicsDevice* other) {
	self->operator=(*other);
}

bool QQuickGraphicsDevice_isNull(const QQuickGraphicsDevice* self) {
	return self->isNull();
}

void QQuickGraphicsDevice_delete(QQuickGraphicsDevice* self) {
	delete self;
}

