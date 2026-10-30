/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
s32 func_00817B70();                                /* extern */
M2C_UNK func_00817B80();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_00818750();                            /* extern */
s32 func_00819460(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, s64, s64, s64, s64); /* extern */
extern f32 D_003E7384;
extern char D_0088AB70[];

s32 func_00804B90(s8 *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 != 1) {
        temp_v0 = func_00819460(0, func_001F08B0(0x01FB003E), 0, 0, -1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, D_003E7384, 2, 1, 3, 1);
        switch (temp_v0) {                          /* irregular */
        case 4:
        case 1:
        case 3:
        case 0:
            break;
        case 2:
            if (((void *)D_0088AB70) != NULL) {
                M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 0xE;
            }
            if (func_00818740() == 1) {
                func_00818750();
            }
            if (func_00817B70() == 1) {
                func_00817B80();
            }
            break;
        }
        goto block_23;
    }
    if (((void *)D_0088AB70) != NULL) {
        M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 0xE;
    }
    if (func_00818740() == 1) {
        func_00818750();
    }
    if (func_00817B70() == 1) {
        func_00817B80();
        return 1;
    }
block_23:
    return 1;
}
