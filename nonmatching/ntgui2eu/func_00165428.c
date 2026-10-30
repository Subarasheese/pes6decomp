/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00165428(void *arg0) {
    M2C_UNK (*temp_v0)();

    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(), 0x80);
        if (temp_v0 != NULL) {
            temp_v0();
        }
    }
}
