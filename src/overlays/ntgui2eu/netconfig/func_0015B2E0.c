/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"

extern void func_0015AE60(WidgetArray *);
void func_0015B2E0(WidgetArray *dst, s32 position, const WidgetArray *src) {
    s32 count = src->count;
    s32 i;
    while (dst->count + count > dst->capacity)
        func_0015AE60(dst);
    for (i = dst->count + count - 1; i >= position + count; --i)
        dst->items[i + 1] = dst->items[i];
    for (i = 0; i < count; i++)
        dst->items[position + i] = src->items[i];
    dst->count += count;
}
