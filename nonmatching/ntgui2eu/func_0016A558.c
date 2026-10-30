/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0016AB80(M2C_UNK);                       /* extern */

void func_0016A558(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_v0;

    temp_v0 = func_0016AB80(0xB);
    if (temp_v0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xFD4) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x14) = arg1;
        M2C_FIELD(arg0, s32 *, 0xFD8) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x18) = arg2;
        M2C_FIELD(arg0, s32 *, 0xFDC) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = arg3;
        M2C_FIELD(arg0, s32 *, 0xFE4) = arg4;
        M2C_FIELD(temp_v0, s32 *, 0x20) = arg4;
    }
}
