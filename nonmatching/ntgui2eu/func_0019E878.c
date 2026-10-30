/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019E270(M2C_UNK, void *, M2C_UNK, s32, s32, s32); /* extern */

s32 func_0019E878(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, void *arg3) {
    return (func_0019E270(0x80000008, arg3, 0x40, M2C_FIELD(arg3, s32 *, 0x24), M2C_FIELD(arg3, s32 *, 0x28), M2C_FIELD(arg3, s32 *, 0x2C)) != 0) ? 0 : 0x800;
}
