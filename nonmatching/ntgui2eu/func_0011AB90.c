/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011BFC8(s32, void *);                 /* extern */
M2C_UNK func_00199120(void *);                      /* extern */
extern void *D_006024F0;

void func_0011AB90(void) {
    func_00199120(D_006024F0 + 0xD0);
    M2C_FIELD(D_006024F0, f32 *, 0x100) = 1728.0f;
    M2C_FIELD(D_006024F0, f32 *, 0x104) = 1792.0f;
    func_0011BFC8(M2C_FIELD(D_006024F0, s32 *, 4), D_006024F0 + 0xD0);
}
