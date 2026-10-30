/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00134FE8(M2C_UNK);                       /* extern */

void *func_0016B360(s32 arg0, void *arg1) {
    void *temp_s1;
    void *temp_v0;

    temp_s1 = M2C_FIELD(arg1, void **, 0xC);
    temp_v0 = func_00134FE8(0x20);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, void **, 8) = arg1;
        M2C_FIELD(temp_v0, void **, 0xC) = temp_s1;
        M2C_FIELD(arg1, void **, 0xC) = temp_v0;
        M2C_FIELD(temp_v0, s32 *, 0x10) = arg0;
        M2C_FIELD(temp_v0, s32 *, 0) = 1;
        M2C_FIELD(temp_s1, void **, 8) = temp_v0;
        return temp_v0;
    }
    return NULL;
}
