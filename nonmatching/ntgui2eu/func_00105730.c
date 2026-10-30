/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011B18F0[];

void func_00105730(void) {
    s32 *var_v0;
    s32 var_v1;

    var_v1 = 0x1F;
    var_v0 = ((void *)D_011B18F0) + 0xB4;
    do {
        var_v1 -= 1;
        *var_v0 = 0;
        var_v0 -= 4;
    } while (var_v1 >= 0);
}
