/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
void func_0095AE30(s32 arg0) {
    s32 temp_v0;
    s32 var_a3;
    u8 temp_a1;
    u8 temp_a2;
    u8 var_a4;

    if ((arg0 & 0xFF) < 0x50) {
        temp_v0 = func_002260F0(arg0);
        if (temp_v0 != 0) {
            temp_a2 = M2C_FIELD(temp_v0, u8 *, 0xC0);
            var_a3 = 0;
            var_a4 = temp_a2;
loop_3:
            temp_a1 = var_a3 & 0xFF;
            if (!(M2C_FIELD((temp_v0 + (M2C_FIELD((temp_v0 + temp_a1), u8 *, 0x4B1) * 0x16)), u8 *, 0x1F3) & 0x1F & 1)) {
                var_a3 = (var_a3 + 1) & 0xFF;
                if (var_a3 < 0xB) {
                    goto loop_3;
                }
            } else {
                var_a4 = temp_a1;
            }
            if (var_a4 != temp_a2) {
                M2C_FIELD(temp_v0, u8 *, 0xC0) = var_a4;
            }
        }
    }
}
