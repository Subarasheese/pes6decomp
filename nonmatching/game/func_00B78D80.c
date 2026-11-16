/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u8 D_005922E8;
extern u8 D_005922E9;
extern void *D_00CB3300;

s32 func_00B78D80(void) {
    s32 a;
    s32 b;
    if (D_005922E8 != 0) {
        return (D_005922E9 != 0) ? 0 : 1;
    }
    a = M2C_FIELD(D_00CB3300, s16 *, 0x2FC);
    if (a < M2C_FIELD(D_00CB3300, s16 *, 8)) {
        return 0;
    }
    if (M2C_FIELD(D_00CB3300, s16 *, 8) < a) {
        return 1;
    }
    b = M2C_FIELD(D_00CB3300, s16 *, 0x300);
    if (b < M2C_FIELD(D_00CB3300, s16 *, 0xC)) {
        return 0;
    }
    if (M2C_FIELD(D_00CB3300, s16 *, 0xC) < b) {
        return 1;
    }
    return 2;
}
