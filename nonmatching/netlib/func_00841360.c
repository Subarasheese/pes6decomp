/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
s32 func_00836E20();                                /* extern */
M2C_UNK func_00841170(s32, s32);                    /* extern */

void func_00841360(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_00836E20();
    func_0082C2A0();
    func_00841170(temp_s0, arg0);
}
