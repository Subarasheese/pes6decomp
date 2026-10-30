/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00AFDD10(s32 arg0, s32 arg1) {
    s32 var_a7;
    s32 var_t0;
    u16 *var_a4;
    u8 *var_a3;
    void *var_a5;
    void *var_a6;
    void *var_v0;

    var_v0 = func_00228A80();
    if (var_v0 != NULL) {
        var_t0 = 0;
        var_a6 = var_v0;
        var_a5 = var_v0;
loop_5:
        if (M2C_FIELD(var_v0, u16 *, 0x33DDE) != 0xFFFF) {
            var_a7 = 0;
            var_a4 = var_a6 + 0x339DE;
            var_a3 = var_a5 + 0x33DE8;
loop_7:
            if (((arg0 & 0xFFFF) == *var_a4) && ((arg1 & 0xFF) == *var_a3)) {
                return 1;
            }
            var_a7 += 1;
            var_a4 += 2;
            var_a3 += 1;
            if (var_a7 >= 0x20) {
                goto block_12;
            }
            goto loop_7;
        }
block_12:
        var_t0 += 1;
        var_v0 += 2;
        var_a6 += 0x40;
        var_a5 += 0x20;
        if (var_t0 >= 4) {
            goto block_13;
        }
        goto loop_5;
    }
block_13:
    return 0;
}
