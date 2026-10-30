/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00234E00(s32);                             /* extern */
s32 func_00236680(s32);                             /* extern */

s32 func_00232510(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_a7;
    s32 var_s3;
    s32 var_t0;
    u8 temp_a0;
    u8 temp_v0;
    u8 temp_v1_2;
    void *temp_s2;
    void *var_a6;

    temp_s2 = func_00229460();
    if (func_00231240() == 1) {
        return 0;
    }
    if (temp_s2 != NULL) {
        temp_s4 = func_00234E00(arg1) & 0xFF;
        var_s3 = arg2 & 0xFF;
        temp_s1 = temp_s4 * 0xC;
        temp_v1_2 = M2C_FIELD((temp_s1 + temp_s2), u8 *, 0x4ABA);
        if (var_s3 >= (s32) temp_v1_2) {
            var_s3 = (temp_v1_2 - 1) & 0xFF;
        }
        temp_a1 = var_s3 & 0xFF;
        temp_v1 = (arg1 - func_00236680(temp_s4)) & 0xFF;
        var_t0 = 0;
        temp_v0 = M2C_FIELD((temp_s1 + temp_s2), u8 *, 0x4AB9);
        var_a7 = 0;
        var_a6 = temp_s2;
loop_10:
        if (var_t0 < (temp_s4 & 0xFF)) {
            if (var_t0 < 0x14) {
                var_t0 += 1;
                temp_a0 = M2C_FIELD(var_a6, u8 *, 0x4AB9);
                temp_a1_2 = M2C_FIELD(var_a6, u8 *, 0x4ABD) * M2C_FIELD(var_a6, u8 *, 0x4AB8);
                var_a6 += 0xC;
                var_a7 = (var_a7 + ((temp_a0 * temp_a1_2) & 0xFFFF)) & 0xFFFF;
                goto loop_10;
            }
        }
        return arg0 + (((temp_v0 * ((temp_v1 & 0xFF) + (((temp_a1 / (s32) temp_v0) & 0xFF & 0xFF) * M2C_FIELD((temp_s1 + temp_s2), u8 *, 0x4AB8)))) + (var_a7 & 0xFFFF) + (((u32) temp_a1 % temp_v0) & 0xFF & 0xFF)) & 0xFFFF);
    }
    return 0;
}
