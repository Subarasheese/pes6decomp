/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00CB3300;

s32 func_00322600(void *arg0, void *arg1) {
    s16 temp_a2;
    s16 temp_a3;
    s16 var_v0;

    M2C_FIELD(arg0, s8 *, 0xA) = 1;
    M2C_FIELD(arg1, s8 *, 0xA) = 1;
    temp_a3 = M2C_FIELD(D_00CB3300, s16 *, 8);
    temp_a2 = M2C_FIELD(D_00CB3300, s16 *, 0x2FC);
    if (temp_a3 != temp_a2) {
        if (temp_a2 >= temp_a3) {
            var_v0 = M2C_FIELD(arg1, s16 *, 2) + 3;
            goto block_9;
        }
        M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + 3);
    } else {
        M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + 1);
        var_v0 = M2C_FIELD(arg1, s16 *, 2) + 1;
block_9:
        M2C_FIELD(arg1, s16 *, 2) = var_v0;
    }
    M2C_FIELD(arg0, s16 *, 6) = (s16) (M2C_FIELD(arg0, s16 *, 6) + temp_a3);
    M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg0, s16 *, 8) + temp_a2);
    M2C_FIELD(arg1, s16 *, 6) = (s16) (M2C_FIELD(arg1, s16 *, 6) + temp_a2);
    M2C_FIELD(arg1, s16 *, 8) = (s16) (M2C_FIELD(arg1, s16 *, 8) + temp_a3);
    return 1;
}
