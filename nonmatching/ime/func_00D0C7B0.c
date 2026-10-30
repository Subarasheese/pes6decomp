/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern void func_001B7B80(s32);
s32 func_001C7E10(s32, s32);                        /* extern */
M2C_UNK func_00D0C4A0(M2C_UNK);                     /* extern */
extern char D_00D37700[];
extern char D_00D37720[];
extern char D_00D37772[];
extern char D_00D37776[];

void func_00D0C7B0(s32 arg0, s32 arg1) {
    s32 *temp_v0_2;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    void *temp_a0;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0;
    void *temp_v1_2;

    var_s0 = arg1;
    if ((*(s8 *)D_00D37772) != 0) {
        if (var_s0 < 5) {
            var_s5 = 0;
        } else {
            var_s0 = 4;
            var_s5 = 0;
        }
loop_21:
        if (var_s5 >= 4) {
            var_s2 = 0;
        } else {
            temp_s2 = ((void *)D_00D37700) + (var_s5 * 8);
            if (M2C_FIELD(temp_s2, s32 *, 0) == 0x18) {
                var_s2 = 0;
            } else {
                var_s3 = 0;
                var_s4 = 0;
loop_13:
                if (var_s4 < var_s0) {
                    temp_a0 = arg0 + (var_s4 * 8);
                    if ((M2C_FIELD(temp_a0, s32 *, 0) == M2C_FIELD(temp_s2, s32 *, 0)) && (func_001C7E10(func_001F08B0(M2C_FIELD(temp_a0, s32 *, 4)), M2C_FIELD(temp_s2, s32 *, 4)) == 0)) {
                        var_s3 += 1;
                    }
                    var_s4 += 1;
                    goto loop_13;
                }
                if (var_s3 == 0) {
                    temp_a0_2 = M2C_FIELD(temp_s2, s32 *, 0);
                    temp_v0 = ((void *)D_00D37720) + (temp_a0_2 * 4);
                    if (M2C_FIELD(temp_v0, s32 *, 0x58) != 0) {
                        M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
                        if ((*(s8 *)D_00D37776) == 0) {
                            func_001B7B80(temp_a0_2);
                        }
                    }
                }
                var_s5 += 1;
                goto loop_21;
            }
        }
loop_24:
        if (var_s2 < var_s0) {
            temp_v1 = var_s2 * 8;
            temp_s3 = ((void *)D_00D37700) + temp_v1;
            temp_v1_2 = arg0 + temp_v1;
            M2C_FIELD(temp_s3, s32 *, 0) = (s32) M2C_FIELD(temp_v1_2, s32 *, 0);
            M2C_FIELD(temp_s3, s32 *, 4) = func_001F08B0(M2C_FIELD(temp_v1_2, s32 *, 4));
            var_s2 += 1;
            goto loop_24;
        }
loop_27:
        if (var_s2 < 4) {
            temp_v0_2 = ((void *)D_00D37700) + (var_s2 * 8);
            var_s2 += 1;
            *temp_v0_2 = 0x18;
            goto loop_27;
        }
        func_00D0C4A0(0);
    }
}
