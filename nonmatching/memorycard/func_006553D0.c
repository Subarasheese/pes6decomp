/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065E7F0[];
extern char D_0065EA44[];

void func_006553D0(void) {
    s32 *var_a1;
    s32 *var_a2;
    s32 var_a0;

    var_a2 = ((void *)D_0065E7F0);
    var_a0 = 0x49;
    var_a1 = ((void *)D_0065EA44);
    do {
        var_a0 -= 1;
        *var_a1 = *var_a2;
        var_a2 += 4;
        var_a1 += 4;
    } while (var_a0 > 0);
    M2C_FIELD(((void *)D_0065EA44), s32 *, 0x11C) = 0;
}
