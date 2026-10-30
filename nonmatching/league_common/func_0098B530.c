/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002243B0(s32, s32);
extern void * func_00229460(void);
s32 func_00224BC0(s32, s32, void *);                /* extern */
s32 func_00230410();                                /* extern */

void func_0098B530(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_s0;
    s32 temp_a0;
    s64 var_a1;
    s64 var_s4;
    s64 var_s7;
    u16 temp_s1;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;
    void *var_a2;
    void *var_s2;

    temp_v0 = func_00229460();
    if (temp_v0 != NULL) {
        temp_a2 = (((s64) (func_002243B0(arg0, arg1) << 0x38) >> 0x38) * 4) + (((arg0 & 0xFF) << 7) + temp_v0);
        M2C_FIELD(temp_a2, u16 *, 0x5246) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x5246) + (arg2 & 0xFF));
        temp_s1 = M2C_FIELD(temp_a2, u16 *, 0x5246);
        temp_s0 = func_00224BC0(arg0, arg1, temp_a2) & 0xFFFF;
        var_s7 = 0x13;
        var_s4 = 0;
        var_s2 = temp_v0;
loop_2:
        if (func_00230410() != 1) {
            if ((temp_s0 == M2C_FIELD(var_s2, u16 *, 0x5156)) && ((arg0 & 0xFF) == M2C_FIELD(var_s2, u8 *, 0x515A))) {
                var_s7 = var_s4 & 0xFF;
            } else {
                goto block_10;
            }
        } else if (temp_s0 == M2C_FIELD(var_s2, u16 *, 0x5156)) {
            var_s7 = var_s4 & 0xFF;
        } else {
block_10:
            var_s4 = (s64) ((var_s4 + 1) << 0x38) >> 0x38;
            var_s2 += 6;
            if (var_s4 >= 0x14) {

            } else {
                goto loop_2;
            }
        }
        temp_a0 = temp_s1 & 0xFFFF;
        if (((s32) M2C_FIELD(temp_v0, u16 *, 0x51CA) < temp_a0) && (var_a1 = (s64) (var_s7 << 0x38) >> 0x38, (var_a1 >= 0))) {
            var_a2 = temp_v0 + (var_a1 * 6);
loop_15:
            if ((var_a1 != 0) && ((s32) M2C_FIELD(var_a2, u16 *, 0x5152) < temp_a0)) {
                M2C_FIELD(var_a2, u16 *, 0x5156) = (u16) M2C_FIELD(var_a2, u16 *, 0x5150);
                M2C_FIELD(var_a2, u8 *, 0x515A) = (u8) M2C_FIELD(var_a2, u8 *, 0x5154);
                M2C_FIELD(var_a2, u16 *, 0x5158) = (u16) M2C_FIELD(var_a2, u16 *, 0x5152);
                var_a1 = (s64) ((var_a1 - 1) << 0x38) >> 0x38;
                var_a2 -= 6;
                if (var_a1 < 0) {

                } else {
                    goto loop_15;
                }
            } else {
                temp_v1 = (var_a1 * 6) + temp_v0;
                M2C_FIELD(temp_v1, s16 *, 0x5156) = temp_s0;
                M2C_FIELD(temp_v1, s8 *, 0x515A) = (s8) arg0;
                M2C_FIELD(temp_v1, u16 *, 0x5158) = temp_s1;
            }
        }
    }
}
