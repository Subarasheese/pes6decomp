/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B3984[];
extern char D_005B3988[];

void func_001484B0(void) {
    s32 *var_v0;
    s32 var_v1;

    var_v1 = 4;
    var_v0 = ((void *)D_005B3988) + 0x1440;
    do {
        *var_v0 = -1;
        var_v1 -= 1;
        var_v0 -= 0x510;
    } while (var_v1 >= 0);
    (*(s32 *)D_005B3984) = 0;
}
