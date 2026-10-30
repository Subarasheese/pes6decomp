/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_002BE490(M2C_UNK, M2C_UNK);                /* extern */
extern char D_00591BBF[];

s32 func_00BC40C0(void) {
    s32 var_v0;
    s64 temp_s0;

    if ((*(u8 *)D_00591BBF) == 2) {
        temp_s0 = (s64) (func_002BE490(0, 1) << 0x30) >> 0x30;
        if (temp_s0 != ((s64) (func_002BE490(1, 1) << 0x30) >> 0x30)) {
            var_v0 = 5;
        } else {
            goto block_3;
        }
    } else {
block_3:
        var_v0 = 3;
    }
    return var_v0;
}
