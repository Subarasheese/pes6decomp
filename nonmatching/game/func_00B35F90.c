/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B35F90(void **arg0) {
    u16 temp_a0;

    temp_a0 = M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30);
    if ((temp_a0 != 0x442) && (temp_a0 != 0x489) && (temp_a0 != 0) && (temp_a0 != 0x112) && (temp_a0 != 0x1BF) && (temp_a0 != 0x2ED)) {
        return 0;
    }
    return 1;
}
