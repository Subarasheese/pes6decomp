/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void * func_001F4140(void *, s8, s32);
M2C_UNK func_001F3C00(void *, M2C_UNK *);           /* extern */
M2C_UNK func_001F3D80(void *, s8 *, M2C_UNK);       /* extern */
extern M2C_UNK func_001F1FE0;
extern M2C_UNK func_001F2110;
extern M2C_UNK func_001F2180;

void *func_001F2050(void *arg0) {
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
    if (arg0 == NULL) {
        return NULL;
    }
    temp_v0 = func_001F4140(arg0, 1, 0x60);
    func_001F3C00(temp_v0, &func_001F2110);
    func_001F3D80(temp_v0, &sp20, 0);
    func_001F3D10((s32) temp_v0, 0U);
    M2C_FIELD(temp_v0, M2C_UNK **, 0x3C) = &func_001F2180;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x40) = &func_001F2110;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x44) = &func_001F1FE0;
    M2C_FIELD(temp_v0, s8 *, 1) = 0xFF;
    return temp_v0;
}
