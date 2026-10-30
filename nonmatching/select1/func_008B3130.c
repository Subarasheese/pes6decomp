/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E7100(s32);
extern s32 func_0021E000(u32);
M2C_UNK func_001E6FD0(void *, s32, s32);            /* extern */

void func_008B3130(u32 arg0, s32 arg1, s32 arg2) {
    func_001E6FD0(func_001E7100(func_0021E000(arg0)), arg1, arg2);
}
