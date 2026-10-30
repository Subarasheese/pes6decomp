/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E00[];

s32 func_00990A30(s32 arg0) {
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a1;
    void *temp_v0;

    temp_v1 = arg0 & 0xFF;
    temp_a1 = ((void *)D_00591E00) + (temp_v1 * 5);
    temp_v0 = ((void *)D_00591E00) + ((temp_v1 ^ 1) * 5);
    temp_a3 = M2C_FIELD(temp_a1, s8 *, 6) + (M2C_FIELD(temp_a1, s8 *, 5) + (M2C_FIELD(temp_a1, s8 *, 4) + (M2C_FIELD(temp_a1, s8 *, 2) + M2C_FIELD(temp_a1, s8 *, 3))));
    temp_v1_2 = M2C_FIELD(temp_v0, s8 *, 6) + (M2C_FIELD(temp_v0, s8 *, 5) + (M2C_FIELD(temp_v0, s8 *, 4) + (M2C_FIELD(temp_v0, s8 *, 2) + M2C_FIELD(temp_v0, s8 *, 3))));
    if ((temp_a3 - temp_v1_2) >= 0x33) {
        return 0;
    }
    if ((temp_v1_2 - temp_a3) < 0x33) {
        return 2;
    }
    return 1;
}
