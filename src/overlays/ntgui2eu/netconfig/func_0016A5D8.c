/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

extern void * func_0016AB80(void *, s16);

void func_0016A5D8(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_0016AB80(arg0, 0xE);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x20) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
        M2C_FIELD(temp_v0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0xFD4);
        M2C_FIELD(temp_v0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0xFD8);
        M2C_FIELD(temp_v0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0xFDC);
    }
}
