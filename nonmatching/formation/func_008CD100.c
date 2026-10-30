/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008D0900(s32, s32);                    /* extern */

void func_008CD100(void *arg0, M2C_UNK arg1, s32 arg2) {
    s8 temp_s0;

    temp_s0 = (arg2 & 0xFF) + 1;
    func_008D0900(arg0 + 0x480, temp_s0 & 0xFF);
    M2C_FIELD(arg0, s8 *, 0x15) = temp_s0;
}
