/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK, void *);             /* extern */
M2C_UNK func_00901FA0();                            /* extern */
extern void *D_003AE9D0;

s32 func_00901990(void) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;

    if (M2C_FIELD(D_003AE9D0, s32 *, 0x38) == 1) {
        temp_v0 = M2C_FIELD(D_003AE9D0, s32 *, 0x20);
        if (temp_v0 < 0xB) {
            temp_a0 = M2C_FIELD(D_003AE9D0, s32 *, 0x28);
            temp_v1 = temp_v0 + 0xB;
            if (temp_v1 < temp_a0) {
                M2C_FIELD(D_003AE9D0, s32 *, 0x20) = temp_v1;
            } else {
                var_v0 = temp_a0 - 1;
                goto block_10;
            }
        } else {
            temp_v1_2 = temp_v0 - 0xB;
            if (temp_v1_2 < 0xB) {
                M2C_FIELD(D_003AE9D0, s32 *, 0x20) = temp_v1_2;
            } else {
                var_v0 = 0xA;
block_10:
                M2C_FIELD(D_003AE9D0, s32 *, 0x20) = var_v0;
            }
        }
        func_0026E840(0x8400F802, D_003AE9D0 + 0x20);
        func_00901FA0();
    }
    return 0;
}
