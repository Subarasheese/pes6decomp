/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_string_list.h"

void func_00162AE8(NtguiStringList *list, const char *name) {
    s32 index = func_00163010(list, name);
    if (index >= 0)
        func_00162B28(list, index);
}
