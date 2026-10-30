/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00134FE8(M2C_UNK);                       /* extern */

void *func_0016A088(s32 arg0, s32 arg1, s64 arg2) {
    void *temp_v0;

    temp_v0 = func_00134FE8(0x20);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = arg0;
        M2C_FIELD(temp_v0, s32 *, 0x10) = arg1;
        M2C_FIELD(temp_v0, s64 *, 8) = arg2;
        return temp_v0;
    }
    return NULL;
}
