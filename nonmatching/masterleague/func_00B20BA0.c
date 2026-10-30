/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00229DF0(void);
s32 func_0099B570(M2C_UNK);                         /* extern */
s32 func_0099B6E0(M2C_UNK, u8);                     /* extern */
M2C_UNK func_00B20280(s32, s32, u8);                /* extern */

void func_00B20BA0(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    u8 temp_a1;
    u8 temp_s1;
    u8 temp_s1_2;
    u8 temp_s1_3;
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if ((temp_v0 != NULL) && (temp_a1 = M2C_FIELD(temp_v0, u8 *, 3), ((s32) temp_a1 > 0))) {
        if ((func_0099B6E0(4, temp_a1) == 1) && (func_0099B6E0(4, (M2C_FIELD(temp_v0, u8 *, 3) - 1) & 0xFF) == 1)) {
            temp_s1 = M2C_FIELD(temp_v0, u8 *, 3);
            var_s0 = 0;
            do {
                if ((temp_s1 != 0x24) || (var_s0 != (func_00225820() & 0xFF))) {
                    var_s2 = 0;
                    do {
                        func_00B20280(var_s0 & 0xFF, var_s2 & 0xFF, temp_s1);
                        var_s2 += 1;
                    } while (var_s2 < 0x25);
                }
                var_s0 += 1;
            } while (var_s0 < 0x48);
            return;
        }
        if ((func_0099B6E0(4, M2C_FIELD(temp_v0, u8 *, 3)) == 0) && (func_0099B6E0(4, (M2C_FIELD(temp_v0, u8 *, 3) - 1) & 0xFF) == 1)) {
            temp_s1_2 = M2C_FIELD(temp_v0, u8 *, 3);
            if ((func_0099B570(0) & 0xFF) >= (s32) temp_s1_2) {
                var_s0_2 = 0;
                do {
                    if ((temp_s1_2 != 0x24) || (var_s0_2 != (func_00225820() & 0xFF))) {
                        var_s3 = 0;
                        do {
                            func_00B20280(var_s0_2 & 0xFF, var_s3 & 0xFF, temp_s1_2 & 0xFF);
                            var_s3 += 1;
                        } while (var_s3 < 0x25);
                    }
                    var_s0_2 += 1;
                } while (var_s0_2 < 0x48);
                return;
            }
        }
        temp_s1_3 = M2C_FIELD(temp_v0, u8 *, 3);
        if (temp_s1_3 == 0x24) {
            var_s0_3 = 0;
            do {
                if (temp_s1_3 == 0x24) {
                    if (var_s0_3 != (func_00225820() & 0xFF)) {
                        goto block_26;
                    }
                } else {
block_26:
                    var_s2_2 = 0;
                    do {
                        func_00B20280(var_s0_3 & 0xFF, var_s2_2 & 0xFF, temp_s1_3);
                        var_s2_2 += 1;
                    } while (var_s2_2 < 0x25);
                }
                var_s0_3 += 1;
            } while (var_s0_3 < 0x48);
        }
    }
}
