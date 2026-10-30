/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00225B20(u8);                              /* extern */
M2C_UNK func_009A8950(s32, s32, s32, M2C_UNK, u8 *, M2C_UNK); /* extern */
M2C_UNK func_009A8AF0(u8 *, M2C_UNK);               /* extern */

s32 func_009A8A50(s32 arg0, s32 arg1) {
    u8 sp4E;
    u8 sp4F;
    s32 var_s0;

    func_009A8AF0(&sp4E, 0);
    var_s0 = 0;
    if ((s32) sp4E > 0) {
loop_1:
        func_009A8950(arg0, arg1, var_s0, 0, &sp4F, 0);
        if (func_00225B20(sp4F) != 1) {
            var_s0 = (var_s0 + 1) & 0xFF;
            if (var_s0 >= (s32) sp4E) {
                goto block_6;
            }
            goto loop_1;
        }
        return var_s0;
    }
block_6:
    return 0xFF;
}
