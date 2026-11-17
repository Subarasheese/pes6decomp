/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592800[];

s32 func_00997EB0(u8 *arg0) {
    char *p;
    s32 i;
    u32 v;

    v = *arg0;
    p = D_00592800;
    for (i = 0; i < 8; i++) {
        if (v == *(u8 *)(p + 0x10)) {
            return 1;
        }
        p += 0x28;
    }
    return 0;
}
