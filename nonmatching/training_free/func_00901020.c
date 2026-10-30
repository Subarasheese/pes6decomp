/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00C74D20(void *, s32, void *);         /* extern */
extern void *D_003AE9D0;

s32 func_00901020(void) {
    M2C_FIELD(D_003AE9D0, s32 *, 0x18) = (s32) (1 - M2C_FIELD(D_003AE9D0, s32 *, 0x18));
    func_00C74D20(D_003AE9D0 + 0x3C, M2C_FIELD(D_003AE9D0, s32 *, 0x18) + 0xC001F, D_003AE9D0);
    func_0026E840(0x8400F803);
    return 0;
}
