/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B447A0(void);
M2C_UNK func_0095C4A0(u16);                         /* extern */

void func_00B3E3D0(void) {
    s32 var_s1;
    u16 temp_a0;
    u32 var_s0;

    var_s0 = func_00B447A0();
    if (var_s0 != 0) {
        var_s1 = 0;
        do {
            temp_a0 = M2C_FIELD(var_s0, u16 *, 0x6A0);
            if (temp_a0 != 0xFFFF) {
                func_0095C4A0(temp_a0);
            }
            var_s1 += 1;
            var_s0 += 2;
        } while (var_s1 < 8);
    }
}
