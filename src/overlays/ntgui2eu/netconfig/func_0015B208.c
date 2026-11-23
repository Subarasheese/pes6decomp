/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_0015AE18(WidgetArray *, s32, s32);
extern void func_0015AF28(WidgetArray *, WidgetItem *const *);
extern void func_0015B038(WidgetArray *, s32);
WidgetArray func_0015B208(WidgetArray *src, s32 first, s32 last) {
    WidgetArray out;
    s32 i;
    func_0015AE18(&out, last - first + 1, src->growth);
    for (i = first; i <= last; i++) {
        WidgetItem **slot = &src->items[i];
        func_0015B038(src, i);
        func_0015AF28(&out, slot);
    }
    return out;
}
