/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_0015B618(WidgetArray *);
void func_0015BC48(WidgetArray *dst, s32 pos, const WidgetArray *src) {
    s32 count = src->count;
    s32 i;
    while (pos + count > dst->capacity)
        func_0015B618(dst);
    for (i = 0; i < count; i++)
        dst->items[pos + i] = src->items[i];
    dst->count = pos + count;
}
