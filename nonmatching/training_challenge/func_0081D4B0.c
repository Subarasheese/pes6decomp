/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002D8740(void *, s64, s32, M2C_UNK, M2C_UNK); /* extern */

void func_0081D4B0(void *arg0, s64 arg1, s32 arg2) {
    s8 sp2C;
    s8 sp2D;
    s8 sp2E;
    s8 sp2F;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x228) + (M2C_FIELD(arg0, s32 *, 0x22C) * 0xA);
    M2C_FIELD(arg0, s32 *, 0x228) = temp_v0;
    if (temp_v0 >= 0x100) {
        M2C_FIELD(arg0, s32 *, 0x228) = 0xFF;
        M2C_FIELD(arg0, s32 *, 0x22C) = (s32) -M2C_FIELD(arg0, s32 *, 0x22C);
    }
    if (M2C_FIELD(arg0, s32 *, 0x228) < 0x3F) {
        M2C_FIELD(arg0, s32 *, 0x228) = 0x3F;
        M2C_FIELD(arg0, s32 *, 0x22C) = (s32) -M2C_FIELD(arg0, s32 *, 0x22C);
    }
    switch (arg2) {                                 /* irregular */
    case 1:
        sp2E = 0;
        sp2C = 0xFF;
        sp2D = 0xFF;
block_13:
        sp2F = (s8) M2C_FIELD(arg0, s32 *, 0x228);
        break;
    case 0:
        sp2C = 0;
        sp2E = 0xFF;
        sp2D = 0;
        goto block_13;
    }
    func_002D8740(arg0, (s64) (arg1 << 0x20) >> 0x20, (s32) sp2C, 0, 0x42C80000);
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}
