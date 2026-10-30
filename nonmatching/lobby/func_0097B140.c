/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00828160();                                /* extern */
s32 func_009324B0(s32);                             /* extern */
s32 func_00932600(s32);                             /* extern */
s32 func_00932870(s32);                             /* extern */
s32 func_00932AE0(s32);                             /* extern */
s32 func_00932DC0(s32);                             /* extern */
M2C_UNK func_009C1440(M2C_UNK);                     /* extern */
M2C_UNK func_009C1480();                            /* extern */
M2C_UNK func_009C2B50(M2C_UNK);                     /* extern */
M2C_UNK func_009C2B70();                            /* extern */
s32 func_009E0290();                                /* extern */
s32 func_009E02A0();                                /* extern */
M2C_UNK func_009E0380(M2C_UNK);                     /* extern */
M2C_UNK func_009E03D0();                            /* extern */
s32 func_009E10B0(s32);                             /* extern */
M2C_UNK func_009E1100(M2C_UNK);                     /* extern */
M2C_UNK func_009E1170();                            /* extern */
M2C_UNK func_009E1270(M2C_UNK);                     /* extern */
M2C_UNK func_009E1320(s32, s32, s32, s32);          /* extern */
M2C_UNK func_009E1490(M2C_UNK);                     /* extern */
extern void *D_00A68D90;

s32 func_0097B140(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 var_v1;

    if (M2C_FIELD(D_00A68D90, u8 *, 0x38) != 0) {
        func_009E03D0();
    }
    temp_v0 = func_009E02A0();
    switch (temp_v0) {                              /* irregular */
    case 2:
        func_009E0380(0);
        func_009C1480();
        func_009C2B50(1);
        func_009C2B70();
        var_v1 = 1;
block_16:
        M2C_FIELD(D_00A68D90, s8 *, 0x39) = var_v1;
        break;
    case 1:
        func_0026E840(0x84028400);
        func_009C1440(0);
        func_009E1490(1);
        func_009E1100(0);
        func_009E1170();
        temp_v0_2 = func_009E0290();
        temp_s2 = func_009E10B0(func_00932AE0(temp_v0_2));
        temp_s1 = func_00932870(temp_v0_2);
        temp_s0 = func_00932600(temp_v0_2);
        func_009E1320(temp_s2, temp_s1, temp_s0, func_009324B0(temp_v0_2));
        temp_s0_2 = func_00932DC0(temp_v0_2);
        if (temp_s0_2 != func_00828160()) {
            func_009E1270(0);
        } else {
            func_009E1270(1);
        }
        var_v1 = 5;
        goto block_16;
    }
    return 0;
}
