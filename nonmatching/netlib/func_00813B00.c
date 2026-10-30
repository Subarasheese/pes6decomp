/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK sprintf(M2C_UNK *, s32, void *);      /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
s32 func_00817B70();                                /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_008183F0(M2C_UNK *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, s64, s64, s64, s64, s64, s64); /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_008187D0();                            /* extern */
extern f32 D_003E7384;
extern char D_008A3390[];
extern char D_008A33D0[];

s32 func_00813B00(s8 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;

    temp_s0 = func_001F08B0(0x02030002);
    if (arg0 == NULL) {
        return 0;
    }
    if ((temp_s0 == 0) && (((void *)D_008A3390) != NULL)) {
        M2C_FIELD(((void *)D_008A3390), s8 *, 0) = 1;
    }
    if (*arg0 == 1) {
        if (((void *)D_008A3390) != NULL) {
            M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = 0x11;
        }
        if (func_00818740() == 1) {
            func_008187D0();
        }
        if (func_00817B70() == 1) {
            func_00817C00();
            return 1;
        }
        goto block_29;
    }
    func_001C48E8(((void *)D_008A33D0), 0, 0x200);
    sprintf(((void *)D_008A33D0), temp_s0, arg0 + 8);
    temp_s0_2 = func_001F08B0(0x6C0006);
    temp_v0 = func_008183F0(((void *)D_008A33D0), temp_s0_2, func_001F08B0(0x6C0007), 0, 0, 1, 0, 0, 0x40800000, 0x41000000, 0x40800000, D_003E7384, 1, 1, 3, 0, 0, 1);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 2:
        if (((void *)D_008A3390) != NULL) {
            M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = 7;
        }
        if (func_00818740() == 1) {
            func_008187D0();
        }
        if (func_00817B70() == 1) {
            func_00817C00();
        }
        break;
    default:
    case 3:
    case 1:
        if (((void *)D_008A3390) != NULL) {
            M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = 0x11;
        }
        if (func_00818740() == 1) {
            func_008187D0();
        }
        if (func_00817B70() == 1) {
            func_00817C00();
        }
        break;
    }
block_29:
    return 1;
}
