/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00901FA0(void *);                      /* extern */
extern void *D_003AE9D0;

s32 func_00901A20(void) {
    M2C_FIELD(D_003AE9D0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(D_003AE9D0, s32 *, 0x20) + 1) % (s32) M2C_FIELD(D_003AE9D0, s32 *, 0x28));
    func_00901FA0(D_003AE9D0);
    func_0026E840(0x8400F802);
    return 0;
}
