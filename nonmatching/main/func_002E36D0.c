/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001EF900(s32, s32);                    /* extern */

void func_002E36D0(void *arg0, u8 arg1) {
    s32 temp_s0;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 *, 0x11) = arg1;
        temp_s0 = M2C_FIELD(arg0, u8 *, 0x10) & M2C_FIELD(arg0, u8 *, 0x11) & 0xFF;
        func_001EF900(M2C_FIELD(arg0, s32 *, 4), temp_s0);
        func_001EF900(M2C_FIELD(arg0, s32 *, 8), temp_s0 & 0xFF & M2C_FIELD(arg0, u8 *, 0x12) & 0xFF);
    }
}
