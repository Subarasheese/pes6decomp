/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6670(void);
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC8E00(M2C_UNK);                     /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00C18FC0(s32, void *);                 /* extern */
extern s32 D_003EB210;
extern u8 D_003EB214;

s32 func_00C16710(void *arg0, s32 arg1) {
    s32 var_s0;
    u8 temp_v0;
    u8 temp_v0_2;

    var_s0 = 0;
    if (D_003EB210 == 0) {
        func_00B912F0(0x21, 0x19);
        D_003EB214 = M2C_FIELD(arg0, u8 *, 0x1E);
        func_00BC3FB0(0x820000);
        func_001B66C0(0xF10024);
        D_003EB210 = 1;
    }
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if (func_00BCF3A0(0x80) == 0) {
                if (func_00BCF3A0(0x400) != 0) {
                    temp_v0 = M2C_FIELD(arg0, u8 *, 0x1E);
                    if ((s32) temp_v0 < 0x80) {
                        M2C_FIELD(arg0, u8 *, 0x1E) = (u8) (temp_v0 + 1);
                        func_00C18FC0(arg1, arg0);
                        func_0026E840(0x8400F802);
                    }
                }
            } else {
                temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x1E);
                if ((s32) temp_v0_2 > 0) {
                    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) (temp_v0_2 - 1);
                    func_00C18FC0(arg1, arg0);
                    func_0026E840(0x8400F802);
                }
            }
        } else {
            D_003EB210 = 0;
            M2C_FIELD(arg0, u8 *, 0x1E) = (u8) D_003EB214;
            func_00C18FC0(arg1, arg0);
            func_0026E840(0x84008401);
            var_s0 = 1;
        }
    } else {
        D_003EB210 = 0;
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
