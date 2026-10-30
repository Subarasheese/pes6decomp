/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00234E00(s32);                             /* extern */
s32 func_00236680(s32);                             /* extern */

void func_002343F0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a4;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s7;
    s32 temp_v1;
    s32 var_a5;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_s6;
    void *temp_s3;
    void *var_a0;
    void *var_a3;

    temp_s3 = func_00229460();
    if ((func_00231240() != 1) && (temp_s3 != NULL)) {
        temp_s2 = func_00234E00(arg0) & 0xFF;
        temp_s7 = arg1 & 0xFF;
        temp_s1 = temp_s2 * 0xC;
        temp_s6 = M2C_FIELD((temp_s1 + temp_s3), u8 *, 0x4AB9);
        temp_s0 = (temp_s7 / (s32) temp_s6) & 0xFF;
        temp_a4 = func_00236680(temp_s2) & 0xFF;
        var_a5 = 0;
        var_v1 = 0;
        var_a3 = temp_s3;
loop_4:
        if (var_a5 < (temp_s2 & 0xFF)) {
            if (var_a5 < 0x14) {
                var_a5 += 1;
                temp_a0 = M2C_FIELD(var_a3, u8 *, 0x4ABD) * M2C_FIELD(var_a3, u8 *, 0x4AB8);
                var_a3 += 0xC;
                var_v1 = (var_v1 + (temp_a0 & 0xFF)) & 0xFF;
                goto loop_4;
            }
        }
        temp_v1 = (var_v1 + ((((arg0 & 0xFF) - (temp_a4 & 0xFF)) + (M2C_FIELD((temp_s1 + temp_s3), u8 *, 0x4AB8) * (temp_s0 & 0xFF))) & 0xFF)) & 0xFF;
        if ((arg2 & 0xFF) == 1) {
            var_a0 = ((temp_v1 & 0xFF) * 4) + temp_s3;
            var_v1_2 = M2C_FIELD(var_a0, s32 *, 0x1368) | (1 << (temp_s7 % (s32) temp_s6));
        } else {
            var_a0 = ((temp_v1 & 0xFF) * 4) + temp_s3;
            var_v1_2 = M2C_FIELD(var_a0, s32 *, 0x1368) & ~(1 << (temp_s7 % (s32) temp_s6));
        }
        M2C_FIELD(var_a0, s32 *, 0x1368) = var_v1_2;
    }
}
