/* compiler: mwcc-3.0.1b198 */
#include "pes6/menu_widget_groups.h"

void func_002FA4E0(void *group, s32 enabled) {
    s32 count = func_002F9630(group);
    s32 i;
    for (i = 0; i < count; ++i) {
        MenuWidgetEntry *entry = func_002F96F0(group, i);
        if (entry)
            func_001DF4F0(entry->label, (u8)enabled);
    }
}
