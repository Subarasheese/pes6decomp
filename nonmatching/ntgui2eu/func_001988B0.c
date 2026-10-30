/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FEDC4[];

s32 func_001988B0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    void *temp_a0;
    void *temp_a2;

    temp_a2 = (*(s32 *)D_011FEDC4) + (arg0 * 0x38);
    temp_a0 = temp_a2 + 0x10;
    if (M2C_FIELD(temp_a0, s32 *, 0x24) >= 4) {
        return -1;
    }
    temp_v1 = M2C_FIELD(temp_a2, s32 *, 0x2C);
    M2C_FIELD((temp_a2 + (temp_v1 * 2)), s16 *, 0x22) = (s16) (arg1 & 0xFFFF);
    M2C_FIELD(temp_a2, s32 *, 0x2C) = (s32) (temp_v1 + 1);
    if (M2C_FIELD(temp_a0, s32 *, 0x1C) >= 4) {
        M2C_FIELD(temp_a0, s32 *, 0x1C) = 0;
    }
    M2C_FIELD(temp_a0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x24) + 1);
    return 0;
}
