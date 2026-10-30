/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00213800(s32, M2C_UNK);                /* extern */
s32 func_00935D70();                                /* extern */
M2C_UNK func_00935EF0(M2C_UNK);                     /* extern */
M2C_UNK func_00969BE0();                            /* extern */
s32 func_00969C00();                                /* extern */
M2C_UNK func_009D5AA0(M2C_UNK);                     /* extern */
extern void *D_00A7DD60;

s32 func_009C4BC0(void) {
    s32 temp_v0;

    if ((M2C_FIELD(D_00A7DD60, u8 *, 2) != 0) || (M2C_FIELD(D_00A7DD60, u8 *, 4) != 0)) {
        func_00969BE0();
    }
    temp_v0 = func_00969C00();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 3:
    case 1:
        func_00213800(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 1);
        func_009D5AA0(1);
        if (M2C_FIELD(D_00A7DD60, u8 *, 2) == 0) {
            if (M2C_FIELD(D_00A7DD60, u8 *, 4) == 0) {
                M2C_FIELD(D_00A7DD60, s8 *, 1) = 1;
                M2C_FIELD(D_00A7DD60, s8 *, 0) = 0;
            } else {
                goto block_12;
            }
        } else {
block_12:
            M2C_FIELD(D_00A7DD60, s8 *, 0) = 1;
        }
        break;
    case 2:
        if (func_00935D70() != 0) {
            func_00935EF0(0);
            func_00213800(M2C_FIELD(D_00A7DD60, s32 *, 0xC), 1);
            func_009D5AA0(1);
            M2C_FIELD(D_00A7DD60, s8 *, 1) = 1;
            M2C_FIELD(D_00A7DD60, s8 *, 0) = 0;
        } else {
            if (M2C_FIELD(D_00A7DD60, u8 *, 7) == 0) {
                M2C_FIELD(D_00A7DD60, s8 *, 0) = 0x1A;
            } else {
                M2C_FIELD(D_00A7DD60, s8 *, 0) = 6;
                M2C_FIELD(D_00A7DD60, s8 *, 1) = 0x1A;
            }
            M2C_FIELD(D_00A7DD60, s8 *, 3) = 4;
        }
        break;
    }
    return 0;
}
