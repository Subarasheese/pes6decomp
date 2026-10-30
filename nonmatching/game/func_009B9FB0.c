/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B9FB0(void *arg0) {
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x26E:
        if (!(M2C_FIELD(temp_a0, f32 *, 0x38) < 19.0f)) {
            return 1;
        }
block_10:
    default:
        return 0;
    case 0x302:
    case 0x279:
        if (M2C_FIELD(temp_a0, f32 *, 0x38) <= 12.0f) {
            return 1;
        }
        goto block_10;
    }
}
