/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;

s32 func_00A10A30(void *arg0, s32 arg1) {
    s32 temp_v0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0x4841U) {
        temp_v0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
        if (arg1 >= temp_v0) {
            return temp_v0;
        }
    }
    return arg1;
}
