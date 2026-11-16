/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u8 *D_005202E0;

void func_0019DD80(s32 arg0, s32 arg1) {
    u8 *base = D_005202E0;
    s32 idx;

    if (base != NULL) {
        idx = arg0 & 0xFF;
        if (idx < (s32)*base) {
            M2C_FIELD(base + idx * 100, s32 *, 0x1C) = arg1;
        }
    }
}
