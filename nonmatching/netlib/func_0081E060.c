/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6D30(s32, s32);
M2C_UNK func_001D6EF0(s32, s32, s32);               /* extern */
s32 func_001F0160(s32);                             /* extern */

void func_0081E060(s32 arg0, s32 arg1) {
    func_001D6EF0(arg0, func_001F0160(func_001D6D30(arg0, arg1)), arg1);
}
