/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00828050(s32);                             /* extern */
M2C_UNK func_00842A90(M2C_UNK);                     /* extern */
s32 func_00842B60();                                /* extern */
M2C_UNK func_0097B9D0();                            /* extern */
M2C_UNK func_0097B9F0();                            /* extern */
s32 func_0097BA30();                                /* extern */
M2C_UNK func_009E1170();                            /* extern */
M2C_UNK func_009E1490(M2C_UNK);                     /* extern */
M2C_UNK func_009E14E0();                            /* extern */
M2C_UNK func_009F0C20(M2C_UNK);                     /* extern */
M2C_UNK func_009F0C80();                            /* extern */
M2C_UNK func_009F0CC0(M2C_UNK);                     /* extern */
M2C_UNK func_009F0F30();                            /* extern */
extern void *D_00A68D60;

s32 func_009785D0(void) {
    s32 temp_v0;
    s8 var_v1;

    if (M2C_FIELD(D_00A68D60, u8 *, 0) != 0) {
        func_0097B9D0();
    } else if (func_00842B60() != 0) {
        func_009F0F30();
        if (func_00828050(M2C_FIELD(D_00A68D60, s32 *, 8)) != 0) {
            func_00842A90(0);
        } else {
            M2C_FIELD(D_00A68D60, s8 *, 5) = 1;
            func_0097B9D0();
        }
    }
    temp_v0 = func_0097BA30();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        func_009F0CC0(1);
        func_0097B9F0();
        M2C_FIELD(D_00A68D60, u8 *, 1) = 1U;
        if (M2C_FIELD(D_00A68D60, u8 *, 4) != 0) {
            func_009F0C20(1);
            var_v1 = 2;
        } else {
            func_009E1490(1);
            func_009E1170();
            var_v1 = 3;
        }
        M2C_FIELD(D_00A68D60, s8 *, 3) = var_v1;
        if (M2C_FIELD(D_00A68D60, u8 *, 0) != 0) {
            M2C_FIELD(D_00A68D60, u8 *, 1) = (u8) M2C_FIELD(D_00A68D60, u8 *, 3);
        }
        break;
    case 2:
        func_009F0C80();
        func_009E14E0();
        func_0097B9F0();
        M2C_FIELD(D_00A68D60, u8 *, 1) = 0xCU;
        M2C_FIELD(D_00A68D60, s8 *, 2) = 3;
        break;
    }
    return 0;
}
