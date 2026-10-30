/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00828050(s32);                             /* extern */
s32 func_0097F740(u8);                              /* extern */
s32 func_0097F840(u8);                              /* extern */
s32 func_0097FA40(u8);                              /* extern */
s32 func_00980430(u8);                              /* extern */
s32 func_009804E0(u8);                              /* extern */
M2C_UNK func_009E0260();                            /* extern */
s8 func_009E0290();                                 /* extern */
s32 func_009E02A0();                                /* extern */
M2C_UNK func_009E0390(M2C_UNK);                     /* extern */
M2C_UNK func_009E03D0();                            /* extern */
M2C_UNK func_009F10D0(s8);                          /* extern */
M2C_UNK func_00D0C540();                            /* extern */
extern void *D_00A7E020;

s32 func_009F1EB0(void) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 temp_s0;
    s8 var_v1;
    u8 temp_v1;
    u8 var_a0;
    u8 var_a0_2;
    u8 var_a0_3;

    temp_s0 = func_009E0290();
    if (M2C_FIELD(D_00A7E020, u8 *, 7) == 0) {
        if (M2C_FIELD(D_00A7E020, u8 *, 6) != 0) {
            func_009E03D0();
        }
        temp_v0 = func_009E02A0();
        switch (temp_v0) {                          /* irregular */
        case 1:
            temp_v1 = M2C_FIELD(D_00A7E020, u8 *, 0);
            if (temp_v1 == 0) {
                var_v0 = 0;
            } else {
                if (temp_s0 < 0) {
                    var_a0 = 0;
                } else if (temp_s0 < 0x19) {
                    var_a0 = M2C_FIELD((temp_s0 + D_00A7E020), u8 *, 8);
                } else {
                    var_a0 = 0;
                }
                if (temp_v1 != 0) {
                    var_v0_2 = func_009804E0(var_a0);
                } else {
                    var_v0_2 = func_0097F840(var_a0);
                }
                if (func_00828050(var_v0_2) == 0) {
                    var_v0 = 0;
                } else {
                    if (temp_s0 < 0) {
                        var_a0_2 = 0;
                    } else if (temp_s0 >= 0x19) {
                        var_a0_2 = 0;
                    } else {
                        var_a0_2 = M2C_FIELD((temp_s0 + D_00A7E020), u8 *, 8);
                    }
                    var_v0 = func_0097FA40(var_a0_2);
                }
            }
            if (var_v0 != 0) {
                func_0026E840(0x84028400);
                func_00D0C540();
                M2C_FIELD(D_00A7E020, s8 *, 3) = temp_s0;
                M2C_FIELD(D_00A7E020, s8 *, 2) = 7;
                M2C_FIELD(D_00A7E020, s8 *, 1) = 8;
            } else {
                func_009E0260();
            }
            break;
        case 2:
            func_00D0C540();
            var_v1 = 9;
            M2C_FIELD(D_00A7E020, s8 *, 5) = 1;
block_48:
            M2C_FIELD(D_00A7E020, s8 *, 1) = var_v1;
            break;
        default:
            if (func_0081EC20(0x2000) != 0) {
                func_0026E840(0x84028400);
                func_009E0390(0);
                var_v1 = 5;
                goto block_48;
            }
            break;
        }
        if ((u8) M2C_FIELD(D_00A7E020, s8 *, 3) != temp_s0) {
            M2C_FIELD(D_00A7E020, s8 *, 3) = temp_s0;
            func_009F10D0(temp_s0);
        }
        return 0;
    }
    if (temp_s0 < 0) {
        var_a0_3 = 0;
    } else if (temp_s0 < 0x19) {
        var_a0_3 = M2C_FIELD((temp_s0 + D_00A7E020), u8 *, 8);
    } else {
        var_a0_3 = 0;
    }
    if (M2C_FIELD(D_00A7E020, u8 *, 0) != 0) {
        var_v0_3 = func_00980430(var_a0_3);
    } else {
        var_v0_3 = func_0097F740(var_a0_3);
    }
    M2C_FIELD(D_00A7E020, s32 *, 0x3C) = var_v0_3;
    M2C_FIELD(D_00A7E020, s8 *, 1) = 3;
    return 0;
}
