/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008FA1C0[];

void func_008F7DA0(void) {
    M2C_UNK *var_a0;
    s32 *temp_v1;
    s32 var_a1;
    s32 var_a2;

    var_a1 = 0;
    var_a0 = ((void *)D_008FA1C0);
    do {
        var_a2 = 0;
        if (0 < 4) {
            do {
                temp_v1 = var_a0 + (var_a2 * 4);
                var_a2 += 1;
                *temp_v1 = 0;
            } while (var_a2 < 4);
        }
        var_a1 += 1;
        var_a0 += 0x10;
    } while (var_a1 < 8);
}
