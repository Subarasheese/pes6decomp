/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001DF250(void *arg0, void *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (M2C_FIELD(arg0, f32 *, 0x2C) != M2C_FIELD(arg1, f32 *, 0)) {
            goto block_3;
        }
        if (M2C_FIELD(arg0, f32 *, 0x30) == M2C_FIELD(arg1, f32 *, 4)) {

        } else {
block_3:
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0);
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(arg0, u8 *, 0x74) = (u8) (M2C_FIELD(arg0, u8 *, 0x74) | 1);
        }
    }
}
