/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK, void *);             /* extern */
M2C_UNK func_00909150();                            /* extern */
extern void *D_00923FC8;

s32 func_00908B80(void) {
    s16 temp_v0;

    temp_v0 = M2C_FIELD(D_00923FC8, s16 *, 0x2C);
    if ((M2C_FIELD(((temp_v0 * 2) + D_00923FC8), s16 *, 0x30) + M2C_FIELD(D_00923FC8, s16 *, 0x2E)) < (M2C_FIELD((temp_v0 + D_00923FC8), s8 *, 0x28) - 1)) {
        func_0026E840(0x8400F802, D_00923FC8);
        M2C_FIELD(D_00923FC8, s16 *, 0x2E) = (s16) (M2C_FIELD(D_00923FC8, s16 *, 0x2E) + 1);
        func_00909150();
    }
    return 0;
}
