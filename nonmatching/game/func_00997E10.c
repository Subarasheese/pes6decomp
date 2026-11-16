/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00592800[];

s32 func_00997E10(u8 *arg0) {
    u8 *p;
    s32 i;

    p = (u8 *)D_00592800;
    for (i = 0; i < 8; i++, p += 0x28) {
        if (*arg0 == p[0x10] && p[0] < 8) {
            return i & 0xFF;
        }
    }
    return 0xFF;
}
