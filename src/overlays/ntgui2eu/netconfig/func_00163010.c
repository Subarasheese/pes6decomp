/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_string_list.h"

extern s32 func_001B016C(const char *, const char *);

s32 func_00163010(const NtguiStringList *list, const char *name) {
    s32 i;
    if (!list->items)
        return -1;
    for (i = 0; i < list->count; ++i) {
        if (!func_001B016C(name, list->items[i]))
            return i;
    }
    return -1;
}
