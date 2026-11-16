/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u8 D_00592800[];
extern u8 D_0059295B[];

s32 func_00997360(s32 arg0) {
    u8 *p;
    s32 i;

    if (D_0059295B[arg0] < 8) {
        return 1;
    }
    p = D_00592800;
    for (i = 0; i < 8; i++) {
        if (p[0] < 8 && arg0 == p[1]) {
            return 1;
        }
        p += 0x28;
    }
    return 0;
}
