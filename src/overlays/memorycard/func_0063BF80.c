/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_0063BF80(void *arg0, u8 arg1) {
    s32 temp_a1;
    temp_a1 = arg1;
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
