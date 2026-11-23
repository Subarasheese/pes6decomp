/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_0015CD40(WidgetArray *);
void func_0015CE08(WidgetArray *dst, WidgetItem *const *item) {
    if (dst->count >= dst->capacity)
        func_0015CD40(dst);
    dst->items[dst->count] = *item;
    dst->count++;
}
