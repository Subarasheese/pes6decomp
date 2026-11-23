/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_0015AE60(WidgetArray *);
void func_0015AF28(WidgetArray *dst, WidgetItem *const *item) {
    if (dst->count >= dst->capacity)
        func_0015AE60(dst);
    dst->items[dst->count] = *item;
    dst->count++;
}
