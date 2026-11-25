/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_dispatch.h"
static inline void runMethod(NtguiWidgetMethod method, NtguiDispatchWidget *w) {
    if (method)
        method(w);
}
void func_00165358(NtguiDispatchWidget *w) {
    if (w->deferred) {
        if (w->stage == 1) {
            if (!w->pending) {
                w->pending = 1;
                return;
            }
            return func_001640E0(w, 0);
        }
    } else {
        if (w->methods->at118 && w->transitionEnabled)
            w->methods->at118(w);
        runMethod(w->methods->at10c, w);
        func_00165428(w);
        runMethod(w->methods->at78, w);
        runMethod(w->methods->at7c, w);
    }
}
