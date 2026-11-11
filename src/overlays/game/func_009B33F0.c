/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 Pes6Math_Atan2Fixed(s32, s32);                        /* extern */

s32 func_009B33F0(void *arg0, void *arg1) {
    return Pes6Math_Atan2Fixed(-(s32) (M2C_FIELD(arg1, f32 *, 0xE8) - M2C_FIELD(arg0, f32 *, 0xE8)), (s32) (M2C_FIELD(arg1, f32 *, 0xE0) - M2C_FIELD(arg0, f32 *, 0xE0))) & 0xFFFF;
}
