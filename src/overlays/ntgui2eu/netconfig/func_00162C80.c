/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_string_list.h"

void func_00162C80(NtguiStringList *list, const char *const *names, u32 count) {
    u32 i;
    for (i = 0; i < count; ++i) {
        func_00162AE8(list, names[i]);
    }
}
