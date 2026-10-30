/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005922E8[];
extern char D_005922E9[];
extern void *D_00CB3300;

s32 func_00B78D80(void) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;

    if ((*(u8 *)D_005922E8) != 0) {
        return ((*(u8 *)D_005922E9) != 0) ? 0 : 1;
    }
    temp_v1 = M2C_FIELD(D_00CB3300, s16 *, 0x2FC);
    temp_v0 = M2C_FIELD(D_00CB3300, s16 *, 8);
    if (temp_v1 < temp_v0) {
        return 0;
    }
    if (temp_v0 >= temp_v1) {
        temp_v1_2 = M2C_FIELD(D_00CB3300, s16 *, 0x300);
        temp_v0_2 = M2C_FIELD(D_00CB3300, s16 *, 0xC);
        if (temp_v1_2 < temp_v0_2) {
            return 0;
        }
        if (temp_v0_2 >= temp_v1_2) {
            return 2;
        }
        goto block_12;
    }
block_12:
    return 1;
}
