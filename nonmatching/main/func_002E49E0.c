/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002E5980(s32, s16);                    /* extern */

void func_002E49E0(void *arg0, s8 arg1) {
    s16 temp_a2;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0xA) = arg1;
        temp_a2 = M2C_FIELD(arg0, s16 *, 8);
        if (temp_a2 != -1) {
            func_002E5980(M2C_FIELD(arg0, s32 *, 0x20) + (temp_a2 * 0x50), temp_a2);
        }
    }
}
