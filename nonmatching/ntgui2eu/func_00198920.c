/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FEDC4[];

s32 func_00198920(s32 arg0, u16 *arg1) {
    s32 temp_a0;
    void *temp_a2;
    void *temp_a3;

    temp_a2 = (*(s32 *)D_011FEDC4) + (arg0 * 0x38);
    temp_a3 = temp_a2 + 0x10;
    if (M2C_FIELD(temp_a3, s32 *, 0x24) > 0) {
        temp_a0 = M2C_FIELD(temp_a2, s32 *, 0x30);
        *arg1 = M2C_FIELD((temp_a2 + (temp_a0 * 2)), u16 *, 0x22);
        M2C_FIELD(temp_a2, s32 *, 0x30) = (s32) (temp_a0 + 1);
        if (M2C_FIELD(temp_a3, s32 *, 0x20) >= 4) {
            M2C_FIELD(temp_a3, s32 *, 0x20) = 0;
        }
        M2C_FIELD(temp_a3, s32 *, 0x24) = (s32) (M2C_FIELD(temp_a3, s32 *, 0x24) - 1);
        return 0;
    }
    return -1;
}
