/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001B8400(M2C_UNK);                       /* extern */

void func_001B8850(M2C_UNK arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_001B8400(1);
    M2C_FIELD(temp_v0, s32 *, 0x14) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
}
