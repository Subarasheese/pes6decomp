/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022F0E0(void);
extern u32 func_0094BC40(void);
extern s32 func_00226710(void);
extern u8 func_0022BC60(s32);
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00230410();                                /* extern */
M2C_UNK func_0094AB10(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_0094AC30(s32, s32, s32, M2C_UNK);      /* extern */
s32 func_0099B3F0(s32);                             /* extern */

void func_0099C660(s32 arg0, s32 arg1) {
    u8 spA0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s7;
    s32 var_s1;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    u8 temp_s0_2;
    u8 temp_v1;

    temp_s0 = func_0094BC40() & 0xFF;
    var_s6 = func_0022F0E0();
    if ((var_s6 != 0) && ((func_00230410() != 1) || ((func_00226710() & 0xFF) == 0x26) || (temp_a0 = func_00226710() & 0xFF, (temp_a0 == 0x27)) || (func_0099B3F0(temp_a0) != 0)) && (temp_v1 = arg0 & 0xFF, spA0 = temp_v1, (temp_v1 != 0xFF))) {
        if ((arg1 & 0xFF) == 0xFF) {
            return;
        }
        temp_s7 = temp_s0 & 0xFF;
        var_s4 = 0;
        do {
            var_s5 = 0;
            if (temp_s7 > 0) {
                var_s1 = var_s6;
                do {
                    temp_s3 = func_0022BC60((s32) spA0) & 0xFF;
                    temp_s2 = func_00224BC0(temp_s3, var_s5 & 0xFF) & 0xFFFF;
                    if (temp_s2 != 0) {
                        temp_s0_2 = M2C_FIELD(var_s1, u8 *, 0x5C);
                        if ((s32) temp_s0_2 >= 2) {
                            func_0094AC30(func_00226710() & 0xFF, temp_s2, temp_s3, 1);
                            func_0094AB10(func_00226710() & 0xFF, temp_s2, temp_s3, 1);
                        } else if ((M2C_FIELD(var_s1, u8 *, 0x5D) & 0xFF) > 0) {
                            func_0094AC30(func_00226710() & 0xFF, temp_s2, temp_s3, 1);
                            func_0094AB10(func_00226710() & 0xFF, temp_s2, temp_s3, 0);
                            if (temp_s0_2 == 1) {
                                func_0094AC30(func_00226710() & 0xFF, temp_s2, temp_s3, 0);
                            }
                        } else if (temp_s0_2 == 1) {
                            func_0094AC30(func_00226710() & 0xFF, temp_s2, temp_s3, 0);
                        }
                    }
                    var_s5 += 1;
                    var_s1 += 0x14;
                } while (var_s5 < temp_s7);
            }
            spA0 = arg1 & 0xFF;
            var_s4 += 1;
            var_s6 += 0x280;
        } while (var_s4 < 2);
    }
}
