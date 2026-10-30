/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
extern char D_00592800[];

s32 func_009087F0(void) {
    s32 var_s1;
    s32 var_v1;
    u8 *var_s0;
    u8 temp_a0;

    var_v1 = 0;
    var_s1 = 0;
    var_s0 = ((void *)D_00592800);
loop_1:
    temp_a0 = *var_s0;
    if ((s32) temp_a0 < 8) {
        if (func_00154490((s32) temp_a0, 0x4000) == 0) {
            if (func_00154490((s32) *var_s0, 8) == 0) {
                var_v1 = 1;
                goto block_10;
            }
            return 2;
        }
        return 1;
    }
block_10:
    var_s1 += 1;
    var_s0 += 0x28;
    if (var_s1 >= 8) {
        if (var_v1 == 0) {
            if (func_00154490(0, 0x4000) == 0) {
                if (func_00154490(0, 8) != 0) {
                    return 2;
                }
                goto block_18;
            }
            return 1;
        }
block_18:
        return 0;
    }
    goto loop_1;
}
