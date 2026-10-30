/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK sprintf(M2C_UNK *, s32, void *);      /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
s32 func_00817B70();                                /* extern */
M2C_UNK func_00817B80();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_00818750();                            /* extern */
s32 func_00819460(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, s64, s64, s64, s64); /* extern */
extern f32 D_003E7384;
extern char D_0088ADB0[];
extern char D_0088AE20[];

s32 func_00806570(s8 *arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_001F08B0(0x020D002D);
    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 == 1) {
        if (((void *)D_0088ADB0) != NULL) {
            M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C) = 0x10;
        }
        if (func_00818740() == 1) {
            func_00818750();
        }
        if (func_00817B70() == 1) {
            func_00817B80();
            return 1;
        }
        goto block_21;
    }
    func_001C48E8(((void *)D_0088AE20), 0, 0x200);
    sprintf(((void *)D_0088AE20), temp_s0, arg0 + 0x39);
    temp_v0 = func_00819460(0, ((void *)D_0088AE20), 0, 0, 1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, D_003E7384, 2, 1, 3, 1);
    switch (temp_v0) {                              /* irregular */
    case 4:
    case 1:
    case 3:
    case 0:
        break;
    case 2:
        if (((void *)D_0088ADB0) != NULL) {
            M2C_FIELD(((void *)D_0088ADB0), s32 *, 0x6C) = 0x10;
        }
        if (func_00818740() == 1) {
            func_00818750();
        }
        if (func_00817B70() == 1) {
            func_00817B80();
        }
        break;
    }
block_21:
    return 1;
}
