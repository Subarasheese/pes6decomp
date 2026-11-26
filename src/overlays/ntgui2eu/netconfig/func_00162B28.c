/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_string_list.h"

extern void func_00135018(void *entry);

void func_00162B28(NtguiStringList *list, u32 index) {
    s32 i;
    if (list->count <= 0 || index >= (u32)list->count)
        return;
    func_00135018(list->items[index]);
    for (i = index; i < list->count - 1; ++i)
        list->items[i] = list->items[i + 1];
    list->items[i] = 0;
    --list->count;
    list->dirty = 1;
    list->refresh = 1;
}
