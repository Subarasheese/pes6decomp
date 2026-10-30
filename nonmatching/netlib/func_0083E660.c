/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
M2C_UNK func_0083E8E0(s32, s32);                    /* extern */
s32 func_00D0BAF0();                                /* extern */

void func_0083E660(s32 arg0) {
    s32 *var_v0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s8 var_v0_4;
    void *var_v0_3;

    temp_v0 = func_00828160();
    if (temp_v0 != 0) {
        var_s1 = 0;
loop_27:
        if (var_s1 >= 4) {
            goto block_28;
        }
        temp_v0_2 = func_00D0BAF0();
        if (temp_v0_2 != 0) {
            var_v1 = temp_v0_2 + 0xF8A4;
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            var_v0 = NULL;
        } else if (var_s1 < 0) {
            var_v0 = NULL;
        } else if (var_s1 < 4) {
            var_v0 = var_v1 + (var_s1 * 0x10) + 0x7C0;
        } else {
            var_v0 = NULL;
        }
        if (var_v0 != NULL) {
            var_v0_2 = *var_v0;
        } else {
            var_v0_2 = 0;
        }
        if (temp_v0 != var_v0_2) {
            var_s1 += 1;
            goto loop_27;
        }
    } else {
block_28:
        var_s1 = 4;
    }
    temp_v0_3 = func_00D0BAF0();
    if (temp_v0_3 != 0) {
        var_v1_2 = temp_v0_3 + 0xF8A4;
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 == 0) {
        var_v0_3 = NULL;
    } else if (var_s1 < 0) {
        var_v0_3 = NULL;
    } else if (var_s1 < 4) {
        var_v0_3 = var_v1_2 + (var_s1 * 0x10) + 0x7C0;
    } else {
        var_v0_3 = NULL;
    }
    if (var_v0_3 != NULL) {
        var_v0_4 = M2C_FIELD(var_v0_3, s8 *, 8);
    } else {
        var_v0_4 = 2;
    }
    func_0083E8E0(((s64) ((s64) var_v0_4 << 0x38) >> 0x38) == 0, arg0);
}
