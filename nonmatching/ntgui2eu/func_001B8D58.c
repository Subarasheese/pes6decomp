/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001B8400(s32, s32);                      /* extern */
s32 func_001B8CF0(void *, void *);                  /* extern */

void *func_001B8D58(s32 arg0, void *arg1, void *arg2) {
    s16 temp_a1_2;
    s16 temp_a1_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 *var_a3_2;
    s32 temp_v0_3;
    s32 var_a6;
    s32 var_s0;
    s32 var_t0;
    u32 *var_a4;
    u32 *var_a5;
    u32 temp_a1;
    u32 temp_v0_4;
    u32 temp_v0_5;
    void *temp_a2;
    void *temp_a7;
    void *temp_t1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a3;
    void *var_s1;
    void *var_s2;

    var_s1 = arg1;
    var_s2 = arg2;
    temp_v0_3 = func_001B8CF0(var_s1, var_s2);
    if (temp_v0_3 == 0) {
        temp_v0_2 = func_001B8400(arg0, 0);
        M2C_FIELD(temp_v0_2, s32 *, 0x10) = 1;
        M2C_FIELD(temp_v0_2, s32 *, 0x14) = 0;
        return temp_v0_2;
    }
    if (temp_v0_3 >= 0) {
        var_s0 = 0;
    } else {
        temp_a7 = var_s1;
        var_s1 = var_s2;
        var_s0 = 1;
        var_s2 = temp_a7;
    }
    temp_v0 = func_001B8400(arg0, M2C_FIELD(var_s1, s32 *, 4));
    var_a4 = var_s1 + 0x14;
    var_a5 = var_s2 + 0x14;
    M2C_FIELD(temp_v0, s32 *, 0xC) = var_s0;
    var_a3 = temp_v0 + 0x14;
    var_a6 = 0;
    var_t0 = M2C_FIELD(var_s1, s32 *, 0x10);
    temp_t1 = var_a4 + (var_t0 * 4);
    temp_a2 = var_a5 + (M2C_FIELD(var_s2, s32 *, 0x10) * 4);
    do {
        temp_a1 = *var_a4;
        var_a4 += 4;
        temp_v0_4 = *var_a5;
        var_a5 += 4;
        temp_v1 = ((temp_a1 & 0xFFFF) - (temp_v0_4 & 0xFFFF)) + var_a6;
        M2C_FIELD(var_a3, s16 *, 0) = temp_v1;
        temp_a1_2 = ((temp_a1 >> 0x10) - (temp_v0_4 >> 0x10)) + (temp_v1 >> 0x10);
        M2C_FIELD(var_a3, s16 *, 2) = temp_a1_2;
        var_a3 += 4;
        var_a6 = temp_a1_2 >> 0x10;
    } while ((u32) var_a5 < (u32) temp_a2);
    if ((u32) var_a4 < (u32) temp_t1) {
        do {
            temp_v0_5 = *var_a4;
            var_a4 += 4;
            temp_v1_2 = (temp_v0_5 & 0xFFFF) + var_a6;
            M2C_FIELD(var_a3, s16 *, 0) = temp_v1_2;
            temp_a1_3 = (temp_v0_5 >> 0x10) + (temp_v1_2 >> 0x10);
            M2C_FIELD(var_a3, s16 *, 2) = temp_a1_3;
            var_a3 += 4;
            var_a6 = temp_a1_3 >> 0x10;
        } while ((u32) var_a4 < (u32) temp_t1);
    }
    var_a3_2 = var_a3 - 4;
    if (*var_a3_2 == 0) {
        do {
            var_a3_2 -= 4;
            var_t0 -= 1;
        } while (*var_a3_2 == 0);
    }
    M2C_FIELD(temp_v0, s32 *, 0x10) = var_t0;
    return temp_v0;
}
