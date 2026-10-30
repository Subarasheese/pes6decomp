/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern s32 func_001E6C50(void *);
extern u32 D_003EAF68;
extern s32 D_003EAF6C;

s32 func_00BA5EF0(void) {
    s32 temp_s0;
    s32 var_a0;
    void *temp_v0;

    var_a0 = 0;
loop_1:
    if (((u32) D_003EAF68 >> var_a0) & 1) {
        var_a0 += 1;
        if (var_a0 >= 0x20) {
            return 0x7346;
        }
        goto loop_1;
    }
    temp_s0 = var_a0 + 0x7346;
    D_003EAF68 |= 1 << var_a0;
    temp_v0 = func_001E6E10(temp_s0);
    if (temp_v0 != NULL) {
        func_001E6C50(temp_v0);
    }
    D_003EAF6C += 1;
    return temp_s0;
}
