/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BA2B20(s32);

s32 func_00BA3138(s32);

void func_00BCF1A8(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_a0 != 0) {
        if (temp_a0 == M2C_FIELD(arg0, s32 *, 0x10)) {
            temp_v0 = func_00BA3138(temp_a0);
            if (temp_v0 != 0) {
                M2C_FIELD(arg0, s32 *, 0x10) = temp_v0;
            }
        }
        func_00BA2B20(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
}
