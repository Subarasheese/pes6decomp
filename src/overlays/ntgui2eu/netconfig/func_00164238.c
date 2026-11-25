/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_widget_changes.h"

extern s32 func_001AE590(const void *a, const void *b, s32 size);

s32 func_00164238(const NtguiWidgetAttribute *a, const NtguiWidgetAttribute *b) {
    return func_001AE590(a, b, sizeof(*a)) == 0;
}
