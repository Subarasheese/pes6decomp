/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0023A0C0();                                /* extern */
s32 func_0023A110();                                /* extern */
s32 func_0023A380();                                /* extern */
M2C_UNK func_002D4BE0(M2C_UNK);                     /* extern */
M2C_UNK func_00305E50(s32);                         /* extern */

s32 func_002FE600(s32 arg0) {
    if (((func_0023A0C0() & 0xFF) == 1) && ((func_0023A110() & 0xFF) == 1)) {
        func_002D4BE0(0x1A);
        func_00305E50(arg0);
        goto block_8;
    }
    if (func_0023A380() == 0) {
        func_002D4BE0(0x1A);
        func_00305E50(arg0);
block_8:
        return 1;
    }
    return 0;
}
