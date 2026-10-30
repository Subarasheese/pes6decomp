/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern s32 func_002937A0(u8);
s32 func_00B2C690(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s3;

    if ((arg0 & 0xFF) >= 0x48) {
        return 0;
    }
    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s3 = 0;
        do {
            temp_v0_2 = func_002937A0(M2C_FIELD((temp_v0 + var_s2), u8 *, 0xD6)) & 0xFF;
            if ((temp_v0_2 < 0xD) && ((arg1 & 0xFF) == temp_v0_2)) {
                var_s3 = (var_s3 + 1) & 0xFF;
            }
            var_s2 += 1;
        } while (var_s2 < 0xB);
        return var_s3;
    }
    return 0;
}
