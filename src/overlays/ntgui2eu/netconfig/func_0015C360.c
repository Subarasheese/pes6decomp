/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_0015BDD0(WidgetArray *);
void func_0015C360(WidgetArray *dst, const WidgetArray *src) {
    s32 count = src->count;
    s32 i;
    while (dst->count + count > dst->capacity)
        func_0015BDD0(dst);
    for (i = 0; i < count; i++)
        dst->items[dst->count + i] = src->items[i];
    dst->count += count;
}
