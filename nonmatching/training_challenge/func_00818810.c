/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00592810[];

s32 func_00818810(u8 *arg0, s32 arg1) {
    s32 var_a6;
    s32 var_a7;
    s32 var_t1;
    s32 var_v0;
    u32 var_t0;
    u8 *temp_a3;
    u8 temp_a5;

    temp_a5 = *arg0;
    if (temp_a5 == (*(u8 *)D_00592810)) {
        var_v0 = 0xD;
    } else {
        var_a7 = 0;
        var_v0 = 0xD;
        var_t1 = 0;
        var_a6 = arg1;
loop_4:
        temp_a3 = arg1 + var_t1;
        var_t0 = 0;
        if (*temp_a3 != 0) {
loop_6:
            if (temp_a5 == M2C_FIELD((var_a6 + var_t0), u8 *, 0x18)) {
                if (var_t1 == 0) {
                    var_v0 = 0xE;
                }
                var_a7 = 1;
            } else {
                var_t0 += 1;
                if (var_t0 >= (u8) *temp_a3) {

                } else {
                    goto loop_6;
                }
            }
        }
        if (var_a7 != 1) {
            var_t1 += 1;
            var_a6 += 0xB;
            if (var_t1 == 0) {
                goto loop_4;
            }
        }
    }
    if ((var_v0 != 0xE) && (temp_a5 != (*(u8 *)D_00592810))) {
        var_v0 = 0xE;
    }
    return var_v0;
}
