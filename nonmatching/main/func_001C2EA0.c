/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int fflush(void *);
M2C_UNK __sinit(void *);                      /* extern */
extern void *_impure_ptr;

s32 func_001C2EA0(void *arg0) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v0_2;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 0x54);
    if (var_v1 != NULL) {
        var_v0_2 = M2C_FIELD(var_v1, s32 *, 0x38);
    } else {
        var_v1 = _impure_ptr;
        M2C_FIELD(arg0, void **, 0x54) = var_v1;
        var_v0_2 = M2C_FIELD(var_v1, s32 *, 0x38);
    }
    if (var_v0_2 == 0) {
        __sinit(var_v1);
    }
    if (M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK, M2C_UNK), 0x28) == NULL) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x54), s32 *, 0) = 0x1D;
        return -1;
    }
    fflush(arg0);
    if (!(M2C_FIELD(arg0, u16 *, 0xC) & 0x1000)) {
        var_v0 = M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK, M2C_UNK), 0x28)(M2C_FIELD(arg0, s32 *, 0x1C), 0, 1);
        var_a1 = var_v0;
        if (var_a1 != -1) {
            goto block_15;
        }
    } else {
        var_a1 = M2C_FIELD(arg0, s32 *, 0x50);
block_15:
        if (M2C_FIELD(arg0, u16 *, 0xC) & 4) {
            var_a1_2 = var_a1 - M2C_FIELD(arg0, s32 *, 4);
            if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
                var_a1_2 -= M2C_FIELD(arg0, s32 *, 0x3C);
            }
            goto block_22;
        }
        var_v0 = var_a1;
        if (M2C_FIELD(arg0, u16 *, 0xC) & 8) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0);
            if (temp_v1 != 0) {
                var_a1_2 = var_a1 + (temp_v1 - M2C_FIELD(arg0, s32 *, 0x10));
block_22:
                var_v0 = var_a1_2;
            }
        }
    }
    return var_v0;
}
