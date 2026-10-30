/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern s32 func_00154490(s32, s32);
s32 func_00849850(M2C_UNK);                         /* extern */
extern s32 D_003EA770;

s32 func_00BA91C0(void) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    if (D_003EA770 == 0) {
        D_003EA770 = ((s64) (0 << 0x20) >> 0x20) | 0xFF;
    }
    if (func_002DCA30() != 0) {
        return (func_00849850(0) == 0) ? 0 : 8;
    }
    var_s1 = 0;
loop_5:
    if (D_003EA770 & (1 << var_s1)) {
        if (func_00154490(var_s1, 8) != 0) {
            var_s0 = 8;
        } else {
            goto block_8;
        }
    } else {
block_8:
        var_s1 += 1;
        if (var_s1 < 8) {
            goto loop_5;
        }
    }
    return var_s0;
}
