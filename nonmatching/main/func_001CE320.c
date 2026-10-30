/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00529AC0[];

u8 func_001CE320(s32 arg0, s32 arg1) {
    s32 *var_a3_2;
    s32 *var_a5_3;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a7;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a4;
    s32 var_a5;
    s32 var_a5_2;
    s32 var_a6;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    u8 temp_a0;
    u8 temp_a1;
    u8 var_a3;
    u8 var_v0;
    void *temp_v0;
    void *var_t3;

    temp_v0 = arg0 + arg1;
    temp_a0 = M2C_FIELD(temp_v0, u8 *, 0);
    temp_a1 = M2C_FIELD(temp_v0, u8 *, 4);
    if (temp_a0 != temp_a1) {
        var_v0 = temp_a0;
        var_a3 = temp_a0;
        var_a2 = 0;
        if ((s32) temp_a0 < (s32) temp_a1) {
            temp_a7 = temp_a1 - temp_a0;
            if (temp_a7 >= 9) {
                var_t2 = 0;
                var_t1 = 0;
                var_a6 = 0;
                var_a5 = 0;
                var_a4 = 0;
                if (((s32) temp_a1 >= (s32) temp_a0) && ((s32) temp_a1 < 0x7FFFFFFF)) {
                    var_a4 = 1;
                }
                if (var_a4 != 0) {
                    if ((s32) var_v0 < 0x7FFFFFFF) {
                        var_a5 = 1;
                    }
                }
                if ((var_a5 != 0) && (var_v0 != 0x80000000)) {
                    var_a6 = 1;
                }
                if (var_a6 != 0) {
                    temp_a5 = temp_a1 & 0x80000000;
                    var_t0 = 1;
                    if ((temp_a5 == (-(s32) var_v0 & 0x80000000)) && (temp_a5 != (temp_a7 & 0x80000000))) {
                        var_t0 = 0;
                    }
                    if (var_t0 != 0) {
                        var_t1 = 1;
                    }
                }
                if (var_t1 != 0) {
                    temp_a4 = temp_a7 & 0x80000000;
                    var_a5_2 = 1;
                    if ((temp_a4 == 0) && (temp_a4 != 0)) {
                        var_a5_2 = 0;
                    }
                    if (var_a5_2 != 0) {
                        var_t2 = 1;
                    }
                }
                if (var_t2 != 0) {
                    var_t3 = ((void *)D_00529AC0) + (var_v0 * 8);
                    do {
                        var_a3 += 8;
                        var_a2 = var_a2 + M2C_FIELD(var_t3, s32 *, 0) + M2C_FIELD(var_t3, s32 *, 8) + M2C_FIELD(var_t3, s32 *, 0x10) + M2C_FIELD(var_t3, s32 *, 0x18) + M2C_FIELD(var_t3, s32 *, 0x20) + M2C_FIELD(var_t3, s32 *, 0x28) + M2C_FIELD(var_t3, s32 *, 0x30) + M2C_FIELD(var_t3, s32 *, 0x38);
                        var_t3 += 0x40;
                    } while ((s32) var_a3 < (temp_a1 - 8));
                }
            }
            if ((s32) var_a3 < (s32) temp_a1) {
                var_a5_3 = ((void *)D_00529AC0) + (var_a3 * 8);
                do {
                    var_a3 += 1;
                    var_a2 += *var_a5_3;
                    var_a5_3 += 8;
                } while ((s32) var_a3 < (s32) temp_a1);
            }
        }
        var_a2_2 = var_a2 >> 1;
        if ((s32) var_v0 < (s32) temp_a1) {
            var_a3_2 = ((void *)D_00529AC0) + (var_v0 * 8);
loop_32:
            var_a2_2 -= *var_a3_2;
            if (var_a2_2 >= 0) {
                var_v0 += 1;
                var_a3_2 += 8;
                if ((s32) var_v0 >= (s32) temp_a1) {

                } else {
                    goto loop_32;
                }
            }
        }
        if (var_v0 == temp_a0) {
            var_v0 += 1;
        }
        if (var_v0 == temp_a1) {
            return var_v0 - 1;
        }
        return var_v0;
    }
    return temp_a0;
}
