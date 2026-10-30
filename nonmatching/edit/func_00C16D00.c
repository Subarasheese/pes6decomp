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
void *func_00C1A790();                              /* extern */
extern u8 D_003E7DD8;
extern s32 D_003EB200;
extern char D_00CBFF00[];
extern char D_00CBFF10[];

s32 func_00C16D00(u8 *arg0, s32 arg1) {
    s32 *var_a0;
    s32 *var_s3;
    s32 var_s1;
    s8 var_a1;
    void *temp_s0;

    var_s1 = 0;
    temp_s0 = func_00C1A790();
    if (arg1 == 3) {
        var_s3 = ((void *)D_00CBFF10);
    } else {
        var_s3 = ((void *)D_00CBFF00);
    }
    switch (D_003EB200) {                           /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s8 *, 0x2F1) = 0;
        var_a1 = 0;
        if (3 > 0) {
            var_a0 = var_s3;
loop_10:
            if (*arg0 != *var_a0) {
                var_a1 += 1;
                var_a0 += 4;
                if (var_a1 >= 3) {

                } else {
                    goto loop_10;
                }
            } else {
                M2C_FIELD(temp_s0, s8 *, 0x2F1) = var_a1;
            }
        }
        if (var_a1 == 3) {
            *arg0 = (u8) *var_s3;
        }
        D_003E7DD8 = *arg0;
        func_00B912F0(0x21, 0x18);
        func_00BC3FB0(0x20000);
        func_001B66C0(0xF10024);
        D_003EB200 = 1;
        /* fallthrough */
    case 1:
        if (func_00BCF3A0(0x1000) == 0) {
            if (func_00BCF3A0(0x4000) == 0) {
                if (func_00BCF3A0(4) == 0) {
                    if (func_00BCF3A0(0x20) != 0) {
                        M2C_FIELD(temp_s0, s8 *, 0x2F1) = (s8) ((s32) (M2C_FIELD(temp_s0, s8 *, 0x2F1) + 1) % 3);
                        func_0026E840(0x8400F802);
                    }
                } else {
                    M2C_FIELD(temp_s0, s8 *, 0x2F1) = (s8) ((s32) ((M2C_FIELD(temp_s0, s8 *, 0x2F1) + 3) - 1) % 3);
                    func_0026E840(0x8400F802);
                }
                if (func_00BC9F00() != 0) {
                    if (func_00BCF3A0(0x20000) != 0) {
                        func_00BC8E00(1);
                    }
                    if (func_00BCF3A0(0x100000) != 0) {
                        func_00BC8E00(0);
                    }
                }
            } else {
                D_003EB200 = 0;
                *arg0 = D_003E7DD8;
                func_0026E840(0x84008401);
                var_s1 = 1;
            }
        } else {
            D_003EB200 = 0;
            *arg0 = (u8) var_s3[M2C_FIELD(temp_s0, s8 *, 0x2F1)];
            func_0026E840(0x84028400);
            var_s1 = 1;
        }
        if (var_s1 != 0) {
            func_001B6670();
        }
        break;
    }
    return var_s1;
}
