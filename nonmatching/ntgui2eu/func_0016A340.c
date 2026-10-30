/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0016AB80(M2C_UNK);                       /* extern */

void func_0016A340(void *arg0) {
    void *temp_v0;

    temp_v0 = func_0016AB80(1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
        M2C_FIELD(temp_v0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0xFD4);
        M2C_FIELD(temp_v0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0xFD8);
        M2C_FIELD(temp_v0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0xFDC);
    }
}
