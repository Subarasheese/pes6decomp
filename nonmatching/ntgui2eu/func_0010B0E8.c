/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_002BA530[];
extern char D_002C0040[];

void func_0010B0E8(void) {
    M2C_UNK **var_v0;
    s32 var_a0;

    var_v0 = ((void *)D_002BA530) + 0x4924;
    var_a0 = 5;
    do {
        var_a0 -= 1;
        *var_v0 = ((void *)D_002C0040);
        var_v0 -= 0xE90;
    } while (var_a0 >= 0);
}
