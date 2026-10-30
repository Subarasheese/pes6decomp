/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B6A2A0();                                /* extern */
M2C_UNK func_00B6A9E0(s32, s32);                    /* extern */
M2C_UNK func_00B6BD40(s32, s32);                    /* extern */
extern s32 D_003EAEE8;

s32 func_00B69C60(M2C_UNK arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v0;
    void *temp_v0;

    var_a1 = arg1;
    if (D_003EAEE8 == 0) {
        return 1;
    }
    if (D_003EAEE8 != 0) {
        var_a1 = 0;
loop_6:
        temp_v0 = D_003EAEE8 + var_a1;
        if (M2C_FIELD(temp_v0, u8 *, 0x377D) == M2C_FIELD(temp_v0, u8 *, 0x37BD)) {
            var_a1 += 1;
            if (var_a1 >= 0x20) {
                var_v0 = 1;
            } else {
                goto loop_6;
            }
        } else {
            var_v0 = 0;
        }
    } else {
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        func_00B6A9E0(D_003EAEE8, var_a1);
    } else {
        func_00B6BD40(D_003EAEE8, var_a1);
    }
    return func_00B6A2A0();
}
