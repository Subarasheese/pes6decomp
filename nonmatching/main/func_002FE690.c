/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0023A0C0();                                /* extern */
s32 func_0023A110();                                /* extern */
M2C_UNK func_002D4C40(M2C_UNK);                     /* extern */
M2C_UNK func_00305E50(s32);                         /* extern */
M2C_UNK func_00305E60(s32, M2C_UNK *);              /* extern */
s32 func_008FF9E0();                                /* extern */
extern M2C_UNK func_002FE600;

s32 func_002FE690(s32 arg0) {
    if (((func_0023A0C0() & 0xFF) == 1) && ((func_0023A110() & 0xFF) == 1)) {
        func_00305E50(arg0);
        return 0;
    }
    if (func_008FF9E0() != 0) {
        func_002D4C40(0x1A);
        func_00305E60(arg0, &func_002FE600);
        return 1;
    }
    return 0;
}
