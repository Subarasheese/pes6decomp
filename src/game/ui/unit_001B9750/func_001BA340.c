/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 count;
    s32 *items;
} WidgetList;
extern s32 func_001BA5C0(s32 node);
extern s32 func_001B9250(s32 root, s32 (*visit)(s32 node));
void func_001BA340(const WidgetList *list) {
    s32 i;
    s32 n;
    if (!list)
        return;
    n = list->count;
    for (i = 0; i < n; ++i) {
        func_001B9250(list->items[i], func_001BA5C0);
    }
}
