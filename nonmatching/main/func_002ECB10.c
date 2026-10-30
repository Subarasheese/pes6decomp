/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002ECB10(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a5;
    s32 var_a6;
    void *var_a3;
    void *var_a4;

    var_a6 = 0;
    var_a4 = arg0;
    do {
        var_a5 = 0;
        var_a3 = var_a4;
loop_2:
        if ((arg1 & 0xFFFF) == M2C_FIELD(var_a3, s32 *, 0x1944)) {
            M2C_FIELD(var_a3, s32 *, 0x1994) = arg2;
        }
        var_a5 += 1;
        var_a3 += 4;
        if (var_a5 < 0x14) {
            goto loop_2;
        }
        var_a6 += 1;
        var_a4 += 0x4A4;
    } while (var_a6 < 0x14);
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
}
