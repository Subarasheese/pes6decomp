/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B9C040();                            /* extern */
void *func_00B9C490();                              /* extern */

void func_00B9F7A0(void) {
    s32 temp_a2;
    void *temp_s0;

    temp_s0 = func_00B9C490();
    func_00B9C040();
    M2C_FIELD(temp_s0, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x4C) = 0;
    if (M2C_FIELD(temp_s0, s32 *, 0x14) != 0) {
        M2C_FIELD(temp_s0, s32 *, 0x40) = 0;
        return;
    }
    temp_a2 = M2C_FIELD(temp_s0, s32 *, 0x1C);
    switch (temp_a2) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s32 *, 0x40) = 0;
        return;
    case 2:
        M2C_FIELD(temp_s0, s32 *, 0x40) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x4C) = 1;
        return;
    case 1:
        M2C_FIELD(temp_s0, s32 *, 0x40) = 0;
block_17:
        M2C_FIELD(temp_s0, s32 *, 0x4C) = 1;
        return;
    case 3:
        M2C_FIELD(temp_s0, s32 *, 0x40) = 2;
        goto block_17;
    }
}
