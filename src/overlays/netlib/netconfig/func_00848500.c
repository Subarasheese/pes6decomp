/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 D_008B14FE[];
s32 func_00848500(u8 group, u8 id) {
    s32 index = 0;
    u8 *slot = D_008B14FE;
    u8 key = (id & 31) | ((group & 1) << 6);
    for (;;) {
        if (!(((*slot >> 7) & 1) != 0) || key == (*slot & 0x7f)) {
            *slot = key | 0x80;
            break;
        }
        ++index;
        ++slot;
        if (index >= 4)
            return 0;
    }
    return 0;
}
