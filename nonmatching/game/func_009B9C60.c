/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B9C60(void *arg0) {
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x2A6:
        if (M2C_FIELD(temp_a0, f32 *, 0x38) < 16.0f) {
            return 1;
        }
block_11:
    default:
        return 0;
    case 0x285:
        if (M2C_FIELD(temp_a0, f32 *, 0x38) < 34.0f) {
            return 1;
        }
        goto block_11;
    }
}
