/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);
u16 *func_00325730(void *arg0, s32 arg1) {
    s32 var_s1;
    u16 *var_s2;
    u16 var_a0;

    var_s1 = 0;
    var_s2 = arg0 + 0x8F8 + 4;
    if (M2C_FIELD(arg0, s16 *, 0x8F8) > 0) {
loop_1:
        var_a0 = *var_s2;
        if ((var_a0 != 0x127) && (var_a0 != 0x126)) {

        } else {
            var_a0 = func_002371A0((s32) var_a0) & 0xFFFF;
        }
        if (var_a0 != arg1) {
            var_s1 += 1;
            var_s2 += 0x10;
            if (var_s1 >= M2C_FIELD(arg0, s16 *, 0x8F8)) {
                goto block_11;
            }
            goto loop_1;
        }
        return var_s2;
    }
block_11:
    return NULL;
}
