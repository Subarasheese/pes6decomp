/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BC40A0();                                /* extern */
s32 func_00BC5740(u16);                             /* extern */
M2C_UNK func_00BC90A0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC93A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC9B60(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC9EE0(M2C_UNK);                         /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BDC5F0();                            /* extern */
s32 func_00BDC730();                                /* extern */
s32 func_00BF3A10(u16);                             /* extern */
s32 func_00BF3B70(M2C_UNK);                         /* extern */
extern void *D_003E7DC0;

s32 func_00BDC400(void) {
    M2C_UNK var_a0;
    M2C_UNK var_a1;
    M2C_UNK var_s0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;

    if (func_00BDC730() == 0) {
        if (func_00BCF3A0(0x08000000) != 0) {
            if (M2C_FIELD(D_003E7DC0, u16 *, 0xF8) == 0xFFFF) {
                func_0026E840(0x84028400);
                return 4;
            }
            goto block_33;
        }
        if (func_00BC9F00() != 0) {
            if (func_00BCF3A0(0x02000000) != 0) {
                if (func_00BF3A10(M2C_FIELD(D_003E7DC0, u16 *, 0xFA)) != 0) {
                    var_a1 = 0xC;
                    if (func_00BC9EE0(0) != 0xC) {
                        var_s0 = 1;
                    } else {
                        var_a1 = 1;
                        var_s0 = 0;
                    }
                    func_00BC9B60(0, var_a1);
                    func_00BC93A0(0, var_s0);
                    var_v0 = 1;
                } else {
                    var_v0 = 0;
                }
            } else {
                var_v0 = 0;
            }
        } else {
            var_v0 = 0;
        }
        if (var_v0 == 0) {
            if (((u64) ((s64) M2C_FIELD(M2C_FIELD(D_003E7DC0, void **, 0x70), u8 *, 0x35) << 0x38) >> 0x3C) == 0xD) {
                var_v0_2 = 0;
            } else {
                var_v0_2 = func_00BC40A0();
            }
            if (var_v0_2 != 0) {
                func_0026E840(0x8400F803);
                return 0;
            }
block_33:
            temp_v0 = func_00BF3B70(0);
            switch (temp_v0) {                      /* irregular */
            case 1:
                func_00BC90A0(0);
                break;
            case 2:
                M2C_FIELD(D_003E7DC0, s32 *, 0x104) = 0;
                break;
            }
            if (func_00BC9F00() != 0) {
                if (func_00BC5740(M2C_FIELD(D_003E7DC0, u16 *, 0xFA)) == 0) {
                    if (M2C_FIELD(D_003E7DC0, u16 *, 0xF8) != 0xFFFF) {
                        var_a0 = 0x23;
                    } else {
                        var_a0 = 0x01000023;
                    }
                } else {
                    var_a0 = 3;
                }
            } else {
                var_a0 = 3;
            }
            func_00BC3FB0(var_a0);
            func_00BDC5F0();
            return temp_v0;
        }
        func_0026E840(0x84028400);
        return 0;
    }
    func_0026E840(0x8400F803);
    return 0;
}
