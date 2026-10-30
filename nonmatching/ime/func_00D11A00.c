/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00D11BE0(void *, s32, s32);
extern s32 func_00D11AB0(void *, s32);
s32 func_00D11A00(void *arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    if (arg0 != NULL) {
        temp_a3 = M2C_FIELD(arg0, s32 *, 0xD9C);
        var_v0 = M2C_FIELD(arg0, s32 *, 0xD94) - temp_a3;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 <= 0) {
            temp_v1 = 0x100 - (arg1 & 0xFF);
            temp_s1 = M2C_FIELD(arg0, s32 *, 0xDB8) - 1;
            var_v0_2 = temp_v1 >> 6;
            if (temp_v1 < 0) {
                var_v0_2 = (s32) (temp_v1 + 0x3F) >> 6;
            }
            if (arg0 != NULL) {
                func_00D11BE0(arg0, temp_a3 - 1, var_v0_2 + 2);
            }
            return func_00D11AB0(arg0, temp_s1);
        }
        return func_00D11AB0(arg0, M2C_FIELD(arg0, s32 *, 0xDB8));
    }
    return 2;
}
