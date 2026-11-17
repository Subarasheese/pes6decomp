/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_0058E5C1[];
extern char D_0058E5C2[];
extern char Pes6MatchSquads[];

s32 func_00311AD0(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    u8 *p;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 == 0xFF) {
        var_a2 = 1;
    } else {
        var_a2 = temp_v1 % 23;
    }
    if (temp_v1 == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = temp_v1 % 23;
    }
    p = (u8 *)(Pes6MatchSquads + *(u8 *)(D_0058E5C1 + var_a2 * 0x240) * 0x348 + *(u8 *)(D_0058E5C2 + var_a0 * 0x240) * 0x6900);
    if ((p[0x76] >> 7) == 0) {
        return 0;
    }
    return 1;
}
