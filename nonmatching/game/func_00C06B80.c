/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(void *, u16, M2C_UNK);        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */

s32 func_00C06B80(void *arg0) {
    u16 temp_s0;

    temp_s0 = M2C_FIELD(arg0, u16 *, 0x120);
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), temp_s0) & 0xFFFF) < 0x1801) {
        func_0096D0A0(arg0, temp_s0, 1);
    } else {
        func_0096D0A0(arg0, temp_s0, 0);
    }
    return 2;
}
