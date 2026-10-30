/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BF5C10(void *);                      /* extern */
extern char D_00CE8E20[];

s32 func_00BF5A40(s32 arg0) {
    M2C_UNK (*temp_v0)(s32);
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_s2;
    void *temp_s1;

    var_s2 = 0;
    temp_s1 = ((void *)D_00CE8E20) + (arg0 * 0x146C);
    temp_s0 = M2C_FIELD(temp_s1, s32 *, 0x1444);
    M2C_FIELD(temp_s1, s32 *, 0x145C) = 0;
    if (func_00BC9F00() != 0) {
        if (func_00BCF3A0(0x1000) == 0) {
            if (func_00BCF3A0(0x4000) != 0) {
                func_0026E840(0x84008401);
                return 2;
            }
            goto block_12;
        }
        if (M2C_FIELD((temp_s1 + (M2C_FIELD(temp_s1, s32 *, 0x1444) * 0x88)), s32 *, 0x7C) == 0) {
            func_0026E840(0x8C008005);
        } else {
            var_s2 = 1;
            func_0026E840(0x84028400);
        }
        return var_s2;
    }
block_12:
    if (func_00BCF3A0(1) == 0) {
        if (func_00BCF3A0(8) != 0) {
            var_a1 = M2C_FIELD(temp_s1, s32 *, 0x1444);
            var_a0 = M2C_FIELD(temp_s1, s32 *, 0x1448);
            if (var_a1 < (M2C_FIELD(temp_s1, s32 *, 0x144C) - 1)) {
                var_a1 += 1;
                if ((s32) M2C_FIELD((temp_s1 + (var_a1 * 0x88)), u16 *, 0x80) >= 0xFFFC) {
                    var_a1 += 1;
                }
                temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1450);
                if (var_a1 >= (var_a0 + temp_v1)) {
                    var_a0 = var_a1 - (temp_v1 - 1);
                }
            }
            M2C_FIELD(temp_s1, s32 *, 0x1444) = var_a1;
            M2C_FIELD(temp_s1, s32 *, 0x1448) = var_a0;
        }
    } else {
        func_00BF5C10(temp_s1);
    }
    if (temp_s0 != M2C_FIELD(temp_s1, s32 *, 0x1444)) {
        M2C_FIELD(temp_s1, s32 *, 0x145C) = 1;
        func_001C4730(temp_s1 + 0x13A8, temp_s1 + (M2C_FIELD(temp_s1, s32 *, 0x1444) * 0x88), 0x88);
        temp_v0 = M2C_FIELD(temp_s1, M2C_UNK (**)(s32), 0x1468);
        if (temp_v0 != NULL) {
            temp_v0(M2C_FIELD(temp_s1, s32 *, 0x1444));
        }
        func_0026E840(0x8400F802);
    }
    return 0;
}
