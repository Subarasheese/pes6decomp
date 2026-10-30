/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00909150();                            /* extern */
extern void *D_00923FC8;

s32 func_00908C00(void) {
    if ((M2C_FIELD(((M2C_FIELD(D_00923FC8, s16 *, 0x2C) * 2) + D_00923FC8), s16 *, 0x30) + M2C_FIELD(D_00923FC8, s16 *, 0x2E)) > 0) {
        func_0026E840(0x8400F802);
        M2C_FIELD(D_00923FC8, s16 *, 0x2E) = (s16) (M2C_FIELD(D_00923FC8, s16 *, 0x2E) - 1);
        func_00909150();
    }
    return 0;
}
