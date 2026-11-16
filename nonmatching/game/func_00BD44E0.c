/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_00CB2418[];

s32 func_00BD44E0(void **arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_a3;

    temp_a3 = *((u16 *)(D_00CB2418 + ((arg1 & 0xFF) * 2)));
    temp_a2 = M2C_FIELD(*arg0, s32 *, 0x1C);
    if (temp_a2 < (temp_a3 * 9) / 10) {
        return 0;
    }
    if ((temp_a3 * 11) / 10 < temp_a2) {
        return 2;
    }
    return 1;
}
