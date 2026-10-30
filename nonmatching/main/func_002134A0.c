/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00211AB0(void *, s8, M2C_UNK, M2C_UNK); /* extern */

void func_002134A0(void *arg0, s32 arg1, s8 arg2) {
    s32 var_v1;
    s8 var_a2;
    void *temp_v0;

    var_a2 = arg2;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, u8 *, 9) != 0)) {
        var_v1 = M2C_FIELD(arg0, s8 *, 0xC) - 1;
        if (var_v1 < arg1) {

        } else if (arg1 >= 0) {
            var_v1 = arg1;
        } else {
            var_v1 = 0;
        }
        if (var_a2 >= 2) {
            var_a2 = 1;
        } else if (var_a2 < 0) {
            var_a2 = 0;
        }
        temp_v0 = (var_v1 * 0x7C) + arg0;
        M2C_FIELD(temp_v0, s8 *, 0x12) = var_a2;
        func_00211AB0(temp_v0 + 0x10, M2C_FIELD(arg0, s8 *, 0xD), 0xA, 0xA);
    }
}
