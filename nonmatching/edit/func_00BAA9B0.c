/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C80F0();                                /* extern */
extern char D_00CB5E90[];

s32 func_00BAA9B0(s8 *arg0) {
    s32 temp_v0;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_t0;
    s8 **var_a3;
    s8 *var_s0;

    var_s0 = arg0;
    temp_v0 = func_001C80F0();
    var_t0 = 0;
    if (temp_v0 > 0) {
loop_2:
        var_a5 = 0;
        var_a6 = 0;
        var_a4 = 0;
        do {
            var_a7 = 0;
            var_a3 = ((void *)D_00CB5E90) + var_a4;
loop_4:
            if (*var_s0 == **var_a3) {
                var_a5 = 1;
            }
            var_a7 += 1;
            var_a3 += 0x3C;
            if (var_a7 < 5) {
                goto loop_4;
            }
            var_a6 += 1;
            var_a4 += 4;
        } while (var_a6 < 0xF);
        if (var_a5 != 0) {
            var_t0 += 1;
            var_s0 += 1;
            if (var_t0 >= temp_v0) {
                goto block_14;
            }
            goto loop_2;
        }
        return 1;
    }
block_14:
    return 0;
}
