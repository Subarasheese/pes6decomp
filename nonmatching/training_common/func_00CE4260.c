/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B4B90(void *, s32);
void *func_001B4D80(M2C_UNK, M2C_UNK);              /* extern */
extern void *D_003EB2C8;

void func_00CE4260(void) {
    void *temp_v0;

    if (D_003EB2C8 == NULL) {
        temp_v0 = func_001B4D80(0x467A0000, 0);
        D_003EB2C8 = temp_v0;
        func_001B4B90(temp_v0, 0);
    }
}
