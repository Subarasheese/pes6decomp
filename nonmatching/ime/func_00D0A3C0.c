/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D082D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00D13920(s32);                         /* extern */

s32 func_00D0A3C0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s0;
    void *temp_s4;

    if (arg0 == 0) {
        return 0;
    }
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 < 0xA) {
        func_00D082D0(arg0 + 0x808, 0);
        var_s0 = 0;
        do {
            temp_s4 = arg0 + (var_s0 * 4);
            if (M2C_FIELD(temp_s4, s32 *, 0x7F4) == arg1) {
                temp_a0 = M2C_FIELD(temp_s4, s32 *, 0x7E0);
                if (temp_a0 != 0) {
                    func_00D13920(temp_a0);
                    M2C_FIELD(temp_s4, s32 *, 0x7E0) = 0;
                    M2C_FIELD(temp_s4, s32 *, 0x7F4) = 0xA;
                }
            }
            var_s0 += 1;
        } while (var_s0 < 5);
        return 1;
    }
    return 0;
}
