/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B695D0(void);
M2C_UNK func_00972CC0(s32);                         /* extern */

void func_00B6BD40(void) {
    s32 var_s1;
    u32 temp_v0;
    u32 var_s0;

    temp_v0 = func_00B695D0();
    if (temp_v0 != 0) {
        var_s1 = 0;
        var_s0 = temp_v0;
        do {
            if ((s32) M2C_FIELD((temp_v0 + var_s1), u8 *, 0x377D) >= 0x3C) {
                func_00972CC0(M2C_FIELD(M2C_FIELD(var_s0, void **, 0x367C), s32 *, 8));
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x20);
    }
}
