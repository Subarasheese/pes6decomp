/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
void func_008E1C30(s32 arg0, s32 arg1, s8 arg2) {
    void *temp_a0;

    temp_a0 = M2C_FIELD((((arg1 & 0xFF) * 4) + arg0), void **, 0x84);
    if (temp_a0 != NULL) {
        func_001EF900(temp_a0, arg2);
    }
}
