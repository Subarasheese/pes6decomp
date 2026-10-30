/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00156388(void *);
extern char D_00376AE0[];

void func_001563B0(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = ((void *)D_00376AE0);
    var_s1 = 0xF;
    do {
        if (*var_s0 == 1) {
            func_00156388(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x30;
    } while (var_s1 >= 0);
}
