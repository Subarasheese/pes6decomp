/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C86220();                            /* extern */
M2C_UNK func_00C8A3D0();                            /* extern */
M2C_UNK func_00C8AA10(M2C_UNK);                     /* extern */
extern void *D_003EA884;

s32 func_00C86160(void) {
    s32 temp_v0;
    void *temp_s0;
    void *temp_v1;

    temp_s0 = D_003EA884;
    if (temp_s0 != NULL) {
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x24);
        if (temp_v0 >= 2) {
            if (M2C_FIELD(((temp_v0 * 4) + temp_s0), s32 *, 0xC) != 0) {

            } else {
                func_00C8A3D0();
                func_00C8AA10(0);
                temp_v1 = (M2C_FIELD(temp_s0, s32 *, 0x24) * 4) + temp_s0;
                M2C_FIELD(temp_v1, s32 *, 0xC) = (s32) (M2C_FIELD(temp_v1, s32 *, 0xC) + 1);
            }
            M2C_FIELD(temp_s0, s32 *, 0x30) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x30) | (1 << M2C_FIELD(temp_s0, s32 *, 0x24)));
            M2C_FIELD(((M2C_FIELD(temp_s0, s32 *, 0x24) * 4) + temp_s0), s32 *, 0xC) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x24) + 1);
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 1;
        }
        func_00C86220();
        return 0;
    }
    return 1;
}
