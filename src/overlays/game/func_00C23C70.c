/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C48E8(void *, s32, s32);
extern char D_00CB52A0[];

void func_00C23C70(void) {
    s32 var_s1;
    char *var_s0;

    var_s1 = 0;
    var_s0 = D_00CB52A0;
    do {
        func_001C48E8(var_s0 + 0x6BC, 0, 0x40);
        var_s1 += 1;
        var_s0 += 0x40;
    } while (var_s1 < 0x16);
}
