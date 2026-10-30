/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B617B0(void *arg0) {
    s32 temp_a3;
    s32 temp_a4;
    s32 var_a3;
    s32 var_a5;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_5;
    u16 *var_v1_4;
    u8 temp_a1;
    u8 temp_a2;

    if (arg0 == NULL) {
        return 0;
    }
    var_v0 = 0;
    if (arg0 != NULL) {
        temp_a2 = M2C_FIELD(arg0, u8 *, 0xA9);
        temp_a1 = M2C_FIELD(arg0, u8 *, 0xA8);
        if (temp_a1 != temp_a2) {
            if ((s32) temp_a1 >= (s32) temp_a2) {
                var_v1 = (0x15 - temp_a1) + temp_a2;
            } else {
                var_v1 = temp_a2 - temp_a1;
            }
            var_v1_2 = var_v1 & 0xFF;
        } else {
            var_v1_2 = 0;
        }
        var_v1_3 = var_v1_2 & 0xFF;
    } else {
        var_v1_3 = 0;
    }
    temp_a4 = var_v1_3 & 0xFF;
    var_a5 = 0;
    if (temp_a4 > 0) {
        do {
            if (arg0 == NULL) {
                var_v1_4 = NULL;
            } else {
                temp_a3 = var_a5 & 0xFF;
                if (temp_a3 >= 0x15) {
                    var_v1_4 = NULL;
                } else {
                    var_a3 = M2C_FIELD(arg0, u8 *, 0xA8) + temp_a3;
                    if (var_a3 >= 0x15) {
                        var_a3 = var_a3 % 21;
                    }
                    var_v1_4 = arg0 + (var_a3 * 8);
                }
            }
            if (var_v1_4 == NULL) {
                var_v1_5 = 0;
            } else if (*var_v1_4 == 0) {
                var_v1_5 = 0;
            } else {
                var_v1_5 = 1;
            }
            if (var_v1_5 == 1) {
                var_v0 = (var_v0 + 1) & 0xFF;
            }
            var_a5 += 1;
        } while (var_a5 < temp_a4);
    }
    return var_v0;
}
