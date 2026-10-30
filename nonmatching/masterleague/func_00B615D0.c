/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B615D0(void *arg0, void *arg1) {
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u8 temp_a2;
    u8 temp_v1;
    void *var_a5;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        temp_a2 = M2C_FIELD(arg0, u8 *, 0xA9);
        temp_v1 = M2C_FIELD(arg0, u8 *, 0xA8);
        if (temp_v1 != temp_a2) {
            if ((s32) temp_v1 >= (s32) temp_a2) {
                var_v0 = (0x15 - temp_v1) + temp_a2;
            } else {
                var_v0 = temp_a2 - temp_v1;
            }
            var_v0_2 = var_v0 & 0xFF;
        } else {
            var_v0_2 = 0;
        }
        var_v0_3 = var_v0_2 & 0xFF;
    } else {
        var_v0_3 = 0;
    }
    if ((var_v0_3 & 0xFF) > 0) {
        if (arg0 != NULL) {
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 0xA8) & 0xFF;
            if (temp_v1_2 < 0x15) {
                var_a5 = arg0 + (temp_v1_2 * 8);
            } else {
                var_a5 = NULL;
            }
        } else {
            var_a5 = NULL;
        }
        if (var_a5 == NULL) {
            return 0;
        }
        if (arg1 != NULL) {
            M2C_FIELD(arg1, s16 *, 0) = (s16) M2C_FIELD(var_a5, s16 *, 0);
            M2C_FIELD(arg1, s16 *, 2) = (s16) M2C_FIELD(var_a5, s16 *, 2);
            M2C_FIELD(arg1, s16 *, 4) = (s16) M2C_FIELD(var_a5, s16 *, 4);
            M2C_FIELD(arg1, s16 *, 6) = (s16) M2C_FIELD(var_a5, s16 *, 6);
        }
        if (var_a5 != NULL) {
            M2C_FIELD(var_a5, s16 *, 6) = (s16) (((u16) M2C_FIELD(var_a5, s16 *, 6) & ~0x7F80) | 0x7F80);
            M2C_FIELD(var_a5, s16 *, 0) = 0;
            M2C_FIELD(var_a5, s16 *, 2) = 0;
            M2C_FIELD(var_a5, s16 *, 4) = 0;
            M2C_FIELD(var_a5, s16 *, 6) = (s8) (((u8) M2C_FIELD(var_a5, s16 *, 6) & ~1) | (0 & 1));
            M2C_FIELD(var_a5, s16 *, 6) = (s8) (((u8) M2C_FIELD(var_a5, s16 *, 6) & ~0x7E) | 2);
        }
        var_v1 = M2C_FIELD(arg0, u8 *, 0xA8) + 1;
        if (var_v1 >= 0x15) {
            var_v1 = var_v1 % 21;
        }
        M2C_FIELD(arg0, u8 *, 0xA8) = (u8) var_v1;
        return 1;
    }
    return 0;
}
