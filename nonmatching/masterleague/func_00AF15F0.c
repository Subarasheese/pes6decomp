/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF7970(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00AF0EC0(s32);                         /* extern */

s32 func_00AF15F0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    u32 temp_v0;

    temp_v0 = func_00AF7970();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x1AC);
        switch (temp_a0) {                          /* irregular */
        case 3:
            M2C_FIELD(temp_v0, s32 *, 0x1AC) = 0;
            func_00AF0EC0(0);
block_14:
            func_0026E840(0x8400F803);
            goto block_15;
        case 2:
        case 1:
        case 0:
            temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x1AC) + 1;
            M2C_FIELD(temp_v0, s32 *, 0x1AC) = temp_a0_2;
            func_00AF0EC0(temp_a0_2);
            goto block_14;
        default:
            return 0;
        }
    } else {
block_15:
        return 0;
    }
}
