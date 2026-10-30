/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0063BFE0(void *arg0, s32 arg1) {
    s16 temp_a2;
    s16 var_v1;
    u8 temp_a2_2;

    temp_a2 = M2C_FIELD(arg0, s16 *, 0);
    switch (temp_a2) {                              /* irregular */
    case 0:
        var_v1 = M2C_FIELD(arg0, s16 *, 2);
block_6:
        M2C_FIELD(arg0, u8 *, 0xC) = (u8) var_v1;
        break;
    case 1:
        var_v1 = M2C_FIELD(arg0, s16 *, 2) + 4;
        goto block_6;
    }
    temp_a2_2 = M2C_FIELD(arg0, u8 *, 0xC);
    if (((s32) temp_a2_2 > 0) && ((s32) temp_a2_2 < 4)) {
        if (M2C_FIELD(arg0, u8 *, 0xE) != 0) {
            if (arg1 == 1) {
                M2C_FIELD(arg0, u8 *, 0xC) = 0U;
            }
        } else {
            goto block_18;
        }
    } else if (((s32) temp_a2_2 >= 5) && ((s32) temp_a2_2 < 8)) {
        if ((M2C_FIELD(arg0, u8 *, 0xF) == 0) || (arg1 == 1)) {
            M2C_FIELD(arg0, u8 *, 0xC) = 4U;
        }
    } else if (temp_a2_2 == 8) {
block_18:
        M2C_FIELD(arg0, u8 *, 0xC) = 0U;
    }
}
