/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void * func_001F40E0(s8, s32);
s32 func_001EB1D0(void *, M2C_UNK *);               /* extern */
M2C_UNK func_001F3D80(void *, s8 *, M2C_UNK);       /* extern */
extern M2C_UNK func_001F1EA0;
extern M2C_UNK func_001F4200;

void *func_001F1F10(void) {
    s8 sp20;
    s32 var_v0;
    s8 *var_v1;
    void *temp_v0;

    var_v0 = 0x10;
    var_v1 = &sp20;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = func_001F40E0(0, 0x4C);
    func_001F3D80(temp_v0, &sp20, 0);
    func_001F3D10((s32) temp_v0, 0U);
    M2C_FIELD(temp_v0, M2C_UNK **, 0x3C) = &func_001F4200;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x44) = &func_001F1EA0;
    M2C_FIELD(temp_v0, s32 *, 0x48) = func_001EB1D0(temp_v0, &func_001F4200);
    M2C_FIELD(temp_v0, s8 *, 1) = 0xFF;
    return temp_v0;
}
