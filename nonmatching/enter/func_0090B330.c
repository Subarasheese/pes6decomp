/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00900430(s64);                         /* extern */
s64 func_0090F520();                                /* extern */
extern M2C_UNK (*D_0092F0A0)();

void func_0090B330(void) {
    s64 temp_a0;

    if (D_0092F0A0 != NULL) {
        D_0092F0A0();
    }
    temp_a0 = (s64) (func_0090F520() << 0x38) >> 0x38;
    if (temp_a0 == 1) {
        func_00900430(temp_a0);
    }
}
