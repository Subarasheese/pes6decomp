/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0016AB80(M2C_UNK);                       /* extern */

void func_0016A6D8(M2C_UNK arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = func_0016AB80(0xD);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x18) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x14) = arg1;
    }
}
