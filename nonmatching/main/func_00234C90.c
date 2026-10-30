/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00234E00(s32);                             /* extern */
s32 func_00236680(s32);                             /* extern */

void *func_00234C90(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a5;
    s32 temp_a6_3;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    u8 temp_a4;
    u8 temp_a5_2;
    u8 temp_a6_2;
    void *temp_a6;
    void *temp_s1;
    void *var_a1;

    temp_s1 = func_00229460();
    if (func_00231240() == 1) {
        return NULL;
    }
    if (temp_s1 != NULL) {
        temp_s3 = func_00234E00(arg0) & 0xFF;
        temp_v1 = temp_s3 & 0xFF;
        temp_a0 = (arg0 - func_00236680(temp_s3)) & 0xFF;
        temp_a5 = arg1 & 0xFF;
        var_a3 = 0;
        var_a2 = 0;
        temp_v0 = temp_v1 * 0xC;
        var_a1 = temp_s1;
        temp_a6_2 = M2C_FIELD((temp_v0 + temp_s1), u8 *, 0x4AB9);
loop_8:
        if (var_a3 < temp_v1) {
            if (var_a3 < 0x14) {
                var_a3 += 1;
                temp_a5_2 = M2C_FIELD(var_a1, u8 *, 0x4AB9);
                temp_a4 = M2C_FIELD(var_a1, u8 *, 0x4ABC);
                temp_a6_3 = M2C_FIELD(var_a1, u8 *, 0x4ABD) * M2C_FIELD(var_a1, u8 *, 0x4AB8);
                var_a1 += 0xC;
                var_a2 = (var_a2 + ((temp_a4 * (temp_a5_2 * temp_a6_3)) & 0xFFFF)) & 0xFFFF;
                goto loop_8;
            }
        }
        temp_a6 = temp_v0 + temp_s1;
        return temp_s1 + (((M2C_FIELD(temp_a6, u8 *, 0x4ABC) * ((M2C_FIELD(temp_a6, u8 *, 0x4AB9) * ((temp_a0 & 0xFF) + (((temp_a5 / (s32) temp_a6_2) & 0xFF & 0xFF) * M2C_FIELD(temp_a6, u8 *, 0x4AB8)))) + (((u32) temp_a5 % temp_a6_2) & 0xFF & 0xFF))) + (var_a2 & 0xFFFF) + (arg2 & 0xFF)) & 0xFFFF) + 0x16F4;
    }
    return NULL;
}
