/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001ADE68(s32);                           /* extern */
M2C_UNK func_001AE7D8(s32, M2C_UNK, s32);           /* extern */

void *func_001B2B58(M2C_UNK arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v1;
    void *temp_v0;

    temp_s0 = arg1 * 0x58;
    temp_v0 = func_001ADE68(temp_s0 + 0xC);
    temp_v1 = temp_v0 + 0xC;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 4) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = temp_v1;
        func_001AE7D8(temp_v1, 0, temp_s0);
    }
    return temp_v0;
}
