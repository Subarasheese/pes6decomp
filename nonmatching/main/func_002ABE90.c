/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_002ABE90(u8 *arg0, s32 arg1) {
    s32 i;
    s32 v;
    u8 *p;

    i = M2C_FIELD(arg0, s32 *, 0x48);
    if ((s32) arg0[i * 4 + 3] > 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = i + 1;
    }
    i = M2C_FIELD(arg0, s32 *, 0x48);
    p = arg0 + i * 4;
    if (p[1] != 0) {
        v = p[0] + p[1];
    } else {
        if (i == 0) {
            v = 0;
        } else {
            v = p[-4] + p[-3];
        }
        p[0] = v;
    }
    p[1] = p[1] + 1;
    M2C_FIELD(arg0 + v * 4, s32 *, 0x4C) = arg1;
}
