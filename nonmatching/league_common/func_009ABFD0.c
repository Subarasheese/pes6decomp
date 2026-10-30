/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002243B0(s32, s32);
extern void * func_00223C10(void);
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00230410();                                /* extern */
s32 func_00930C30(s32, s32);                        /* extern */
s32 func_0094B400(s32, s32);                        /* extern */
s32 func_00AFDD10(s32, s32);                        /* extern */

s64 func_009ABFD0(s32 arg0, s16 *arg1, s32 arg2, s32 arg3) {
    s16 var_v0;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s64 var_s3;
    s64 var_s4;
    s64 var_s5;
    u8 *temp_v0;
    void *temp_v0_2;

    var_s5 = -1;
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    if ((func_00230410() == 1) && (func_00AFDD10(arg0, arg2) == 1)) {
        var_s5 = 0;
        if (arg1 != NULL) {
            *arg1 = 1;
        }
    }
    temp_v1 = func_0094B400(arg0, arg2) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 2:
        var_s5 = (s64) (2 << 0x30) >> 0x30;
        if (arg1 != NULL) {
            var_v0 = func_00930C30(arg0, arg2) & 0xFF;
block_17:
            *arg1 = var_v0;
        }
        break;
    case 1:
        var_s5 = (s64) (1 << 0x30) >> 0x30;
        if (arg1 != NULL) {
            var_v0 = func_00930C30(arg0, arg2) & 0xFF;
            goto block_17;
        }
        break;
    }
    if ((func_00230410() == 1) && ((func_002243B0(arg2, arg3) & 0xFF) != 0xFF)) {
        temp_v0 = func_00223C10();
        if (temp_v0 != NULL) {
            temp_v1_2 = *temp_v0 & 0xF;
            if ((temp_v1_2 != 0xA) && (temp_v1_2 != 9) && (temp_v1_2 != 8)) {

            } else {
                var_s5 = 3;
                if (arg1 != NULL) {
                    var_s4 = 0;
                    do {
                        var_s3 = 0;
loop_28:
                        temp_s1 = func_00224BC0(var_s4 & 0xFF, var_s3 & 0xFF) & 0xFFFF;
                        if ((temp_s1 != 0) && ((func_002243B0(var_s4 & 0xFF, var_s3 & 0xFF) & 0xFF) != 0xFF)) {
                            temp_v0_2 = func_00223C10();
                            if ((temp_v0_2 != NULL) && ((temp_s1 & 0xFFFF) == (arg0 & 0xFFFF))) {
                                temp_a0 = M2C_FIELD(temp_v0_2, u8 *, 0) & 0xF;
                                if ((temp_a0 != 7) && (temp_a0 != 6) && (temp_a0 != 5)) {

                                } else {
                                    *arg1 = (s16) ((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 1) << 0x38) >> 0x3A);
                                }
                            }
                        }
                        var_s3 = (s64) ((var_s3 + 1) << 0x30) >> 0x30;
                        if (var_s3 < 0x20) {
                            goto loop_28;
                        }
                        var_s4 = (s64) ((var_s4 + 1) << 0x30) >> 0x30;
                    } while (var_s4 < 0x48);
                }
            }
        }
    }
    return var_s5;
}
