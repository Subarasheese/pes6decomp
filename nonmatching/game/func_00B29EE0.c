/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B2A330(void);
s32 func_00B29C80();                                /* extern */
s32 func_00B29CB0();                                /* extern */
M2C_UNK func_00B2A1E0(s32, s32);                    /* extern */

void func_00B29EE0(s32 arg0, s32 arg1) {
    if (func_00B29CB0() == 0) {
        if (func_00B29C80() != 0) {
            func_00B2A330();
        }
    } else {
        func_00B2A1E0(arg0 + 0x124, arg1);
    }
}
