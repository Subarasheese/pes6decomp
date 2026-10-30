/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00CE47D0(s32, s32, s32);                   /* extern */
s32 func_00CE4A30(s32, s32);                        /* extern */
s32 func_00CE8B20(s32);                             /* extern */
s32 func_00CEFE60();                                /* extern */
s32 func_00CEFEB0();                                /* extern */
extern char D_00CFFBA0[];

void func_00CEA040(void) {
    s32 *var_a1;
    s32 *var_s1;
    s32 temp_s0;
    s32 temp_s5;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s2;
    s32 var_s3;

    temp_s5 = func_00CEFE60();
    temp_v0 = func_00CEFEB0();
    temp_s0 = func_00CE4A30(temp_v0, temp_s5);
    if (temp_v0 != 8) {
        var_s3 = 0;
        var_s1 = ((void *)D_00CFFBA0);
        do {
            *var_s1 = var_s3;
            var_s2 = 0;
            if (temp_s0 > 0) {
                do {
                    if (var_s3 == func_00CE47D0(temp_v0, temp_s5, var_s2)) {
                        *var_s1 = func_00CE8B20(var_s2);
                    }
                    var_s2 += 1;
                } while (var_s2 < temp_s0);
            }
            var_s3 += 1;
            var_s1 += 4;
        } while (var_s3 < 0x20);
        return;
    }
    var_a0 = 0;
    var_a1 = ((void *)D_00CFFBA0);
    do {
        M2C_FIELD(var_a1, s32 *, 0) = var_a0;
        M2C_FIELD(var_a1, s32 *, 4) = (s32) (var_a0 + 1);
        M2C_FIELD(var_a1, s32 *, 8) = (s32) (var_a0 + 2);
        M2C_FIELD(var_a1, s32 *, 0xC) = (s32) (var_a0 + 3);
        M2C_FIELD(var_a1, s32 *, 0x10) = (s32) (var_a0 + 4);
        M2C_FIELD(var_a1, s32 *, 0x14) = (s32) (var_a0 + 5);
        M2C_FIELD(var_a1, s32 *, 0x18) = (s32) (var_a0 + 6);
        M2C_FIELD(var_a1, s32 *, 0x1C) = (s32) (var_a0 + 7);
        var_a0 += 8;
        var_a1 += 0x20;
    } while (var_a0 < 0x20);
}
