/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002247E0(s32, s32, s8);
M2C_UNK func_009314C0(s32);                         /* extern */
s32 func_009318B0();                                /* extern */

void func_00931B90(s32 arg0, s32 arg1) {
    func_002247E0(arg0, arg1 & 0xFF, func_009318B0() & 0xFF);
    func_009314C0(arg0);
}
