/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00235800(s32 arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    void *temp_s0;
    void *temp_t0;

    var_s1 = 0;
    temp_s0 = func_00229460();
    if (func_00231240() == 1) {
        return 0;
    }
    if (temp_s0 != NULL) {
        temp_v1 = arg0 & 0xFF;
        if ((temp_v1 > 0) && (temp_v1 < 0x14)) {
            var_a0 = 0;
            if (temp_v1 > 0) {
                if ((u32) (temp_v1 & 0xFF) >= 9U) {
                    do {
                        temp_a2 = (var_a0 & 0xFF) * 3;
                        var_a0 = (var_a0 + 8) & 0xFF;
                        temp_t0 = temp_s0 + (temp_a2 * 4);
                        var_s1 = (((((((((((((((var_s1 + M2C_FIELD(temp_t0, u8 *, 0x4AC1)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4ACD)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4AD9)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4AE5)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4AF1)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4AFD)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4B09)) & 0xFF) + M2C_FIELD(temp_t0, u8 *, 0x4B15)) & 0xFF;
                    } while (var_a0 < (temp_v1 - 8));
                }
                if ((var_a0 & 0xFF) < temp_v1) {
                    do {
                        temp_a1 = var_a0 & 0xFF;
                        var_a0 = (var_a0 + 1) & 0xFF;
                        var_s1 = (var_s1 + M2C_FIELD((temp_s0 + (temp_a1 * 0xC)), u8 *, 0x4AC1)) & 0xFF;
                    } while (var_a0 < temp_v1);
                }
            }
        }
        return var_s1;
    }
    return 0;
}
