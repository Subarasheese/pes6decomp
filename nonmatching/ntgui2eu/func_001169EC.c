/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

void func_001169EC(void) {
    M2C_UNK (*temp_v0)();

    temp_v0 = M2C_FIELD(D_006024A8, M2C_UNK (**)(), 0x10C);
    if (temp_v0 != NULL) {
        temp_v0();
    }
}
