/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A8394[];

s32 func_00834150(s32 arg0) {
    M2C_UNK *var_v1;
    u8 var_v0;
    void *var_v0_2;

    if (func_00D0BAF0() == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((void *)D_008A8394);
    }
    if (var_v1 == NULL) {
        var_v1 = NULL;
    }
    if (var_v1 == NULL) {
        var_v0_2 = NULL;
    } else if (arg0 < 0) {
        var_v0_2 = NULL;
    } else if (arg0 < 0x28) {
        if (arg0 < (s32) M2C_FIELD(var_v1, u16 *, 0x10)) {
            var_v0_2 = var_v1 + (arg0 * 0x30) + 0x8E;
        } else {
            goto block_14;
        }
    } else {
block_14:
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0 = M2C_FIELD(var_v0_2, u8 *, 0x1F);
    } else {
        var_v0 = 0;
    }
    return (s32) (var_v0 & 0xFF) % 10;
}
