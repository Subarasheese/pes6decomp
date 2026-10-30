/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00827C30(s32);                         /* extern */
s32 func_00828140();                                /* extern */
s32 func_00936B90();                                /* extern */

void func_0095FDE0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_2;
    u16 *var_v0_2;
    u16 *var_v0_4;
    u16 var_v0_3;
    u16 var_v0_5;
    void *var_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x3DFD0;
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_v0 = NULL;
    } else {
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_v0_2 = temp_v0_2 + 0x3DFD0;
        } else {
            var_v0_2 = NULL;
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = *var_v0_2;
        } else {
            var_v0_3 = 0;
        }
        temp_v1 = var_v0_3 & 0xFFFF;
        temp_v0_3 = arg0 & 0xFFFF;
        if (temp_v0_3 < temp_v1) {
            temp_v0_4 = func_00936B90();
            if (temp_v0_4 != 0) {
                var_v0_4 = temp_v0_4 + 0x3DFD0;
            } else {
                var_v0_4 = NULL;
            }
            if (var_v0_4 != NULL) {
                var_v0_5 = *var_v0_4;
            } else {
                var_v0_5 = 0;
            }
            temp_v1_2 = ((temp_v1 - temp_v0_3) - 1) & 0xFFFF & 0xFFFF;
            if (temp_v1_2 < (var_v0_5 & 0xFFFF)) {
                var_v0 = var_s0 + (temp_v1_2 * 0xE4) + 4;
            } else {
                var_v0 = NULL;
            }
        } else {
            var_v0 = NULL;
        }
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s0_2 = M2C_FIELD(var_v0, s32 *, 4);
    } else {
        var_s0_2 = 0;
    }
    func_00827C30(var_s0_2 + func_00828140());
}
