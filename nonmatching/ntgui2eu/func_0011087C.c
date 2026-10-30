/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_0060245C;

void func_0011087C(void) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(D_0060245C, M2C_UNK (**)(), 0x10C);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}
