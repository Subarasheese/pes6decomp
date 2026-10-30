/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
M2C_UNK func_008B9AB0(s32, M2C_UNK);                /* extern */

void func_008D4A70(void *arg0, s8 arg1) {
    s32 temp_a0_2;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_a0 != NULL) {
        func_001D7D60(temp_a0, arg1);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if ((temp_a0_2 != 0) && !(arg1 & 0xFF)) {
        func_008B9AB0(temp_a0_2, 0);
    }
}
