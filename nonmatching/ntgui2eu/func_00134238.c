/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011D6E00[];
extern char D_011D6F00[];

void func_00134238(void) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0xFF;
    var_v0 = ((void *)D_011D6E00) + 0xFF;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    (*(s32 *)D_011D6F00) = 0;
}
