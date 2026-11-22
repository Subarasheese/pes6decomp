/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00273B90(s8 *);

extern char D_0058E7F0[];

void func_00273E70(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s1 = 0;
    var_s0 = ((void *)D_0058E7F0);
    do {
        func_00273B90(var_s0);
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x16);
}
