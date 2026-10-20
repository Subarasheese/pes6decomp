/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *D_003E7574;

s32 func_0030EE60(f32 *arg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(D_003E7574, f32 *, 0x10);
    *arg0 = temp_f0;
    return (s32) temp_f0;
}
