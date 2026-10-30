/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B94070(u16, s32);                    /* extern */
extern char D_00CB4D80[];

void func_00B93FE0(s32 arg0) {
    s32 var_s1;
    u16 *var_s1_2;

    var_s1 = 0;
    do {
        func_00B94070(var_s1 & 0xFFFF, arg0);
        var_s1 += 1;
    } while (var_s1 < 0xCC);
    if ((*(u16 *)D_00CB4D80) != 0xFFFF) {
        var_s1_2 = ((void *)D_00CB4D80);
        do {
            func_00B94070(*var_s1_2, arg0);
            var_s1_2 += 2;
        } while (*var_s1_2 != 0xFFFF);
    }
}
