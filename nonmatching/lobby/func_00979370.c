/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00979250(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00842A90(M2C_UNK);                     /* extern */
s32 func_00842B60();                                /* extern */
s32 func_009E02A0();                                /* extern */
M2C_UNK func_009E03D0();                            /* extern */
M2C_UNK func_00D0C5F0(M2C_UNK);                     /* extern */
extern void *D_00A68D68;

s32 func_00979370(void) {
    s32 temp_v0;
    s8 var_v1;

    if (M2C_FIELD(D_00A68D68, u8 *, 0) != 0) {
        func_009E03D0();
    }
    if ((M2C_FIELD(D_00A68D68, u8 *, 0) == 0) && (func_00842B60() != 0)) {
        func_00842A90(0);
        if (func_00979250() == 0) {
            func_00D0C5F0(5);
            M2C_FIELD(D_00A68D68, s8 *, 3) = 2;
            M2C_FIELD(D_00A68D68, s8 *, 1) = 8;
            return 0;
        }
        goto block_16;
    }
    temp_v0 = func_009E02A0();
    switch (temp_v0) {                              /* irregular */
    case 2:
        func_00D0C5F0(5);
        var_v1 = 8;
        M2C_FIELD(D_00A68D68, s8 *, 3) = 1;
block_15:
        M2C_FIELD(D_00A68D68, s8 *, 1) = var_v1;
        break;
    case 1:
        func_0026E840(0x84028400);
        var_v1 = 3;
        goto block_15;
    }
block_16:
    return 0;
}
