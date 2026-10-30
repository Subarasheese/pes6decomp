/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B6670();                            /* extern */
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC8E00(M2C_UNK);                     /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00C18FC0(s32, void *);                 /* extern */
extern s32 D_003EB208;
extern s8 D_003EB20C;

s32 func_00C168D0(void *arg0, s32 arg1) {
    s32 var_s0;
    s8 temp_v0;
    s8 temp_v0_2;

    var_s0 = 0;
    if (D_003EB208 == 0) {
        func_00B912F0(0x21, 0x19);
        D_003EB20C = M2C_FIELD(arg0, s8 *, 5);
        func_00BC3FB0(0x420000);
        func_001B66C0(0xF10024);
        D_003EB208 = 1;
    }
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if (func_00BCF3A0(0x80) == 0) {
                if (func_00BCF3A0(0x400) != 0) {
                    temp_v0 = M2C_FIELD(arg0, s8 *, 5);
                    if (temp_v0 < 0x10) {
                        M2C_FIELD(arg0, s8 *, 5) = (s8) (temp_v0 + 1);
                        func_00C18FC0(arg1, arg0);
                        func_0026E840(0x8400F802);
                    }
                }
            } else {
                temp_v0_2 = M2C_FIELD(arg0, s8 *, 5);
                if (temp_v0_2 > 0) {
                    M2C_FIELD(arg0, s8 *, 5) = (s8) (temp_v0_2 - 1);
                    func_00C18FC0(arg1, arg0);
                    func_0026E840(0x8400F802);
                }
            }
        } else {
            M2C_FIELD(arg0, s8 *, 5) = (s8) (u8) D_003EB20C;
            func_00C18FC0(arg1, arg0);
            D_003EB208 = 0;
            func_0026E840(0x84008401);
            var_s0 = 1;
        }
    } else {
        D_003EB208 = 0;
        func_0026E840(0x84028400);
        var_s0 = 1;
    }
    if (func_00BC9F00() != 0) {
        if (func_00BCF3A0(0x20000) != 0) {
            func_00BC8E00(1);
        }
        if (func_00BCF3A0(0x100000) != 0) {
            func_00BC8E00(0);
        }
    }
    if (var_s0 != 0) {
        func_001B6670();
        func_00BC3FB0(3);
    }
    return var_s0;
}
