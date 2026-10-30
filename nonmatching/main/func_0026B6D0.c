/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F7970(void);
extern char D_003AB4A8[];
extern char D_003AE998[];
extern char D_00592800[];
extern char D_0059295B[];
extern char D_0059295C[];

s16 func_0026B6D0(void) {
    s16 var_s1;
    s32 var_a0;
    s32 var_s2;
    s8 *var_s0;
    u8 *var_v1;

    var_s2 = 0;
    var_s1 = 0;
    var_s0 = ((void *)D_003AB4A8);
    do {
        if (func_002F7970() != 0) {
            if (var_s2 == 0) {
                var_a0 = 0;
            } else {
                var_a0 = -1;
            }
        } else {
            var_a0 = 0;
            var_v1 = ((void *)D_00592800);
loop_7:
            if (var_s2 == *var_v1) {

            } else {
                var_a0 += 1;
                var_v1 += 0x28;
                if (var_a0 >= 8) {
                    if ((*(u8 *)D_0059295B) == var_s2) {
                        var_a0 = var_s2;
                    } else if ((*(u8 *)D_0059295C) == var_s2) {
                        var_a0 = var_s2;
                    } else {
                        var_a0 = -1;
                    }
                } else {
                    goto loop_7;
                }
            }
        }
        if (var_a0 >= 0) {
            var_s1 |= 1 << *var_s0;
        }
        var_s2 += 1;
        var_s0 += 1;
    } while (var_s2 < 8);
    (*(s16 *)D_003AE998) = var_s1;
    return var_s1;
}
