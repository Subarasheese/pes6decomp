/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A8C28[];

u16 func_008336C0(void) {
    M2C_UNK *var_a0;
    s64 temp_v1;
    s8 var_v0;

    if (func_00D0BAF0() == 0) {
        var_a0 = NULL;
    } else {
        var_a0 = ((void *)D_008A8C28);
    }
    if (var_a0 == NULL) {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        var_v0 = M2C_FIELD(var_a0, s8 *, 0x53);
    } else {
        var_v0 = 3;
    }
    temp_v1 = (s64) ((s64) var_v0 << 0x38) >> 0x38;
    if (var_a0 == NULL) {
        return 0xFFFF & 0xFFFF;
    }
    if (temp_v1 >= 0) {
        if (temp_v1 < 3) {
            return M2C_FIELD(((temp_v1 * 2) + var_a0), u16 *, 0x54);
        }
        goto block_15;
    }
block_15:
    return 0xFFFF & 0xFFFF;
}
