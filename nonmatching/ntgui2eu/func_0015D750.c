/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011E6B64[];
extern char D_011E6B68[];
extern char D_011E6B70[];
extern char D_011E6B80[];
extern char D_011E6B90[];
extern char D_011E6B94[];

void func_0015D750(void) {
    s32 *var_v0;
    s32 *var_v1;
    s32 var_a0;

    var_v0 = ((void *)D_011E6B80);
    var_v1 = ((void *)D_011E6B70);
    var_a0 = 3;
    do {
        *var_v1 = 0;
        var_a0 -= 1;
        *var_v0 = 0;
        var_v1 += 4;
        var_v0 += 4;
    } while (var_a0 >= 0);
    (*(s32 *)D_011E6B90) = 0;
    (*(s32 *)D_011E6B94) = 0;
    (*(s32 *)D_011E6B68) = 0;
    (*(s32 *)D_011E6B64) = 0;
}
