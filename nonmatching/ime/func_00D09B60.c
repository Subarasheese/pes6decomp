/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00D09F30(void *);                      /* extern */
M2C_UNK func_00D0A1E0(void *);                      /* extern */

s32 func_00D09B60(void *arg0) {
    void *temp_s0;
    void *var_a0;

    var_a0 = arg0;
    temp_s0 = var_a0;
    if (temp_s0 == NULL) {
        return 0;
    }
    if (temp_s0 != NULL) {
loop_5:
        var_a0 = M2C_FIELD(temp_s0, void **, 0x5C);
        if ((var_a0 != NULL) && (var_a0 != (temp_s0 + 0x60)) && (var_a0 != (temp_s0 + 8)) && (M2C_FIELD(temp_s0, s32 *, 0) > 0)) {
            func_00D09F30(var_a0);
            M2C_FIELD(temp_s0, s32 *, 0) = (s32) (M2C_FIELD(temp_s0, s32 *, 0) - 1);
            goto loop_5;
        }
    }
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0xB8) = 0;
    }
    func_00D0A1E0(var_a0);
    func_001C48E8(temp_s0, 0, 0xC4);
    return 1;
}
