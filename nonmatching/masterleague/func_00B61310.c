/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B61430(u16 *, s32, u16, u16, u8, s32, u16); /* extern */

s32 func_00B61310(s32 arg0, s32 arg1, void *arg2, u16 arg3, u16 arg4, u8 arg5, s32 arg6, u16 arg7) {
    u16 sp18;
    u16 sp1A;
    u16 sp1C;
    u16 sp1E;                                       /* compiler-managed */
    s32 var_a6;
    u16 var_a3;
    u16 var_a4;
    u16 var_a7;
    u8 temp_a1;
    u8 temp_a3;
    u8 temp_v1;
    u8 var_a5;
    void *var_a2;

    var_a2 = arg2;
    var_a3 = arg3;
    var_a4 = arg4;
    var_a5 = arg5;
    var_a6 = arg6;
    var_a7 = arg7;
    if (arg0 == 0) {
        return 0;
    }
    if (var_a2 == NULL) {
        return 0;
    }
    if ((var_a2 != NULL) && (&sp18 != NULL)) {
        if (&sp18 != NULL) {
            var_a7 = sp1E;
            var_a6 = 0x7F80;
            sp18 = 0;
            sp1E = (var_a7 & ~0x7F80) | 0x7F80;
            var_a5 = (u8) sp1E;
            sp1A = 0;
            sp1C = 0;
            temp_a3 = (var_a5 & ~1) | (0 & 1);
            sp1E = temp_a3;
            sp1E = (temp_a3 & ~0x7E) | 2;
        }
        var_a4 = (u16) sp1E;
        sp1E = (var_a4 & ~0x7F80) | ((arg1 & 0xFF) << 7);
        var_a3 = M2C_FIELD(var_a2, u16 *, 4);
        sp18 = var_a3;
        sp1A = M2C_FIELD(var_a2, u16 *, 6);
        sp1C = M2C_FIELD(var_a2, u16 *, 8);
        temp_v1 = M2C_FIELD(var_a2, u8 *, 0);
        var_a2 = (void *) (temp_v1 & 1);
        temp_a1 = ((u8) sp1E & ~1) | (s32) var_a2;
        sp1E = temp_a1;
        sp1E = (temp_a1 & ~0x7E) | ((((u64) ((s64) temp_v1 << 0x39) >> 0x3A) & 0x3F) * 2);
    }
    return func_00B61430(&sp18, (s32) var_a2, var_a3, var_a4, var_a5, var_a6, var_a7);
}
