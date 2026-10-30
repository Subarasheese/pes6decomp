/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA820;
extern char D_00CCBD28[];
extern char D_00CCBD30[];

void func_00C72190(void) {
    M2C_UNK *var_a0;
    s32 *var_a1;
    s32 var_a2;
    s8 var_v0;

    var_v0 = 0;
    var_a2 = 0;
    var_a1 = ((void *)D_00CCBD28);
    var_a0 = ((void *)D_00CCBD30);
loop_1:
    D_003EA820 = var_a2;
    if (*var_a1 != 0) {
        var_v0 = M2C_FIELD(var_a0, s8 *, 0x28);
    }
    if (var_v0 == 0) {
        var_a2 += 1;
        var_a1 += 4;
        var_a0 += 0x50;
        if (var_a2 >= 2) {

        } else {
            goto loop_1;
        }
    }
}
