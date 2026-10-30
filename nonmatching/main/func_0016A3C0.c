/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C83D8(s32, s8 *, M2C_UNK);              /* extern */
extern char D_0050E334[];

s32 func_0016A3C0(s8 *arg0) {
    s32 var_s0;
    s32 var_s1;

    if (*arg0 == 0) {
        goto block_7;
    }
    var_s1 = 0;
    var_s0 = (*(s32 *)D_0050E334);
    if (*(s32 *)0x50E338 > 0) {
loop_5:
        var_s1 += 1;
        if (func_001C83D8(var_s0, arg0, 0xC) != 0) {
            var_s0 += 0x10;
            if (var_s1 >= *(s32 *)0x50E338) {
                goto block_7;
            }
            goto loop_5;
        }
        return var_s0;
    }
block_7:
    return 0;
}
