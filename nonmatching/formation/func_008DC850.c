/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008DC850(void *arg0, s8 arg1, s8 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_a3;

    M2C_FIELD(arg0, s8 *, 0) = arg1;
    temp_a3 = arg3 & 0xFF;
    M2C_FIELD(arg0, s8 *, 1) = arg2;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    if (temp_a3 != 0xFF) {
        temp_a1 = arg1 & 0xFF;
        if ((temp_a1 != 4) && (temp_a1 != 3)) {
            return;
        }
        M2C_FIELD(arg0, s16 *, 2) = (s16) ((arg2 & 0xFF) - temp_a3);
    }
}
