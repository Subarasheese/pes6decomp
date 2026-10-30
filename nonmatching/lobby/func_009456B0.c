/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0082C2A0();                              /* extern */

s32 func_009456B0(void) {
    s32 var_s0;
    s32 var_v1_2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v1 = M2C_FIELD(temp_v0, void **, 0x117E8);
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        M2C_FIELD(var_v1, s32 *, 0xB540) = 0;
    }
    var_s0 = 0;
    do {
        temp_v0_2 = func_0082C2A0();
        if (temp_v0_2 != NULL) {
            var_v1_2 = M2C_FIELD(temp_v0_2, s32 *, 0x117E8);
        } else {
            var_v1_2 = 0;
        }
        if ((var_v1_2 != 0) && (var_s0 >= 0) && (var_s0 < 0x64)) {
            temp_s1 = var_v1_2 + (var_s0 * 0x1D0);
            func_001C48E8(temp_s1, 0, 0x1D0);
            M2C_FIELD(temp_s1, s32 *, 0x14) = -1;
        }
        var_s0 += 1;
    } while (var_s0 < 0x64);
    return 1;
}
