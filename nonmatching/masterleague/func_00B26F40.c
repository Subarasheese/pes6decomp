/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00B8C760[];

void func_00B26F40(void) {
    s32 var_a1;
    u16 *var_a0;

    var_a1 = 0;
    var_a0 = ((void *)D_00B8C760);
    do {
        if (*var_a0 != 0) {

        }
        var_a1 += 1;
        var_a0 += 2;
    } while (var_a1 < 0x138A);
}
