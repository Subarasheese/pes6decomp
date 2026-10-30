/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A6E20(s8 *);                        /* extern */
M2C_UNK func_001A92C0(s8 *, s16 *);                 /* extern */

void func_0093FCB0(s16 *arg0) {
    s8 sp10;
    s32 sp1C;
    s16 sp40;
    s16 *var_a0;
    s16 *var_a1;
    s32 var_v0;
    s32 var_v1_2;
    s8 *var_v1;

    var_a0 = arg0;
    var_v0 = 0x220;
    var_v1 = &sp10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_a1 = &sp40;
    var_v1_2 = 0x15;
    do {
        var_v1_2 -= 1;
        *var_a1 = *var_a0;
        var_a0 += 2;
        var_a1 += 2;
    } while (var_v1_2 > 0);
    sp1C = 2;
    func_001A92C0(&sp10, var_a1);
    func_001A6E20(&sp10);
}
