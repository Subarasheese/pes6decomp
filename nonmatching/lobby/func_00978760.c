/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00828050(s32);                             /* extern */
M2C_UNK func_00842A90(M2C_UNK);                     /* extern */
s32 func_00842B60();                                /* extern */
M2C_UNK func_009E1170();                            /* extern */
M2C_UNK func_009E1490(M2C_UNK);                     /* extern */
M2C_UNK func_009E14E0();                            /* extern */
M2C_UNK func_009E2CD0();                            /* extern */
M2C_UNK func_009E2CF0();                            /* extern */
s32 func_009E2DA0();                                /* extern */
M2C_UNK func_009F0C80();                            /* extern */
M2C_UNK func_009F0CC0(M2C_UNK);                     /* extern */
M2C_UNK func_009F0F30();                            /* extern */
extern void *D_00A68D60;

s32 func_00978760(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A68D60, u8 *, 0) != 0) {
        func_009E2CD0();
    } else if (func_00842B60() != 0) {
        func_009F0F30();
        if (func_00828050(M2C_FIELD(D_00A68D60, s32 *, 8)) != 0) {
            func_00842A90(0);
        } else {
            M2C_FIELD(D_00A68D60, s8 *, 5) = 1;
            func_009E2CD0();
        }
    }
    temp_v0 = func_009E2DA0();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        func_009F0CC0(1);
        func_009E1490(1);
        func_009E1170();
        func_009E2CF0();
        if (M2C_FIELD(D_00A68D60, u8 *, 0) == 0) {
            M2C_FIELD(D_00A68D60, s8 *, 1) = 1;
            M2C_FIELD(D_00A68D60, s8 *, 3) = 3;
        } else {
            M2C_FIELD(D_00A68D60, s8 *, 1) = 3;
        }
        break;
    case 2:
        func_009E2CF0();
        func_009F0C80();
        func_009E14E0();
        M2C_FIELD(D_00A68D60, s8 *, 1) = 0xC;
        M2C_FIELD(D_00A68D60, s8 *, 2) = 3;
        break;
    }
    return 0;
}
