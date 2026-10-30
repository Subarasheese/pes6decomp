/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052B170[];

s32 func_001EC390(void *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    s32 var_v0;
    s8 temp_a3;
    void *temp_a2;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg2 == 0) {
        return 0;
    }
    var_v0 = arg1 & 0xFF;
    M2C_FIELD(arg0, f32 *, 0) = fparg0;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    if (var_v0 >= 4) {
        var_v0 = 3;
    } else if (var_v0 < 0) {
        var_v0 = 0;
    }
    temp_a3 = var_v0 & 0xFF;
    temp_a2 = ((void *)D_0052B170) + (temp_a3 * 0x24);
    if (M2C_FIELD(temp_a2, void **, 4) != NULL) {
        M2C_FIELD(M2C_FIELD(temp_a2, void **, 8), void **, 0x10) = arg0;
        M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(temp_a2, void **, 8);
    } else {
        M2C_FIELD(temp_a2, void **, 4) = arg0;
        M2C_FIELD(arg0, void **, 0xC) = NULL;
    }
    M2C_FIELD(temp_a2, void **, 8) = arg0;
    M2C_FIELD(temp_a2, s32 *, 0) = (s32) (M2C_FIELD(temp_a2, s32 *, 0) + 1);
    M2C_FIELD(temp_a2, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_a2, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x14) = temp_a3;
    return 1;
}
