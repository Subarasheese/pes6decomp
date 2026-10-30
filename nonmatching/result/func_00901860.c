/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00C99AD0(s32, s32);                    /* extern */

s32 func_00901860(M2C_UNK arg0, s32 arg1, s32 arg2) {
    func_001BC2B0();
    func_0026E840(0x84008401);
    func_00C99AD0(arg1, arg2);
    return 2;
}
