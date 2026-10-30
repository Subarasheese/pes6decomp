/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
s32 func_00228F20(s32);                             /* extern */
s32 func_00233EF0(s32, s32);                        /* extern */
s32 func_00234580(s32, s32);                        /* extern */
M2C_UNK func_00955680(M2C_UNK, s32, s32, s32);      /* extern */
s32 func_00AE1880(s32);                             /* extern */
extern void *D_003E77B4;

void func_00AE1980(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s0;
    s32 var_s4;
    s32 var_s5;
    u8 temp_a2;
    void *temp_v0;

    var_s0 = 0;
    temp_v0 = func_00229460();
    if (temp_v0 != NULL) {
        temp_a2 = M2C_FIELD(temp_v0, u8 *, 0x4ABF);
        if ((s32) temp_a2 > 0) {
            var_s0 = ((s32) M2C_FIELD(((M2C_FIELD(D_003E77B4, u8 *, 0x16F1) * 0xC) + D_003E77B4), u8 *, 0x4AC0) / (s32) temp_a2) & 0xFF;
        }
        temp_s2 = M2C_FIELD(temp_v0, u8 *, 0x4ABA) & 0xFF;
        if ((M2C_FIELD(temp_v0, u8 *, 0x4AB6) & 0xFF) < temp_s2) {
            temp_s1 = M2C_FIELD(temp_v0, u8 *, 0x4AB8) & 0xFF;
            var_s4 = 0;
            if (temp_s1 > 0) {
                temp_s0 = var_s0 & 0xFF;
                do {
                    if (((func_00228F20(var_s4 & 0xFF) & 0xFF) <= 0) && (func_00AE1880(var_s4 & 0xFF) < temp_s0)) {
                        var_s5 = 0;
                        if (temp_s2 > 0) {
loop_9:
                            temp_s3 = func_00234580(var_s5 & 0xFF, var_s4 & 0xFF) & 0xFF;
                            if ((func_00AE1880(temp_s3) < temp_s0) && (func_00233EF0(var_s4 & 0xFF, var_s5 & 0xFF) == 0) && ((temp_s3 & 0xFF) != 0xFE) && !(func_00228F20(temp_s3) & 0xFF)) {
                                func_00955680(0, var_s5 & 0xFF, var_s4 & 0xFF, temp_s3);
                            } else {
                                var_s5 += 1;
                                if (var_s5 < temp_s2) {
                                    goto loop_9;
                                }
                            }
                        }
                    }
                    var_s4 += 1;
                } while (var_s4 < temp_s1);
            }
        }
    }
}
