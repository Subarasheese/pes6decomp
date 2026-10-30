/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern s32 func_0026B8B0(s32);
s32 func_0090B420(u16);                             /* extern */
s32 func_00BCC980();                                /* extern */
M2C_UNK func_00C74BF0(void *, M2C_UNK);             /* extern */
M2C_UNK func_00C74D20(void *, s32);                 /* extern */
extern char D_0058D7AA[];
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591BBD[];
extern char D_00591DCD[];
extern char D_00924000[];
extern char D_00924008[];
extern void *D_0092404C;

void func_00902D90(void *arg0, s32 arg1) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 temp_a0;
    s32 temp_s3;
    s32 var_a1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *var_s5;

    var_s5 = arg0;
    func_001D7D80(D_0092404C, (s16) ((s64) ((6 - arg1) << 0x30) >> 0x30));
    var_s6 = 0;
    (*(s32 *)D_00924008) = arg1;
    if (arg1 > 0) {
        var_s2 = ((void *)D_00924000);
        var_s1 = ((void *)D_00924000);
        var_s0 = ((void *)D_00924000);
        do {
            M2C_FIELD(var_s2, s32 *, 0x10) = (s32) M2C_FIELD(var_s5, s32 *, 0);
            M2C_FIELD(var_s2, s32 *, 0x30) = (s32) M2C_FIELD(var_s5, s32 *, 4);
            func_00C74D20(var_s1 + 0x5C, M2C_FIELD(var_s5, s32 *, 4));
            temp_s3 = M2C_FIELD(var_s5, s32 *, 0);
            temp_a0 = func_00BCC980() == 1;
            var_a1 = 1;
            if ((temp_s3 != 3) && (temp_s3 != 4)) {
                var_a1 = 0;
            }
            if (!(temp_a0 & var_a1)) {
                if (M2C_FIELD(var_s5, s32 *, 0) != 2) {
                    var_v1 = 0;
                } else if (((*(u8 *)D_00591DCD) == 3) || (((*(u8 *)D_00591DCD) == 1) && ((*(u8 *)D_00591BBD) == 0))) {
                    var_v1 = 1;
                } else {
                    var_s3 = 0;
                    var_s4 = 0;
                    do {
                        if (func_0026B8B0(var_s4) != -1) {
                            var_s3 += 1;
                        }
                        var_s4 += 1;
                    } while (var_s4 < 8);
                    var_v1 = var_s3 == 0;
                }
                if (var_v1 == 0) {
                    if (M2C_FIELD(var_s5, s32 *, 0) != 5) {
                        var_v1_2 = 0;
                    } else {
                        var_v1_3 = func_0090B420((*(u16 *)D_00591BB0)) != 0;
                        if (var_v1_3 == 0) {
                            var_v1_3 = func_0090B420((*(u16 *)D_00591BB2)) != 0;
                        }
                        var_v1_2 = var_v1_3 ^ 1;
                    }
                    if (var_v1_2 != 0) {
                        goto block_26;
                    }
                } else {
                    goto block_26;
                }
            } else {
block_26:
                M2C_FIELD(var_s0, s8 *, 0x28) = 3;
                if ((*(s8 *)D_0058D7AA) == 0) {
                    func_00C74BF0(var_s1 + 0x5C, 1);
                }
            }
            var_s6 += 1;
            var_s5 += 8;
            var_s2 += 4;
            var_s1 += 8;
            var_s0 += 1;
        } while (var_s6 < arg1);
    }
}
