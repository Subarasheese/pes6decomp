/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A07C00(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    if ((temp_v1 != 0x1A7) && (temp_v1 != 0x3E8) && (temp_v1 != 0x12E) && (temp_v1 != 0x19) && (temp_v1 != 0) && (temp_v1 != 0x1BF)) {
        return 0;
    }
    return 1;
}
