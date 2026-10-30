/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u64 func_00147DA0(s32, s32);
M2C_UNK func_00138C70(s32, s32, s32);               /* extern */
M2C_UNK func_001463C0(s32, s32 *, s32 *);           /* extern */

void func_00138C10(s32 arg0, s32 arg1) {
    s32 sp28;
    s32 sp2C;

    func_001463C0(arg1, &sp2C, &sp28);
    if (func_00147DA0(sp2C, sp28) == 0) {
        func_00138C70(arg0, sp2C, sp28);
    }
}
