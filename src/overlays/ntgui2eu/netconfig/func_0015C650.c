/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_0015C588(WidgetArray *);
void func_0015C650(WidgetArray *dst, WidgetItem *const *item) {
    if (dst->count >= dst->capacity)
        func_0015C588(dst);
    dst->items[dst->count] = *item;
    dst->count++;
}
