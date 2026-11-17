#include <QAction>
#include <QDesignerFormEditorPluginInterface>
#include <abstractformeditorplugin.h>
#include "gen_abstractformeditorplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

bool QDesignerFormEditorPluginInterface_isInitialized(const QDesignerFormEditorPluginInterface* self) {
	return self->isInitialized();
}

QAction* QDesignerFormEditorPluginInterface_action(const QDesignerFormEditorPluginInterface* self) {
	return self->action();
}

void QDesignerFormEditorPluginInterface_delete(QDesignerFormEditorPluginInterface* self) {
	delete self;
}

