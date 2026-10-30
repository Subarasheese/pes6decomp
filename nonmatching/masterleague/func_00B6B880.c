/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B695D0(void);
s32 func_00B694C0(s32);                             /* extern */

s32 func_00B6B880(s32 arg0) {
    s16 temp_a0;
    s16 temp_v1_2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s2;
    u32 temp_v0;

    if ((arg0 & 0xFF) >= 0x20) {
        return 0;
    }
    temp_v0 = func_00B695D0();
    if (temp_v0 != 0) {
        var_s2 = 0;
loop_7:
        temp_v1 = func_00B694C0(var_s2 & 0xFF) & 0xFF;
        if (temp_v1 < 0x17) {
            temp_a0 = M2C_FIELD((temp_v0 + (temp_v1 * 0x24)), s16 *, 0x3330);
            temp_v1_2 = M2C_FIELD((temp_v0 + ((arg0 & 0xFF) * 0x198) + 0xC + ((var_s2 & 0xFF) * 0x10)), s16 *, 4);
            var_a1 = 0;
            if (temp_v1_2 > 0) {
                if (((s64) ((s64) temp_a0 << 0x30) >> 0x30) >= temp_v1_2) {
                    var_a1 = 1;
                }
            } else if (temp_v1_2 < 0) {
                if (temp_v1_2 >= ((s64) ((s64) temp_a0 << 0x30) >> 0x30)) {
                    var_a1 = 1;
                }
            } else {
                var_a1 = 1;
            }
            if (var_a1 == 0) {
                return 0;
            }
            goto block_19;
        }
block_19:
        var_s2 = (var_s2 + 1) & 0xFF;
        if (var_s2 >= 0x17) {
            return 1;
        }
        goto loop_7;
    }
    return 0;
}
