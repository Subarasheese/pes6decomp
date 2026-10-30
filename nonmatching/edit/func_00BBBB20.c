/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB6850[];

s32 func_00BBBB20(void *arg0, s32 arg1) {
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_v0;
    void *temp_a3;

    temp_a3 = ((void *)D_00CB6850) + (arg1 * 8);
    temp_a1 = M2C_FIELD(arg0, s16 *, 0);
    temp_a2 = M2C_FIELD(temp_a3, s16 *, 0);
    var_v0 = 0;
    if (temp_a1 < temp_a2) {
        M2C_FIELD(arg0, s16 *, 0) = temp_a2;
        goto block_4;
    }
    temp_v1 = (temp_a2 + M2C_FIELD(temp_a3, s16 *, 4)) - 1;
    if (temp_v1 < temp_a1) {
        M2C_FIELD(arg0, s16 *, 0) = temp_v1;
block_4:
        var_v0 = 1;
    }
    temp_a2_2 = M2C_FIELD(temp_a3, s16 *, 2);
    temp_a1_2 = M2C_FIELD(arg0, s16 *, 2);
    if (temp_a1_2 >= temp_a2_2) {
        temp_v1_2 = (temp_a2_2 + M2C_FIELD(temp_a3, s16 *, 6)) - 1;
        if (temp_v1_2 < temp_a1_2) {
            M2C_FIELD(arg0, s16 *, 2) = temp_v1_2;
            goto block_11;
        }
    } else {
        M2C_FIELD(arg0, s16 *, 2) = temp_a2_2;
block_11:
        var_v0 = 1;
    }
    return var_v0;
}
