/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK FlushCache(M2C_UNK);                     /* extern */
M2C_UNK func_002DA0A8(s32, s32, s32, s32);          /* extern */
M2C_UNK func_002DAC60(s32);                         /* extern */

s32 func_00843DA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_002DAC60(arg3);
    FlushCache(0);
    func_002DA0A8(arg0, arg1, arg2, arg3);
    return 0;
}
