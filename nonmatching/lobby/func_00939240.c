/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK sprintf(M2C_UNK *, s32, void *);      /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
s32 func_00817B70();                                /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_008187D0();                            /* extern */
s32 func_00819460(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64, s64, s64, s64); /* extern */
extern char D_00A435D0[];
extern char D_00A43610[];

s32 func_00939240(s8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_001F08B0(0x020D000B);
    if (arg0 == NULL) {
        return 0;
    }
    if ((temp_s1 == 0) && (((void *)D_00A435D0) != NULL)) {
        M2C_FIELD(((void *)D_00A435D0), s8 *, 0) = 1;
    }
    if (*arg0 == 1) {
        if (((void *)D_00A435D0) != NULL) {
            M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 0xF;
        }
        if (func_00818740() == 1) {
            func_008187D0();
        }
        if (func_00817B70() == 1) {
            func_00817C00();
            return 1;
        }
        goto block_24;
    }
    func_001C48E8(((void *)D_00A43610), 0, 0x200);
    sprintf(((void *)D_00A43610), temp_s1, arg0 + 8);
    temp_v0 = func_00819460(0, ((void *)D_00A43610), 0, 0, 1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, 0x4484D000, 2, 1, 3, 0);
    switch (temp_v0) {                              /* irregular */
    case 4:
    case 1:
    case 3:
    case 0:
        break;
    case 2:
        if (((void *)D_00A435D0) != NULL) {
            M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 0xF;
        }
        if (func_00818740() == 1) {
            func_008187D0();
        }
        if (func_00817B70() == 1) {
            func_00817C00();
        }
        break;
    }
block_24:
    return 1;
}
