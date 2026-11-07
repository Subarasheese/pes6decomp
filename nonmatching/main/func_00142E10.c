/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001398B0(s32);                             /* extern */
M2C_UNK func_00141C80();                            /* extern */
M2C_UNK func_00141C90(s32, s32, s32, s32);          /* extern */
M2C_UNK func_00142ED0(s32, s32, s32, s32, M2C_UNK, s32); /* extern */

void func_00142E10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_00141C90(func_001398B0(arg6 << 6), arg6, arg2, arg7);
    func_00142ED0(arg0, arg1, arg2, arg3, 0, arg5);
    func_00141C80();
}
