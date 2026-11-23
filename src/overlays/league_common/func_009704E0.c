/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
extern u16 *func_00224E20(s32 group, u8 slot);
s32 func_009704E0(s32 group) {
    s32 slot;
    if ((group & 255) >= 80)
        return 255;
    slot = 0;
    do {
        u16 *entry = func_00224E20(group, (u8)slot);
        if (entry && !*entry)
            return (u8)slot;
        ++slot;
    } while (slot < 32);
    return 255;
}
