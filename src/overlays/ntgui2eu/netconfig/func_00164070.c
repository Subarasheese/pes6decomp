/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_dispatch.h"
void func_00164070(NtguiDispatchWidget *w, s32 x, s32 y, s32 *localX, s32 *localY) {
    w->methods->getOrigin(w, localX, localY);
    *localX = x - *localX;
    *localY = y - *localY;
}
