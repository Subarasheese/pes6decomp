/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00189A50(void *arg0, s32 arg1, s32 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp48;
    s32 var_a1;
    s64 *var_a2;
    s64 temp_v0;
    s64 var_a4;

    sp48 = arg7;
    var_a2 = &sp48;
    M2C_FIELD(arg0, s64 *, 0) = (s64) (arg1 | (arg2 << 0xF) | ((arg5 << 0x3A) | (arg4 << 0x2F)) | ((arg3 << 0x2E) | (arg6 << 0x3C)));
    var_a1 = 0;
    M2C_FIELD(arg0, s64 *, 8) = 0;
    if (arg6 > 0) {
        var_a4 = 0;
        do {
            var_a2 += 8;
            temp_v0 = var_a1 * 4;
            var_a1 += 1;
            var_a4 |= (s64) M2C_FIELD(var_a2, u32 *, -8) << temp_v0;
        } while (var_a1 < arg6);
        M2C_FIELD(arg0, s64 *, 8) = var_a4;
    }
}
