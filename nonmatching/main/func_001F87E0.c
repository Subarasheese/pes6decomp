/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00152130(s32, s32);                    /* extern */
M2C_UNK func_001BE4D0(s32);                         /* extern */
s32 func_001BE790();                                /* extern */
M2C_UNK func_001BE800();                            /* extern */

void func_001F87E0(s32 arg0, s32 arg1) {
    switch (arg0) {                                 /* irregular */
    case 0:
        func_001BE4D0(arg1 & 0xFF);
        return;
    default:
    case 1:
        if (func_001BE790() == 0) {
            func_00152130(arg0, arg1);
            return;
        }
        func_001BE800();
        return;
    }
}
