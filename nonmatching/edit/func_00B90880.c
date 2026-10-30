/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0021FE80(s32, s32);
extern void func_0021FE50(s32);
M2C_UNK func_0021FEB0(s32);                         /* extern */
extern char D_00CB3E70[];
extern char D_00CB3EB0[];

void func_00B90880(void) {
    M2C_UNK *var_s0;
    s32 *var_s1_2;
    u32 var_s0_2;
    u32 var_s1;

    func_0021FE50(5);
    var_s1 = 0;
    var_s0 = ((void *)D_00CB3E70);
    do {
        func_0021FE80(M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4));
        var_s1 += 1;
        var_s0 += 8;
    } while (var_s1 < 8U);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_00CB3EB0);
    do {
        func_0021FEB0(*var_s1_2);
        var_s0_2 += 1;
        var_s1_2 += 4;
    } while (var_s0_2 < 3U);
}
