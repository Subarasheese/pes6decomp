/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6670(void);
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC8A60(u16, u8, M2C_UNK);            /* extern */
M2C_UNK func_00BC8E00(M2C_UNK);                     /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00C18FC0(s32, void *);                 /* extern */
M2C_UNK func_00C1A450(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern u8 D_003E9E88;
extern s32 D_003EB1FC;

s32 func_00C16F40(void *arg0) {
    s32 var_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x2D8) * 4) + arg0), void **, 0x1C);
    var_s0 = 0;
    if (D_003EB1FC == 0) {
        func_00B912F0(0x21, 0x17);
        func_00BC8A60(M2C_FIELD(arg0, u16 *, 0x2E0), D_003E9E88, 0);
        func_00C18FC0(M2C_FIELD(arg0, s32 *, 0x2D8), temp_s1);
        func_00BC3FB0(0x20000);
        D_003EB1FC += 1;
    }
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            func_00C1A450(5, 2, 2);
            if (M2C_FIELD(arg0, s32 *, 0x2E4) == 4) {
                M2C_FIELD(arg0, s32 *, 0x2E8) = 1;
            }
        } else {
            if ((M2C_FIELD(arg0, s32 *, 0x2E4) == 0) && (M2C_FIELD(arg0, s32 *, 0x2E8) == 0)) {
                D_003EB1FC = 0;
                var_s0 = 2;
            } else {
                M2C_FIELD(arg0, s32 *, 0x2E4) = 0;
                M2C_FIELD(arg0, s32 *, 0x2E8) = 0;
            }
            func_0026E840(0x84008401);
        }
    } else if ((M2C_FIELD(arg0, s32 *, 0x2E4) + (M2C_FIELD(arg0, s32 *, 0x2E8) * 4)) >= 3) {
        if (M2C_FIELD(temp_s1, u8 *, 2) == 0) {
            func_0026E840(0x8C008005);
        } else {
            goto block_9;
        }
    } else {
block_9:
        D_003EB1FC = 0;
        var_s0 = 1;
        func_0026E840(0x84028400);
    }
    if (func_00BC9F00() != 0) {
        if (func_00BCF3A0(0x20000) != 0) {
            func_00BC8E00(1);
        }
        if (func_00BCF3A0(0x100000) != 0) {
            func_00BC8E00(0);
        }
    }
    if (var_s0 == 0) {
        if ((M2C_FIELD(arg0, s32 *, 0x2E4) == 0) && (M2C_FIELD(arg0, s32 *, 0x2E8) == 0)) {
            func_001B66C0(0x6C0019);
        } else {
            func_001B66C0(0xF10024);
        }
    } else {
        func_001B6670();
    }
    return var_s0;
}
