/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_00133A60(WidgetArray *, s32, s32);
extern void func_00133B70(WidgetArray *, WidgetItem *const *);
extern void func_00133C88(WidgetArray *, s32);
WidgetArray func_00133E58(WidgetArray *src, s32 first, s32 last) {
    WidgetArray out;
    s32 i;
    func_00133A60(&out, last - first + 1, src->growth);
    for (i = first; i <= last; i++) {
        WidgetItem **slot = &src->items[i];
        func_00133C88(src, i);
        func_00133B70(&out, slot);
    }
    return out;
}
