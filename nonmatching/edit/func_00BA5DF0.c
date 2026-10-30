/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern s32 func_001E6C50(void *);
extern s32 D_003EAF68;
extern s32 D_003EAF6C;

void func_00BA5DF0(void) {
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    do {
        temp_v0 = func_001E6E10(var_s0 + 0x7346);
        if (temp_v0 != NULL) {
            func_001E6C50(temp_v0);
        }
        var_s0 += 1;
    } while (var_s0 < 0x20);
    D_003EAF68 = 0;
    D_003EAF6C = 0;
}
