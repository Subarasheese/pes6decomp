/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081B9E0(void *arg0, s64 arg1) {
    s32 var_a2;
    s32 var_a3;
    void *var_v0;

    if (arg0 != NULL) {
        var_a2 = M2C_FIELD(arg0, s32 *, 0x2DC);
    } else {
        var_a2 = 0;
    }
    if (arg0 != NULL) {
        if (((s64) (arg1 << 0x38) >> 0x38) != 1) {
            M2C_FIELD(arg0, s8 *, 0x208) = 0;
        } else {
            M2C_FIELD(arg0, s8 *, 0x208) = 1;
        }
        var_a3 = 0;
        do {
            if (var_a3 < var_a2) {
                if (arg0 == NULL) {
                    var_v0 = NULL;
                } else if (var_a3 < 0) {
                    var_v0 = NULL;
                } else if (var_a3 < 4) {
                    var_v0 = arg0 + (var_a3 * 0x74) + 4;
                } else {
                    var_v0 = NULL;
                }
                if (var_v0 != NULL) {
                    M2C_FIELD(var_v0, s8 *, 0x26) = (s8) M2C_FIELD(arg0, s8 *, 0x208);
                    goto block_38;
                }
            } else {
                if (arg0 == NULL) {
                    var_v0 = NULL;
                } else if (var_a3 < 0) {
                    var_v0 = NULL;
                } else if (var_a3 < 4) {
                    var_v0 = arg0 + (var_a3 * 0x74) + 4;
                } else {
                    var_v0 = NULL;
                }
                if (var_v0 != NULL) {
                    M2C_FIELD(var_v0, s8 *, 0x26) = 0;
block_38:
                    M2C_FIELD(var_v0, s8 *, 0x25) = 1;
                }
            }
            var_a3 += 1;
        } while (var_a3 < 4);
        return 1;
    }
    return 0;
}
