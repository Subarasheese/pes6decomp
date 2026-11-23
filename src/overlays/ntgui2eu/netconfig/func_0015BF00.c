/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_0015BDD0(WidgetArray *);
void func_0015BF00(WidgetArray *dst, s32 pos, WidgetItem *const *item) {
    s32 i;
    if (dst->count >= dst->capacity)
        func_0015BDD0(dst);
    for (i = dst->count - 1; i >= pos; i--)
        dst->items[i + 1] = dst->items[i];
    dst->items[pos] = *item;
    dst->count++;
}
