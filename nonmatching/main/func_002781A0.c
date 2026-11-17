/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_00592800[];
extern char D_0059295B[];

s32 func_002781A0(s32 arg0) {
    u8 *p;
    s32 i;

    if (*(u8 *)(D_0059295B + arg0) < 8) {
        return 0;
    }
    p = (u8 *)D_00592800;
    for (i = 0; i < 8; i++) {
        if (p[0] < 8 && arg0 == p[1] && p[8] == 0) {
            return 0;
        }
        p += 0x28;
    }
    return 1;
}
