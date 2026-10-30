/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008F6C60(void *);                      /* extern */
extern void *D_003AE9D0;

s32 func_008F6860(void) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(D_003AE9D0, s32 *, 0x28);
    if (temp_v1 >= 2) {
        M2C_FIELD(D_003AE9D0, s32 *, 0x20) = (s32) ((s32) (M2C_FIELD(D_003AE9D0, s32 *, 0x20) - 1 + temp_v1) % temp_v1);
        func_008F6C60(D_003AE9D0);
        func_0026E840(0x8400F802);
    }
    return 0;
}
