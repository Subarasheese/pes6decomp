/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_0015B618(WidgetArray *);
void func_0015B6E0(WidgetArray *dst, WidgetItem *const *item) {
    if (dst->count >= dst->capacity)
        func_0015B618(dst);
    dst->items[dst->count] = *item;
    dst->count++;
}
