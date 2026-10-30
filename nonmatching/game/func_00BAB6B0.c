/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591F24[];
extern char D_00CBBE10[];

s32 func_00BAB6B0(u8 *arg0) {
    M2C_UNK *var_a0;
    s32 var_a1;

    if ((*(u8 *)D_00591F24) == 1) {
        var_a1 = 0;
        var_a0 = ((void *)D_00CBBE10);
loop_2:
        if (M2C_FIELD(var_a0, u8 *, 0x11) != *arg0) {
            var_a1 += 1;
            var_a0 += 1;
            if (var_a1 >= 0xA) {
                goto block_7;
            }
            goto loop_2;
        }
        return 1;
    }
block_7:
    return 0;
}
