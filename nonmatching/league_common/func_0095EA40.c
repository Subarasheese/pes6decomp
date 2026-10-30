/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B8DC0(void);
extern s32 D_003E7B00;
extern s32 D_003E7B04;

void func_0095EA40(s64 arg0) {
    s64 temp_v1;

    temp_v1 = (s64) (arg0 << 0x38) >> 0x38;
    D_003E7B00 = (s32) temp_v1;
    if (temp_v1 == 0) {
        D_003E7B04 = -3;
        func_001B8DC0();
    }
}
