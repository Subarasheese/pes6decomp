/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00957FF0(void);
M2C_UNK func_002F3D60(s32, s32, u32, s32);          /* extern */

s32 func_0095F760(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    func_002F3D60(arg0, arg3, func_00957FF0(), arg2);
    return arg0;
}
