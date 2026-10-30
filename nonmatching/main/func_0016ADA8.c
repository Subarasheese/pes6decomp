/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0050E440[];

void *func_0016ADA8(void) {
    s32 *var_v1;
    s32 var_a0;
    void *var_v0;

    var_a0 = 0;
    if (M2C_FIELD(((void *)D_0050E440), s32 *, 4) != 0) {
        var_v1 = ((void *)D_0050E440) + 4;
loop_2:
        var_a0 += 1;
        var_v1 += 8;
        if (var_a0 < 0x28) {
            if (*var_v1 != 0) {
                goto loop_2;
            }
        }
    }
    var_v0 = NULL;
    if (var_a0 != 0x28) {
        var_v0 = (var_a0 * 8) + (((void *)D_0050E440) - 0x1BC0);
    }
    return var_v0;
}
