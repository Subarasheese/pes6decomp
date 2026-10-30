/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00159020(s16 *);                       /* extern */
extern char D_00377028[];

void func_00159170(void) {
    s16 *var_s0;
    s32 var_s1;

    var_s0 = ((void *)D_00377028);
    var_s1 = 0xF;
    do {
        if (*var_s0 == 1) {
            func_00159020(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x104;
    } while (var_s1 >= 0);
}
