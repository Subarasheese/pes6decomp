/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F7970(void);
extern char D_00592800[];
extern char D_0059295B[];
extern char D_0059295C[];

s32 func_0026B8B0(s32 arg0) {
    s32 var_s0;
    s32 var_v0;
    u8 *var_a0;

    var_s0 = arg0;
    if (func_002F7970() != 0) {
        return -(var_s0 != 0);
    }
    var_v0 = 0;
    var_a0 = ((void *)D_00592800);
loop_3:
    if (var_s0 != *var_a0) {
        var_v0 += 1;
        var_a0 += 0x28;
        if (var_v0 >= 8) {
            if ((*(u8 *)D_0059295B) == var_s0) {

            } else if ((*(u8 *)D_0059295C) != var_s0) {
                var_s0 = -1;
            }
            return var_s0;
        }
        goto loop_3;
    }
    return var_v0;
}
