/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070();                                /* extern */
M2C_UNK func_009B32D0(s32, s32, s32);               /* extern */

void func_00AB3820(s32 arg0, s32 arg1) {
    func_009B32D0(arg0, arg1, ((u32) (func_009B3070() & 0xFFFF) >> 1) & 0xFFFF);
}
