/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0063BF80(void *arg0, s32 arg1) {
    s16 temp_a1;

    temp_a1 = arg1 & 0xFF;
    if ((temp_a1 >= 0) && (temp_a1 < 4)) {
        M2C_FIELD(arg0, s16 *, 0) = 0;
        M2C_FIELD(arg0, s16 *, 2) = temp_a1;
        return;
    }
    if ((temp_a1 >= 4) && (temp_a1 < 8)) {
        M2C_FIELD(arg0, s16 *, 0) = 1;
        M2C_FIELD(arg0, s16 *, 2) = (s16) (temp_a1 - 4);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = 0;
}
