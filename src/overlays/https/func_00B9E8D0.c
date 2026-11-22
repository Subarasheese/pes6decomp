/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BB3380(s32, s32, s32, s32, s32);

void *func_00BC0A38(M2C_UNK);

void *func_00B9E8D0(void) {
    void *temp_v0;

    temp_v0 = func_00BC0A38(0x18);
    if (temp_v0 == NULL) {
        func_00BB3380(0xD, 0x71, 0x21, 0, 0);
        return NULL;
    }
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 1;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    return temp_v0;
}
