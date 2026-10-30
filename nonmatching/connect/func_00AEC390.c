/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00AEC500(void *);
extern u32 func_00AEECB0(void *);
void *func_00AEECC0(s32 (*)(void *), M2C_UNK);      /* extern */

void *func_00AEC390(f32 fparg0, f32 fparg1) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    temp_v0 = func_00AEECC0(func_00AEC500, 0x28);
    var_s0 = NULL;
    if (temp_v0 != NULL) {
        temp_v0_2 = func_00AEECB0(temp_v0);
        M2C_FIELD(temp_v0_2, void **, 0) = temp_v0;
        M2C_FIELD(temp_v0_2, s32 *, 8) = 0;
        var_s0 = temp_v0_2;
        M2C_FIELD(temp_v0_2, u8 *, 0x24) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x24) & ~2) | 2);
        M2C_FIELD(temp_v0_2, f32 *, 0x18) = fparg0;
        M2C_FIELD(temp_v0_2, f32 *, 0x1C) = fparg1;
        M2C_FIELD(temp_v0_2, s32 *, 0x20) = 0x44A28000;
        M2C_FIELD(temp_v0_2, u8 *, 0x24) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x24) & ~4) | ((0 & 1) * 4));
        func_00AEC500(var_s0);
    }
    return var_s0;
}
