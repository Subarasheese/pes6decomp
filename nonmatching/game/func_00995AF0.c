/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E7A08;

void func_00995AF0(u8 *arg0, s8 arg1) {
    s32 i;
    s32 kind;
    s32 res;
    u8 *p;

    M2C_FIELD(D_003E7A08, s32 *, 0x284) = 2;
    M2C_FIELD(D_003E7A08, s8 *, 0x28B) = 0;
    M2C_FIELD(D_003E7A08, s8 *, 0x2A4) = arg1;
    p = D_003E7A08;
    res = 0;
    for (i = 0; i < 4; i++, p += 0x40) {
        if (p[8] != *arg0) {
            break;
        }
        kind = *(s32 *)(p + 4);
        if (kind == 15) {
            continue;
        }
        if (kind == 4) {
            if (p[0x2C] & 0x80) {
                res = 1;
                break;
            }
            continue;
        }
        break;
    }
    M2C_FIELD(D_003E7A08, s8 *, 0x2AC) = res;
}
