/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00168B28(M2C_UNK arg0, void *arg1) {
    M2C_UNK (*temp_v0)(void *);

    temp_v0 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), M2C_UNK (**)(void *), 0xDC);
    if (temp_v0 != NULL) {
        temp_v0(arg1);
    }
}
