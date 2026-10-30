/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002E57D0(s32, M2C_UNK);                /* extern */

void func_002E4A30(void *arg0, s16 arg1) {
    s16 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s16 *, 8);
        if (temp_a0 != -1) {
            func_002E57D0(M2C_FIELD(arg0, s32 *, 0x20) + (temp_a0 * 0x50), 0);
        }
        if (arg1 >= 0) {
            if ((M2C_FIELD(arg0, s16 *, 0x1C) - 1) >= arg1) {
                func_002E57D0(M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 0x50), 1);
                M2C_FIELD(arg0, s16 *, 8) = arg1;
            } else {
                goto block_7;
            }
        } else {
block_7:
            M2C_FIELD(arg0, s16 *, 8) = -1;
        }
    }
}
