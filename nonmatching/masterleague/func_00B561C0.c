/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00994760();                                /* extern */

void func_00B561C0(void) {
    s16 *var_v1_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;
    void *var_v0;
    void *var_v0_2;
    void *var_v1;
    void *var_v1_3;

    temp_v0 = func_00994760();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x61AC4;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        M2C_FIELD(var_v0, s8 *, 0x20) = 0;
    }
    temp_v0_2 = func_00994760();
    if (temp_v0_2 != 0) {
        var_v0_2 = temp_v0_2 + 0x61AC4;
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        M2C_FIELD(var_v0_2, s8 *, 0x21) = 0;
    }
    temp_v0_3 = func_00994760();
    if (temp_v0_3 != 0) {
        var_v1 = temp_v0_3 + 0x61AC4;
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        M2C_FIELD(var_v1, s8 *, 0x22) = 0;
    }
    var_s0 = 0;
    do {
        temp_s1 = var_s0 & 0xFF;
        if (temp_s1 >= 8) {
            var_v1_2 = NULL;
        } else {
            temp_v0_4 = func_00994760();
            if (temp_v0_4 == 0) {
                var_v1_2 = NULL;
            } else {
                var_v1_2 = temp_v0_4 + (temp_s1 * 4) + 0x61AC4;
            }
        }
        if (var_v1_2 != NULL) {
            *var_v1_2 = 0;
        }
        if (temp_s1 >= 8) {
            var_v1_3 = NULL;
        } else {
            temp_v0_5 = func_00994760();
            if (temp_v0_5 == 0) {
                var_v1_3 = NULL;
            } else {
                var_v1_3 = temp_v0_5 + ((var_s0 & 0xFF) * 4) + 0x61AC4;
            }
        }
        if (var_v1_3 != NULL) {
            M2C_FIELD(var_v1_3, s8 *, 2) = 0;
        }
        var_s0 += 1;
    } while (var_s0 < 8);
}
