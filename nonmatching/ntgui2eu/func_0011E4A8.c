/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011C8A40[];

void func_0011E4A8(void) {
    s32 *var_v0;
    s32 var_a0;

    var_a0 = 0xFF;
    var_v0 = ((void *)D_011C8A40) + 0xB34C;
    do {
        *var_v0 = 0;
        var_a0 -= 1;
        var_v0 -= 0xB4;
    } while (var_a0 >= 0);
}
