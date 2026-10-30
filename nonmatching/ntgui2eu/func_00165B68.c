/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00165B68(void *arg0) {
    s32 (*temp_v0)();

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 (**)(), 0xD8);
    if (temp_v0 == NULL) {
        return 0;
    }
    return temp_v0();
}
