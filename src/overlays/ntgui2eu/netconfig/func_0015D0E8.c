/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_0015CCF8(WidgetArray *, s32, s32);
extern void func_0015CE08(WidgetArray *, WidgetItem *const *);
extern void func_0015CF18(WidgetArray *, s32);
WidgetArray func_0015D0E8(WidgetArray *src, s32 first, s32 last) {
    WidgetArray out;
    s32 i;
    func_0015CCF8(&out, last - first + 1, src->growth);
    for (i = first; i <= last; i++) {
        WidgetItem **slot = &src->items[i];
        func_0015CF18(src, i);
        func_0015CE08(&out, slot);
    }
    return out;
}
