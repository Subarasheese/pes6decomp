/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_0027B880(s32);                         /* extern */
extern char D_005A24C0[];

void func_00297390(void) {
    s32 temp_a0;
    s32 var_s1;
    s32 *var_s0;

    var_s1 = 0;
    var_s0 = ((void *)D_005A24C0);
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            func_0027B880(temp_a0);
            *var_s0 = 0;
        }
        var_s1 += 1;
        var_s0 += 0x18;
    } while (var_s1 < 0x1C);
}
