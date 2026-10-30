/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00189778(void *);                      /* extern */
extern s32 (*D_005C1494)();

s32 func_0017B240(void *arg0, u16 *arg1) {
    s32 temp_s0;
    u16 temp_v1;

    temp_v1 = *arg1;
    temp_s0 = D_005C1494();
    if ((s32) temp_v1 >= 5) {
        if ((s32) temp_v1 < 8) {
            M2C_FIELD(arg0, s32 *, 0x920) = 1;
            M2C_FIELD(arg0, s32 *, 0x91C) = 1;
            func_00189778(arg0 + 0x928);
        } else if ((s32) temp_v1 < 0xB) {
            M2C_FIELD(arg0, s32 *, 0x91C) = 0;
            M2C_FIELD(arg0, s32 *, 0x920) = 1;
            func_00189778(arg0 + 0x928);
        }
    }
    return temp_s0;
}
