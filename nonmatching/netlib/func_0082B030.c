/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A5F70[];

s32 func_0082B030(void) {
    s32 var_a0;
    void *temp_v0;

    var_a0 = 0;
    do {
        temp_v0 = ((void *)D_008A5F70) + (var_a0 * 4);
        var_a0 += 1;
        M2C_FIELD(temp_v0, s32 *, 0x3744) = 0;
    } while (var_a0 < 0x64);
    return 1;
}
