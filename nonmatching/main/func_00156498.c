/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_00376DE4)(s32);

void func_00156498(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC0);
    if (temp_v0 != 0) {
        D_00376DE4(temp_v0);
    }
}
