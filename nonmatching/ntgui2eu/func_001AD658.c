/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001ADB70(M2C_UNK, void *);               /* extern */
extern void *D_005CC508;

s32 func_001AD658(s32 arg0) {
    s32 *var_v1;
    s32 temp_a0;
    s32 var_v0;
    void *var_a2;

    var_a2 = M2C_FIELD(D_005CC508, void **, 0x148);
    if (var_a2 == NULL) {
        var_a2 = D_005CC508 + 0x14C;
        M2C_FIELD(D_005CC508, void **, 0x148) = var_a2;
    }
    var_v1 = var_a2 + 4;
    if (M2C_FIELD(var_a2, s32 *, 4) >= 0x20) {
        var_a2 = func_001ADB70(0x88, var_a2);
        var_v0 = -1;
        if (var_a2 != NULL) {
            M2C_FIELD(var_a2, s32 *, 4) = 0;
            M2C_FIELD(var_a2, void **, 0) = (void *) M2C_FIELD(D_005CC508, void **, 0x148);
            M2C_FIELD(D_005CC508, void **, 0x148) = var_a2;
            var_v1 = var_a2 + 4;
            goto block_5;
        }
    } else {
block_5:
        var_v0 = 0;
        temp_a0 = *var_v1;
        *var_v1 = temp_a0 + 1;
        M2C_FIELD((var_a2 + (temp_a0 * 4)), s32 *, 8) = arg0;
    }
    return var_v0;
}
