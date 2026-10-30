/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00AB3C60(void *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    return ((f32) (M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), u16 *, 8) * 2) - M2C_FIELD(temp_v1, f32 *, 0x38)) / (f32) arg1;
}
