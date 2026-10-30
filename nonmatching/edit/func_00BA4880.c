/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BA4880(s32 arg0, void *arg1) {
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    if (arg0 < 0x6B) {
        var_v0_2 = arg0 & 0xF;
        if ((arg0 < 0) && (var_v0_2 != 0)) {
            var_v0_2 -= 0x10;
        }
        var_a2 = var_v0_2 & 3;
        if ((var_v0_2 < 0) && (var_a2 != 0)) {
            var_a2 -= 4;
        }
        var_v1 = var_v0_2 >> 2;
        if (var_v0_2 < 0) {
            var_v1 = (s32) (var_v0_2 + 3) >> 2;
        }
        if (arg1 != NULL) {
            M2C_FIELD(arg1, s16 *, 0) = (s16) (var_a2 << 6);
            M2C_FIELD(arg1, s16 *, 2) = (s16) (var_v1 << 6);
            M2C_FIELD(arg1, s16 *, 4) = 0x40;
            M2C_FIELD(arg1, s16 *, 6) = 0x40;
        }
        var_v0 = arg0 >> 4;
        if (arg0 < 0) {
            var_v0 = (s32) (arg0 + 0xF) >> 4;
        }
        return var_v0 + 0x4E78;
    }
    return 0;
}
