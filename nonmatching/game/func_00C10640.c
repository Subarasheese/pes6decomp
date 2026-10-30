/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD8E0[];

void func_00C10640(s32 arg0, s32 arg1) {
    s32 temp_a2;
    void *temp_a0;
    void *temp_a3;

    temp_a2 = arg1 & 0xFF;
    temp_a3 = ((void *)D_00CBD8E0) + ((arg0 & 0xFF) * 0x2F4);
    if (temp_a2 < 0x12) {
        temp_a0 = (temp_a2 * 0x28) + temp_a3;
        M2C_FIELD(temp_a3, s16 *, 0x16) = (s16) (M2C_FIELD(temp_a3, s16 *, 0x16) + 1);
        M2C_FIELD(temp_a0, s16 *, 0x3A) = (s16) (M2C_FIELD(temp_a0, s16 *, 0x3A) + 1);
        if (temp_a2 < 0x12) {
            M2C_FIELD(temp_a3, s16 *, 0x14) = (s16) (M2C_FIELD(temp_a3, s16 *, 0x14) + 1);
            M2C_FIELD(temp_a0, s16 *, 0x38) = (s16) (M2C_FIELD(temp_a0, s16 *, 0x38) + 1);
        }
    }
}
