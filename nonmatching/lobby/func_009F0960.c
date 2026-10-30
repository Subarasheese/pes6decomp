/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00842A90(M2C_UNK);                     /* extern */
s32 func_00842B60();                                /* extern */
s32 func_00933490(s32);                             /* extern */
s32 func_009E0290();                                /* extern */
s32 func_009E02A0();                                /* extern */
M2C_UNK func_009E03D0();                            /* extern */
extern void *D_00A7E018;

u8 func_009F0960(void) {
    s32 temp_v0;
    s32 var_v0;

    if (M2C_FIELD(D_00A7E018, u8 *, 0) != 0) {
        func_009E03D0();
    }
    if ((M2C_FIELD(D_00A7E018, u8 *, 0) == 0) && (func_00842B60() != 0)) {
        func_00842A90(0);
        M2C_FIELD(D_00A7E018, s8 *, 2) = 0;
        M2C_FIELD(D_00A7E018, s8 *, 1) = 2;
    } else {
        temp_v0 = func_009E02A0();
        switch (temp_v0) {                          /* irregular */
        case 1:
            func_0026E840(0x84028400);
            M2C_FIELD(D_00A7E018, s8 *, 2) = 2;
block_12:
            M2C_FIELD(D_00A7E018, s8 *, 1) = 3;
            break;
        case 2:
            M2C_FIELD(D_00A7E018, s8 *, 2) = 1;
            goto block_12;
        }
        if (D_00A7E018 == NULL) {
            var_v0 = 0;
        } else {
            var_v0 = func_00933490(func_009E0290());
        }
        M2C_FIELD(D_00A7E018, s32 *, 8) = var_v0;
    }
    return M2C_FIELD(D_00A7E018, u8 *, 2);
}
