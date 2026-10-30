/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0015E350(s32);                         /* extern */
extern char D_005BEDF8[];

void func_0015E588(s32 *arg0) {
    s32 *var_s1;
    s32 *var_s2;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s0;

    var_s2 = ((void *)D_005BEDF8);
    var_s1 = arg0;
    var_s0 = 0;
    do {
        temp_v0 = *var_s1;
        temp_a0 = var_s0;
        var_s0 += 1;
        var_s1 += 4;
        *var_s2 = temp_v0;
        func_0015E350(temp_a0);
        var_s2 += 4;
    } while (var_s0 < 4);
}
