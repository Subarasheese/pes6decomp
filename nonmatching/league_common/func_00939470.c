/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002243B0(s32, s32);
extern void * func_00223C10(void);
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00230410();                                /* extern */
s32 func_0096F7D0(s32);                             /* extern */
s32 func_00970020(s32, s32);                        /* extern */
extern char D_00A6CC60[];

void func_00939470(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s4;
    s32 var_v1;
    u32 var_a2;
    void *temp_a0_2;
    void *temp_s0_2;

    if (func_00230410() != 0) {
        var_a2 = 0;
        do {
            temp_a0 = (var_a2 & 0xFFFF) * 8;
            var_a2 = (var_a2 + 1) & 0xFFFF;
            temp_a0_2 = ((void *)D_00A6CC60) + temp_a0;
            M2C_FIELD(temp_a0_2, s8 *, 4) = 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 5) = 0xFF;
            M2C_FIELD(temp_a0_2, s32 *, 0) = 0;
        } while (var_a2 < 0x13ADU);
        var_s4 = 0;
        do {
            var_s3 = 0;
loop_5:
            temp_s1 = func_00224BC0(var_s4, var_s3) & 0xFFFF;
            if (temp_s1 != 0) {
                temp_s2 = func_002243B0(var_s4, var_s3) & 0xFF;
                if ((temp_s2 != 0xFF) && (func_00970020(var_s4, temp_s2) != 0)) {
                    temp_s0 = temp_s1 & 0xFFFF;
                    if ((temp_s0 >= 0x7000) && (temp_s0 < 0x7020)) {
                        var_v1 = (temp_s0 - 0x5C78) & 0xFFFF;
                    } else if (func_0096F7D0(temp_s1) == 1) {
                        var_v1 = 0;
                    } else if ((temp_s0 >= 0x7060) && (temp_s0 < 0x70A0)) {
                        var_v1 = 0;
                    } else {
                        var_v1 = temp_s1 & 0xFFFF;
                    }
                    temp_v1 = var_v1 & 0xFFFF;
                    if (temp_v1 < 0x13AD) {
                        temp_s0_2 = ((void *)D_00A6CC60) + (temp_v1 * 8);
                        M2C_FIELD(temp_s0_2, s8 *, 4) = (s8) var_s4;
                        M2C_FIELD(temp_s0_2, s8 *, 5) = (s8) var_s3;
                        M2C_FIELD(temp_s0_2, void **, 0) = func_00223C10();
                    }
                }
            }
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 < 0x20) {
                goto loop_5;
            }
            var_s4 = (var_s4 + 1) & 0xFF;
        } while (var_s4 < 0x48);
    }
}
