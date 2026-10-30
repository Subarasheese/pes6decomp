/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_00994C60(s32, s32);                      /* extern */

void func_00AFA850(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00994C60(arg0 & 0xFF, arg1 & 0xFF);
    if (temp_v0 != NULL) {
        func_001C48E8(temp_v0, 0, 0x10);
        M2C_FIELD(temp_v0, s16 *, 4) = 0;
    }
}
