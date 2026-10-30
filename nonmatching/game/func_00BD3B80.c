/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00BD3B80(void *arg0, s8 arg1) {
    void *temp_a0;

    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x11) = arg1;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_a0, s32 *, 0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0) | 2);
}
