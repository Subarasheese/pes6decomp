/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_00AFE840(void) {
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        func_001C48E8(temp_v0 + 0x1053A, 0, 0x1E0);
    }
}
