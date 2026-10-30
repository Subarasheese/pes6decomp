/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00133C00(void *arg0, void *arg1) {
    s32 *var_a0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_v1;
    u8 temp_a1;
    void *temp_a5;
    void *var_a2_2;

    if (arg1 == NULL) {
        M2C_FIELD(arg0, void **, 0) = NULL;
        if (arg0 != NULL) {
            temp_a1 = M2C_FIELD(arg0, u8 *, 5);
            temp_a5 = M2C_FIELD(arg0, void **, 0xC);
            var_a4 = 0;
            if ((s32) temp_a1 > 0) {
                if ((s32) temp_a1 >= 9) {
                    var_a3 = 0;
                    var_v1 = 0;
                    if (((s32) temp_a1 >= 0) && ((s32) temp_a1 < 0x7FFFFFFF)) {
                        var_v1 = 1;
                    }
                    if (var_v1 != 0) {
                        temp_v1 = temp_a1 & 0x80000000;
                        var_a2 = 1;
                        if ((temp_v1 == 0) && (temp_v1 != 0)) {
                            var_a2 = 0;
                        }
                        if (var_a2 != 0) {
                            var_a3 = 1;
                        }
                    }
                    if (var_a3 != 0) {
                        var_a2_2 = temp_a5;
                        do {
                            M2C_FIELD(var_a2_2, s32 *, 0) = 0;
                            var_a4 += 8;
                            M2C_FIELD(var_a2_2, s32 *, 4) = 0;
                            M2C_FIELD(var_a2_2, s32 *, 8) = 0;
                            M2C_FIELD(var_a2_2, s32 *, 0xC) = 0;
                            M2C_FIELD(var_a2_2, s32 *, 0x10) = 0;
                            M2C_FIELD(var_a2_2, s32 *, 0x14) = 0;
                            M2C_FIELD(var_a2_2, s32 *, 0x18) = 0;
                            M2C_FIELD(var_a2_2, s32 *, 0x1C) = 0;
                            var_a2_2 += 0x20;
                        } while (var_a4 < (temp_a1 - 8));
                    }
                }
                if (var_a4 < (s32) temp_a1) {
                    var_a0 = temp_a5 + (var_a4 * 4);
                    do {
                        var_a4 += 1;
                        *var_a0 = 0;
                        var_a0 += 4;
                    } while (var_a4 < (s32) temp_a1);
                }
            }
        }
        return;
    }
    if (M2C_FIELD(arg1, u8 *, 5) == M2C_FIELD(arg0, u8 *, 5)) {
        M2C_FIELD(arg0, void **, 0) = arg1;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s8 *, 7) = 1;
    }
}
