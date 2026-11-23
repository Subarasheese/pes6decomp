/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_00133A60(WidgetArray *, s32, s32);
extern void func_00133B70(WidgetArray *, WidgetItem *const *);
WidgetArray func_00133DA0(WidgetArray *src, s32 first, s32 last) {
    WidgetArray out;
    s32 i;
    func_00133A60(&out, last - first + 1, src->growth);
    for (i = first; i <= last; i++)
        func_00133B70(&out, &src->items[i]);
    return out;
}
